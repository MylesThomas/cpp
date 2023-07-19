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


## #2 - C++ Program Structure

Let's look at the first program we wrote:

``` cpp
#include <iostream> // include library that lets you print to console
using namespace std;// gives access to things in standard c++ library

// creating a function
int main() {
	cout << "hello world!";
	return 0;
}
```

### #include iostream

``` cpp
#include <iostream>
```

#include: Takes a library of code, tells our compiler we need this library in order to run
- If something is not built into C++, we must used #include statements
- When we compile the program, all of that library's code is part of the program
    - Library: Set up features/functionality
        - Example: iostream: Input/Output stream library that lets us get input from the console and send output to the console
            - Takes 100's of lines of codes to send something to the console

Note: cout: Part of iostream library, sends output to the console


### using namespace std;

``` cpp
using namespace std;
```

This is complicated concept!
- inside of iostream library, there is a 'namespace'
    - namespace: a collection of code
        - a way to divide code up
        - code related to one thing has one namespace, other code has another namesapce

std: Standard namespace
- Functions inside of std:
    - cout (characters out)
    - cin (characters in)

Note: We do not know where cout is 
- Method #1: using namespace std;
- Method #2: std::cout
    - This tells the compiler that inside of the iostream library, find the namespace called std, then find the function cout

Advice in comments:
"Rule #1 in C++: for best practices avoid using namespace std as much as possible. Always try to get in the habbit of doing "std:: ..." for all the functions in the std namespace. you will thank me later esp when your including header files that have functions with same name as the std ones in diff classes."

### Semicolin / line terminator

When writing C++ code, you need to end lines with `;`
- end of a function: exception

Why?
- compiler reads line by line
- if you wanted to, you could squish multiple lines on 1 line (separated by ;)

### C++ entry point / main function

Code is read from top to bottom, left to right.

Entry point to C++ program: main()
- run this immediately when program is run
    - must be int main() with {} and return 0;

What happens if you don't have main() and do something like this:

``` cpp
#include <iostream>

int mainPoint() {
	std::cout << "hello world!";
	return 0;
}
```

Steps:
- Open cmd in folder '2' via: File Explorer > delete path in search bar > cmd > enter
- Compile file: g++ -o runProgram tutorial2.cpp

Error we get:  undefined reference to `WinMain@16'

What this error means:
- we don't have a main function
    - couldn't find reference to main
    - did not know where to start

Just for kicks, change mainPoint to main, and re-compile to ensure everything is working.
- Ctrl-S in Sublime Text
- g++ -o runProgram tutorial2.cpp
- runProgram

### Return statement

C++ rules: Define the type of return that your function will have
- main always returns an int
- good practice to have `return 0;` in main(), but you don't actually need it.

### cout

cout: takes text and puts it on the console

Stream insertion operator: <<
- "anything after gets inserted into the stream"

Why cout don't go on separate lines:
- cout is just accessing the console + shooting characters
- we did not tell cout to go to the next line!

### Escape Characters and Line Breaks

Escape Characters: tells the console to go to the next line

Carriage return: \n
- inserts invisible backslash, tells console to 

Note: There are more escape characters besides \n

Nicer cleaner way than doing \n: `endl;`
- easier to understand

``` cpp
#include <iostream>

int main() {
	std::cout << "hello world!" << " myles" << std::endl << std::endl;
	std::cout << "hello world!" << " clement" << std::endl << std::endl;
	return 0;
}
```

### Recap

Start in main function
- read line by line
- cout doesn't automatically go to next line


## #3 - Data Types and Variables

### Intro

Variables and Data Types: Extremely important!
- create variables
- store values
- types of variables we need
- learning about typed langauges in general

### Data Types

Data Types: Type of data

C++: Static and Strong typed
- makes data types that much more important

Example:
- variable: x
- value: 2
- type: int

5 main data types:
1. int
- whole number w/ no decimals
2. float
- has a decimal (level of precision)
- binary code represents it much different than an int
3. bool
- true/false (1/0 in binary)
- must be lowercase
4. string
- anything surrounded by double quotations ""
    - (even if it is something else ie. float wrapped "7.0")
    - any length, including 0 length: ""
- must be imported in C++ via `#include <string>`
5. char
- any single character on your keyboard surrounded by single quotation marks ''
- doesn't have to be numeric/alphanumeric
- example: 's'
- bad example: 'ss'
    - cannot have 2 keyboard presses in 1 char

Note:
- string: "s"
- char: 's'

Reminder: Library that contains string: `#include <string>`

### Comments

Single lined comment: Will be ignored by compiler
Multi lined comment: Will be ignored by compiler


``` cpp
// single line comment

/*multi
line
comment */
```

Note: Ctrl-/ to comment out code in VSCode OR Sublime Text


### Variables

Variables: Extremely versatile
- some name, to store some value.
    - a way to access some information

How to assign a variable
- select type
- select name
- =
- select value 

### Variable Naming Rules

When naming a variable...
- unique value
- can only contain letters and _
- cannot lead/begin with a number

Good practice:
- should be descriptive (use multiple words with _)
- camelCase is also preferred for production level code

### More Ways to Define Variables

``` cpp
// init a var
int x, y;
x = 7;
y = 9;
x = 69;
std::cout << x << y;
x = y;
std::cout << x;

//redefining a type
int x;
std::string x;
```

