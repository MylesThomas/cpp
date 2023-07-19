# Tech With Tim - Learn C++ With Me

[Link to Youtube Playlist](https://www.youtube.com/watch?v=lPd13fsU-CQ&list=PLzMcBGfZo4-lmGC8VW0iu6qfMHjy7gLQ3)

## #0 - Setup

Steps:
- Create a repo on https://github.com named 'cpp'
    - init with a README.md and .gitignore for C++
    - Update the README.md online

- Clone the repo to your local
    - Open VSCode with the folder of the user ie. myles thomas
    - New File > Start writing notes (the file you are in now...)
    - New Terminal > git clone https://github.com/MylesThomas/cpp.git
    - cd cpp
    - mkdir tech_with_tim_series
    - cd tech_with_tim_series
    - Save this notes file into this directory as learn_cpp_with_me.md

- Open in correct environment
    - VSCode > Open folder > cpp
    - New Terminal
        - git add .
        - git commit -m "Started Tech With Tim - Learn C++ With Me"
        - git push -u origin main


## #1 - How to Compile and Run C++ Code

### Intro

Notes: 
- Tim is learning for the first time with us
- C++ is known for being difficult, but it is not that hard

### What C++ Is Used For

- Top #3 in popularity
    - 10's of millions of devs
- Used for tons of applications
    - 3d games
    - operating systems
    - compilers
    - embedded systems
    - desktop applications
    - websites
    - database software

- Super versatile/fast
    - efficient and performance optimized
        - use C++ if execution time matters!

### Install / Text Editor Setup

IDE of choice here: Sublime Text
- [Link](https://www.sublimetext.com/)
- Run Sublime Text

### Windows Setup

Mac and Linux automatically come with a C++ compiler, but Windows does not!

Download MinGW
- [Download link](https://sourceforge.net/projects/mingw/)
    - Make sure your remember where you installed it ie. C:\MinGW

Edit PATH variable:
- Edit the system and environment variables > Environment variables
- User Variables for Myles > PATH > Edit > Paste C:\MinGW\bin
    - you can now access all files in this bin folder without typing their full path out

Check that everything worked by checking what version you have:
- g++
    - it should say "fatal error: no input files"
- gcc --version
    - you may need to restart your Windows before this works

Notes:
- G++: is a C++ compiler


### What even is a Compiler?

Compiler: Takes the source code that we write, translates it into a binary executable file
- "a program that converts instructions into machine-code (or lower-level form) so that they can be read and executed by a computer"

Your computer does not recognize C++ code because it is plain text on a computer, so a compiler does the following:
- takes code and translates into machine code / binary language
    - binary program file is a program that can be run

### Our First C++ Program

Write this into Sublime Text as a .cpp file
- .cpp: C++ file

Note: Sublime Text should have syntax highlighting
- Make sure you saved into tutorial1.cpp (I did mine in folder '1' for video #1)

``` cpp
#include <iostream> // include library that lets you print to console
using namespace std;// gives access to things in standard c++ library

// creating a function
int main() {
	cout << "hello world!";
	return 0;
}
```

Save the file: Ctrl-s

### Compiling C++ Code

Navigate to the directory on your local
- Open terminal to 'Myles'
- cd cpp\tech_with_tim_series\1
    - you can use tab for autoful help here!
OR 
- Open the direcory with file explorer > Delete all in search bar > Type 'cmd' > Enter


Compile the C++ file:
- g++ -o runProgram tutorial1.cpp
    - g++: compiler
    - -o: out
    - runProgram: name of file we want outputed
    - tutorial1.cpp: name of file you want compiled

Note: You get no output in cmd, but if you look in your directory
- dir
    - you should see runProgram.exe

Run the Program
- runProgram

### Re-Compiling your Code

If you make changes to the code, and then runProgram, you will still just get 'hello world'.

Let's actually re-compile so that our changes are reflected!

Changes code
- Make the following changes:

``` cpp
cout << "I added 1 more line of code for the output.";
```

- Add this to line 7 and make sure to press save after

Re-compile the code
- Same line of code as above: g++ -o runProgram tutorial1.cpp
    - get to this by cycling up in cmd with the up arrow

Run the code
- runProgram

### Finishing up the video

Reflect changes on Github:
- Open VSCode Terminal to 'cpp' folder
- git add .
- git commit -m "Completed Video #1 in the Series"
- git push