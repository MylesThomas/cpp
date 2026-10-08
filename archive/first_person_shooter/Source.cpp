#include <iostream>
#include <chrono>

using namespace std;

// #include <Windows.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>


int nScreenWidth = 120;// Console Screen Size X (columns)
int nScreenHeight = 40;// Console Screen Size Y (rows)

float fPlayerX = 8.0f;			// Player Start Position (middle of room)
float fPlayerY = 8.0f;
float fPlayerA = 0.0f;			// Player Start Rotation

int nMapWidth = 16;// World Dimensions
int nMapHeight = 16;

float fFOV = 3.14159 / 4.0; // field of view: pi / 4 (narrow field of view)
float fDepth = 16.0f; // how far too look

int main()
{
    // Create Screen Buffer
	wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;

    // Create map
    wstring map;

    // Start with a big empty room of 16x16
    map += L"################"; // 1
    map += L"#..............#"; // 2
    map += L"#..............#"; // 3
    map += L"#..............#"; // 4
    map += L"#..............#"; // 5
    map += L"#..............#"; // 6
    map += L"#..............#"; // 7
    map += L"#..............#"; // 8
    map += L"#..............#"; // 9
    map += L"#..............#"; // 10
    map += L"#..............#"; // 11
    map += L"#..............#"; // 12
    map += L"#..............#"; // 13
    map += L"#..............#"; // 14
    map += L"#..............#"; // 15
    map += L"################"; // 16

    auto tp1 = chrono::system_clock::now();
    auto tp2 = chrono::system_clock::now();
    
    

    // Game loop
    // - using 1 works, even if you get made fun of it for using it
    while(1)
    {

        // Updating time
        tp2 = chrono::system_clock::now();
        chrono::duration<float> elapsedTime = tp2 - tp1;
        tp1 = tp2;
        float fElapsedTime = elapsedTime.count();


        // Controlls
        // Handle CCW Rotation
        if (GetAsyncKeyState((unsigned short)'A') & 0x8000)
            fPlayerA -= (0.1f) * fElapsedTime; // Makes the rotation more controlled

        if (GetAsyncKeyState((unsigned short)'D') & 0x8000)
            fPlayerA += (0.1f) * fElapsedTime;

        

        // Computation for 1 axis, for each column on the screen
        for (int x = 0; x < nScreenWidth; x++)
        {
            // How far does the 120 rays travel until it hits a surface/a wall?

            // 1. Take player angle, try to find starting angle for field of view.
            // Take field of view, bisect/divide it by 2
            float fRayAngle = (fPlayerA - fFOV / 2.0f) + ((float)x / (float)nScreenWidth * fFOV);

            // 2. Track distance between player and the wall
            float fDistanceToWall = 0;
            bool bHitWall = false;

            float fEyeX = sinf(fRayAngle); // Unit vector for ray in player space
            float fEyeY = cosf(fRayAngle); // Unit vector for ray in player space
            

            while (!bHitWall && fDistanceToWall < fDepth)
            // 2nd arg: putting max limit on how far we check, since we might not hit a wall!
            {
                fDistanceToWall += 0.1f; // small increments until we hit the wall

                // extend unit vector until 
                int nTestX = (int)(fPlayerX + fEyeX + fDistanceToWall);
                int nTestY = (int)(fPlayerY + fEyeY + fDistanceToWall);

                // Test if the ray is out of bounds
                if (nTestX < 0 || nTestX >= nMapWidth || nTestY < 0 || nTestY >= nMapHeight)
                {
                    bHitWall = true;
                    fDistanceToWall = fDepth; // set distance to max depth
                }
                // But if we are in bounds...
                else
                {
                    // Check cells individually on the map
                    // - convert 2d map into 1d
                    if (map[nTestY * nMapWidth + nTestX] == '#')
                    {
                        bHitWall = true;
                    }
                }
                
            }

            // Calculate distance to ceiling and floor
            // - ceiling: take midpoint, subtract proportion of screen height (relative: as distance to wall increases, subtraction gets smaller, so higher ceiling!) [why stars don't move in night sky - infinity away] 
            int nCeiling = (float)(nScreenHeight / 2.0) - nScreenHeight / ((float)fDistanceToWall);
            // floor: mirror of the ceiling
            int nFloor = nScreenHeight - nCeiling;

            // now we know where floor begins, ceiling begins, and wall ends
            // - draw this in
            for(int y = 0; y < nScreenHeight; y++)
            {
                if(y < nCeiling)
                    screen[y*nScreenWidth + x] = ' ';
                else if(y > nCeiling && y <= nFloor)
                    screen[y*nScreenWidth + x] = '#';
                else
                    screen[y*nScreenWidth + x] = ' ';
        
            }

        }


        // Display Frame
		screen[nScreenWidth * nScreenHeight - 1] = '\0';
		WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0, 0 }, &dwBytesWritten);

    }

    return 0;
}

// That's it!