### Closing Thoughts

Run the code:

``` cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "Start of main." << std::endl;

    int val = 2.7;
    // c++ tries to convert this to an int (2 since decimal is chopped off)
    // if it cannot, error is thrown
    std::cout << val << std::endl;

    // init a var
    int x, y;
    x = 7;
    y = 9;
    x = 69;
    std::cout << x << " " << y << std::endl;
    x = y;
    std::cout << x << std::endl;

    //redefining a type
    // int x2; cannot do this...
    std::string x2;
    x2 = "Myles!!!";
    std::cout << x2 << std::endl;
}

// int 7, -9
// float 7.0, -9.8
// bool true, false
// string ""
// char 'x' '0'
```

Note: C++ is a statically typed language, i.e. types can not change.

Steps:
- Open cmd via file explorer cmd
- g++ -o runProgram tutorial3.cpp
- runProgram


## #4 - User Input and Constants

### Intro

How to get console input from the user:

### Constant Variables

First thing: Constant variables
- constant = it does not change

``` cpp
const int gravity = -9.8; // This variable cannot be changed (will throw an error)
```

Good practice: Use const whenever you can


### User Input

Starting to get user input: std::cin

``` cpp

```

If you run this...
- Open cmd via file explorer cmd
- g++ -o runProgram tutorial4.cpp
- runProgram

Cursor flashing  = Waiting for user input!

What happens if you are expecting a type (int) and get a string:
- error flag is thrown
- cin ends
    - "we need to resolve this error before taking in any more input!" 

Example:

``` cpp
#include <iostream>
int main() {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    std::cout << a << endl;
    std::cout << b << endl;
}
```

If you enter the following for a/b:
- a: 3
- b: h
You will get the following returned:
- a: 3
- b: 0

Why the 3?
- it worked

Why the 0?
- error


### cin Errors

Similar to the past example, let's say we got an error on the 1st one this time:

If you enter the following for a/b:
- a: b
- b: n/a (did not get a chance to since it breaks)
You will get the following returned:
- a: 0
- b: 183385857

Why the 0?
- error

Why the random value?
- at this point in time, b is holding onto a random variable 
    - it has a location of memory on the computer
        - we have not set the value of x, so we are getting back its place in memory


### cin Errors Fix

How to check for invalid input:

``` cpp
int main() {
    int n, x;
    std::cin >> n;
    std::cout << std::cin.fail(); // 1 for fail, 0 for all good
}
```

How to clear the error:

What cin.clear() does:
- clears input from console input stream
- removes error flag from console input stream
    - you still get the same error
    - it does not remove the text that was typed in the string

Remove the text (to prevent the error from inevitably happening again!)

What cin.ignore() does:
- clears a certain amount of characters from the input stream

Note: make sure the 2nd arg is a char ie. single quotation marks around the \n

``` cpp
int main() {
    int n, x;
    std::cin >> n;
    std::cout << n << std::endl;

    std::cin.clear();
    std::cin.ignore(1000, '\n'); // clear 1000 characters from input stream (make sure to use single quotation marks for argument #2, it is a char)
    std::cin >> x;
    std::cout << x << std::endl;
}
```

Advice: Clear the errors because if no error, it just doesn't do anything.

### Building a Simple Calculator

Simple Calculator:

``` cpp
#include <iostream>
#include <string>

int main() {
    int num1, num2;
    std::cout << "Enter a number: ";
    std::cin >> num1;

    // Handle error
    std::cin.clear();
    std::cin.ignore(1000, '\n'); // errors become 0

    std::cout << "Enter a 2nd number: ";
    std::cin >> num2;

    const int sum = num1 + num2;
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
```

Steps:
- Open cmd from file explorer
- g++ -o runProgram tutorial4.cpp
- runProgram

### Takeaways

Safe way to bring in variable: string
- string is always valid

If you don't know int/float, use float.


## #5 - Arithmetic Operators

### Operators vs. Operands

Arithmetic Operators: used on floats and ints
- +
- -
- *
- /
- ++
- --

Arithmetic Operands: The values on left/right side of operator


### Addition / Subtraction (+, -)

``` cpp
int main() {
    const x = 8;
    const y = 9;
    const sum = x + y // x - y;
    std::cout << sum;
}
```

Addition and Subtraction are very easy.

### Division (/)

8/9 = 0. Why?
- left operand is int
- right operand is int
    - result is going to be an int! (even if result is float)

What happens if 1 operand is a float?
- you will get a float

Why? A float has a higher degree of precision!


### Multiplication (*)

This behaves as you would expect.
- need float operands to get a float result

### Compound Assignment Operators

These are the same:

``` cpp
int x = 2;
x = x + 2
x += 2
```

Increment/Decrement:

``` cpp
int x = 0;
x++;
x--;
```

### Order of Operations

BEDMAS
- B: Brackets
- E: Exponents
- D: Division
- M: Multiplication
- A: Addition
- S: Subtraction
1. 

### Modulus Operator (%)

Modulus: Gives you the remainder from division

Example: 
- 10/4 = 2.5
- 10 % 4 = 2
    - 4 goes into 10 twice (8), need 2 more to get back up to 10

Note: Use integers for the modulus