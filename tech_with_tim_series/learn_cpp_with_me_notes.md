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


### Modulus Operator (%)

Modulus: Gives you the remainder from division

Example: 
- 10/4 = 2.5
- 10 % 4 = 2
    - 4 goes into 10 twice (8), need 2 more to get back up to 10

Note: Use integers for the modulus

``` cpp
#include <iostream>

int main() {
    const int a_int = 10;
    const int b_int = 3;
    int answer_int = a_int / b_int;
    std::cout << "Answer (int): " << answer_int << std::endl;

    const float a_float = 10.0;
    const float b_float = 3.0;
    float answer_float = a_float / b_float;
    std::cout << "Answer (float): " << answer_float << std::endl;

    return 0;
}
```
- Open cmd from file explorer
- Compile: g++ -o runProgram tutorial5.cpp
- Run: runProgram


## #6 - Comparison Operators

### Intro

Setup
- Create folder '6'
- Create file 'tutorial6.cpp'

``` cpp
#include <iostream>
#include <string>

int main() {
    // 
    return 0;
}
```

- Open cmd via file explorer
- g++ -o runProgram tutorial6.cpp
- runProgram

### Boolean Values

Last video: Arithmetic

This video: Comparison
- > and >= 
- < and <=
- !-
- ==
(this order means nothing)

Expression: Uses a comparison operator
- returns boolean

``` cpp
#include <iostream>
#include <string>

int main() {
    bool test = 1 < 2;
    std::cout << test << std::endl; // 1 = true
    return 0;
}
```


### Comparison Operator Examples

Strings/Chars: evaluated Lexicographical ordering
- results are not as intuitive

Make sure to know the difference between `=` and `==`:
- =: assignment operator
- ==: equivalence/comparison
    - !=: not equal to comparison


### Comparing Characters

Characters: 1 single character around '' ie. 'a' and 'A'

``` cpp
int main() {
    bool test = 'a' < 'A';
    std::cout << test << std::endl; // 0 = false

    std::cout <<  << std::endl; // 97 
    std::cout << test << std::endl; // 65 
}
```

Quick Lesson on typecasting in C++:

``` cpp
#include <iostream>
int main () 
{
    char ch = 'A';
    std::cout << int(ch) << std::endl;

    std::cout << int(ch) - 48 << "\n"; // 
    std::cout << int(ch) - '0' << "\n"; // 

    return 0;
}
```

Output: 65

``` cpp
// Driver code
int main()
{
    char ch = '5';
 
    // Subtracting 48 will produce desired results
    cout << int(ch) - 48 << "\n"; // 
 
    // Also subtracting '0' will result in same output
    cout << int(ch - '0'); // 
    return 0;
}
```

More on ASCII:
- int('A'): 65
- int('B'): 66
...
- int('a'): 97
- int('b'): 98
 


### Comparing Strings

Strings: any # of characters around "" ie. "Myles Thomas" or "       " or ""

``` cpp
#include <iostream>
int main () 
{
    bool test = "hello" != "HELLO       ";
    std::cout << test << std::endl;
}
```

### Realistic Example

``` cpp
#include <iostream>
int main () 
{
    int num1, num2;
    std::cout << "Type number 1: " << std::endl;
    std::cin >> num1;
    std::cout << "Type number 2: " << std::endl;
    std::cin >> num2;

    std::cout << "There two numbers are the same: " << (num1==num2) << std::endl;
}
```


## #7 - Logical Operators (And, Or and Not)

### Setup

Leave open the cmd from last time and do the following:
- cd ..
- mkdir 7
- cd 7
- echo int main() {} > tutorial7.cpp

### Logical Operators

3 logical operators:
- NOT (!): Negates a boolean value
- AND (&&): AND
- OR (||): OR

Compiling code example: 
- g++ -o runProgram tutorial7.cpp
- runProgram


## #8 - If, Else, & Else If

### Setup

Leave open the cmd from last time and do the following:
- cd ..
- mkdir 8
- cd 8
- echo int main() {} > tutorial8.cpp

### If Statements

Condition: Anything that evaluates true OR false

Compiling code example:
- g++ -o runProgram tutorial8.cpp
- runProgram


## #9 - Arrays

Arrays: Way to store elements

### Setup



### Array vs. List

List is NOT an array!
- array: {1, 2, 3}
    - all elements are the same data type
    - ordered
    - can change values in the array
    - can NOT change the length/size of the array
        - to increase size of array, you need to create a new one

- list: 

### Creating Arrays

What to do when creating an array:
- data type
- size/length
- name of variable

``` cpp
int main() {
    int x = 5;
    float arr[x] = {1,2,3,4,5};
    std::cout << arr; // slkdkaljklk

    //float arr[] {1,2,3,4,5}; this works too
    //float arr[5]; need to pick size if you don't give the values right away
}
```

Why is it that when we print out `arr` we get that weird output?
- we are getting the memory location on my computer

### Indices and Accessing Array Elements

Indices/indexes: Position of the error
- 0 index
- last element: always is arr.size() - 1

``` cpp
int x = 5;
int arr[5] = {2,3,4,5,6};
arr[0] = 10;
std::cout << arr[0]; // 10
```


### Default Array Initialization

When you do not define what is being stored in a container/memory location, you are just going to get a random gibberish
- this is what is stored at memory here

### Array Errors

What happens when you try and access an index that does not exist?
- once again, you get some gibberish

``` cpp
int arr[5] = {2,3,4,5,6};
std::cout << arr[88] << std::endl; // gibberish
```

### Different Types of Arrays

``` cpp
string arr2[] {"myles", "thomas"};
```

### Size of Arrays

Other languages:
- .size
- .length
- len()

C++
- 2 parts:
    - sizeof(arr): Gives how many bytes are being taken up by the array
    - sizeof(arr[0]): # of bytes 1 value in the array takes up

``` cpp
// size
sizeof(arr) / sizeof(arr[0]);
```

Example: Array takes up 16 bytes, each int takes up 4 bytes
- 16 / 4 = length = 4! 

Compiling:
- g++ -o runProgram tutorial9.cpp
- runProgram


## #10 - For Loops

### Setup

Leave open the cmd from last time and do the following:
- cd ..
- mkdir 10
- cd 10
- echo int main() {} > tutorial10.cpp

### Intro

Before, if we wanted to repeat something, we had to write
- for when you know the number of iterations beforehand

Note: While Loops are for when you do NOT know the number of iterations beforehand

Iteration = 1 step of the loop

``` cpp
// 3 criteria for for-loop:
//
// 1. define iterator value (usually = 0)
// 2. ending condition
// 3. increment value (i++ or ++i for OG's)
#include <iostream>
#include <string>

int main() {
    for (int i = 0; i < 10; i++) { // ++i is preferred
        // 
        std::cout << i << std::endl;

        if (i % 2 == 0) {
            std::cout << "Even number!" << std::endl;
        }
    }
}
```

Infinite loop:

``` cpp
for (int i = 0; i < 10; i = 0)
for (int i = -5; i != -6; i = 0)
```

Counting down:

``` cpp
for (int i = 10; i > 11; i-=5) // doesn't do any iterations
```


### Iterating Through Arrays

``` cpp
#include <iostream>
#include <string>

int main() {
    int x [] = {5, 6, 7, 8, 9, 10, 20, 30, 40};

    // use i to access indices of the array
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        std::cout << x[i] << std::endl;
    }
}
```

### Initializing an array

``` cpp
#include <iostream>
#include <string>

int main() {
    int x [5];

    // fill array with elements
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        x[i] = i;
    }
    // print to console
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        std::cout << x[i] << std::endl;
    }
}
```

Compile steps:
- g++ -o runProgram tutorial10.cpp
- runProgram

Push to Git:
- git add .
- git commit -m "Completed Lesson 10 of Tech With's Tim C++ Series"
- git push -u origin main


## #11 - While, Do While Loops & Break/Continue


### Setup

```sh
cd ..
mkdir 11
cd 11
echo int main() {} > tutorial11.cpp
```

### While Loops vs. For Loops / While Loop Syntax

While loops: More powerful than for loops
- anything a for loop can do, a while loop does too!

While loop
- MUCH more general
- we won't know how much longer they will run
    - user might keep giving invalid input

For loop
- cleaner syntax

```cpp
#include <iostream>
#include <string>

int main() {
    // these do the same...
    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    int i = 0;
    while (i < 10) {
        std::cout << i << std::endl;
        i++;
    }
}
```

Compiling:

```sh
g++ -o runProgram tutorial11.cpp
runProgram
```

### While Loop Examples

```cpp
int main() {
    int input;
    while (input != 1 && input != 2) {
        std::cout << "Type the number 1 or 2: ";
        std::cin >> input;
    }
}
```

### Break

Break: It breaks the closest loop it is inside and ends it
- entire for loop is done 
- we want to use this when something happens

```cpp
int main() {
    int input = 1;
    while (true) {
        std::cout << "Type the number 1 or 2: " std::endl;
        std::cin >> input;
        if (input == 1 || input == 2) {
            break;
        } else if (input == 4) {
            std::cout << "cool" std::endl;
            break;
        }
        
    }
}
```

Note: Can be used to simplify the expression


### Continue

Continue: Continue the loop, but break out of/skip the rest of the current iteration
- brings you to the next step

```cpp
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 9 || i == 7) {
            continue;
        }
        std::cout << i std::endl;
    }
}
```

Good practice: Use an if code and not even need the else
- if: the thing that doesn't happen much
- else: the norm


### Do While Loop

Do While: Make sure that it runs at least 1 time!

```cpp
#include <iostream>
#include <string>

int main() {
    int x = 10;

    do {
        int add;
        std::cout << "Type the number to add to x: ";
        std::cin >> add;
        x += add;
        std::cout << "x is: " << x << std::endl;
    }
    while (x < 10);
}
```

What this says:
- "alright, no matter what, we are going to do this at least once"

Do > Check > Do > Check

(The normal has always been: Check > Do > Check)

### Git

Make sure you are using a command prompt in directory 'cpp'.

```sh
git status
git add .
git commit -m "Completed Lesson 11 of Tech With's Tim C++ Series"
git push -u origin main
```


## #12 - Switch Statement

### Setup

```sh
cd ..
mkdir 12
cd 12
echo int main() {} > tutorial12.cpp
```

Then, add this in at the top of the .cpp file:

```cpp
#include <iostream>
#include <string>
```

### Intro

Switch Statement: similar to if else block
- allows you to do it in a cleaner way

### Rest of the video!

What it does:
- takes in 1 expression ie. x + y
    - compares it to a bunch of different values
        - you can do this in a bunch of different ways

Note: Not all programming languages have compatibility for this!

```cpp
#include <iostream>
#include <string>

int main() {
    int x = 69;
    switch(x) {
        std::cout << x << std::endl;
        case 1:
            std::cout << "x is 1";
            break;
        case 2:
            std::cout << "x is 2";
            break;
        case 10:
            std::cout << "x is 10";
            break;

        // default ie. 'else'
        default:
            std::cout << "x is not 1, 2, or 10." << std::endl;
            std::cout << "x is actually ..." << std::endl;
            std::cout << x;
    }
} 
// x is not 1, 2, or 10.
// x is actually ...
// 69

```

```sh
# compile
g++ -o runProgram tutorial12.cpp
runProgram
```

What we did here:
- Wrote case(s)
- Wrote code for what happens when the cases become true
- break = terminates the given case

Default: if it is not one of the cases
- example: there is no case for 4
    - similar to 'else' in if else

### Git

Make sure you are using a command prompt in directory 'cpp'.

```sh
git status
git add .
git commit -m "Completed Lesson 12 of Tech With's Tim C++ Series"
git push -u origin main
```


## #13 - Strings

### Setup

```sh
cd ..
mkdir 13
cd 13
echo int main() {} > tutorial13.cpp
```

Then, add this in at the top of the .cpp file:

```cpp
#include <iostream>
#include <string>
```

### Intro

What this video is: Properties of strings that we have not seen yet!

### String Indexing

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "hello world!"; // double brackets for string
    str[1] = 'z'; // single brackets for char
    std::cout << str[1];
} 
```

```sh
# compile
g++ -o runProgram tutorial13.cpp
runProgram
```

#### Iterating Through Strings

#### .size() and .length()

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "hello world!";
    std::cout << str.size() << std::endl;
    std::cout << str.length() << std::endl; // gets the same thing
    
    for (int i = 0; i < str.length(); i++) {
        char chr = str[i];
        std::cout << chr << std::endl;
    }
} 

```

### Git

Make sure you are using a command prompt in directory 'cpp'.

```sh
git status
git add .
git commit -m "Completed Lesson 13 of Tech With's Tim C++ Series"
git push -u origin main
```


## #14 - References (&)

### Setup

```sh
cd ..
mkdir 14
cd 14
echo int main() {} > tutorial14.cpp
```

Then, add this in at the top of the .cpp file:

```cpp
#include <iostream>
#include <string>
```

### Intro

Reference = Alias
- another way to refer to a variable

How to make a reference:
- make a variable
- make a reference by 
    - if you change b, you will change a
        - you are referring to its place in the memory

### Creating References

```cpp
#include <iostream>
#include <string>

int main() {
    int a = 2;
    int &b = a;
    int &c = b;
    c = 60;
    std::cout << a << std::endl; // 60 now
    std::cout << b << std::endl; // 60
    std::cout << c << std::endl; // 60
} 
```

```sh
# compile
g++ -o runProgram tutorial14.cpp
runProgram
```

What is it doing here:
- b is referencing a
- the computer has 2 variables that can access the same value

What is the point of a reference?
- a lot of times with functions: you don't want to know actual value, you want access to it though


### Memory Address of Variables

Idea: When you say B is pointing to A, they are pointing to the box that is storing the value 2
- that box has a location in computer's memory/RAM
- you can access that memory address
    - put & before a variable to get the hexadecimal
    - put & before a reference to get the hexadecimal

```cpp
#include <iostream>
#include <string>

int main() {
    int a = 2;
    int b = a;
    int &c = a;

    std::cout << &a << std::endl; // 0x61ff08
    std::cout << &b << std::endl; // 0x61ff04 (different because accessing different place in memory)
    std::cout << &c << std::endl; // 0x61ff08
} 

```

### Reference Rules

Nuances and Details:

When you create reference you must initialize it:

```cpp
bool x = true; // normal
bool y; // ok
bool &z; // gives error
bool &zz; // cannot init to null either

string str = "hello";
bool &str2 = str; // cannot do it, (you changed from str to bool)
```

### Git

Make sure you are using a command prompt in directory 'cpp'.

```sh
git status
git add .
git commit -m "Completed Lesson 14 of Tech With's Tim C++ Series"
git push -u origin main
```


## #15 - Pointers (*)

### Setup

```sh
cd ..
mkdir 15
cd 15
echo int main() {} > tutorial15.cpp
```

Then, add this in at the top of the .cpp file:

```cpp
#include <iostream>
#include <string>
```

### Intro

Pointers
- need to know about references first

### Pointers and References (Visualized)

Pointer: Stores memory address location of a variable

```cpp
int x = 2;  // 
int &y = x; // 
int *z = x; // holds memory address location of x (0x23ab) ; has memory address of 0xabcd

```

Notes:
- You can have nested pointers
- A pointer is its own value

How to de-reference a pointer: *x

### Pointer Examples

```cpp
 #include <iostream>
#include <string>

int main() {
    int x = 2;
    int *y = &x; // get the address of x (pointer needs to point to memory address)

    std::cout << &x << std::endl; // 0x61ff0c
    std::cout << y << std::endl;  // 0x61ff0c
    std::cout << &y << std::endl; // 0x61ff08 (memory address of pointer is different...)
    std::cout << *y << std::endl; // 2 (de-referencing gives value associated with '0x61ff0c')
} 

```

```sh
# compile
g++ -o runProgram tutorial15.cpp
runProgram
```

### Pointer Rules

When you create a pointer, you do not need to initialize it.

```cpp
// these are ok
int *y; // default pointer
int *y = NULL; 

```

You can change what a pointer points to:

```cpp
int x = 2;
int w = 3;

int *y = &x;
y = &w; // valid!
```

Note: You cannot change what a reference references.

### Pointer Arithmetic With Arrays

Get pointer to first location in the array:

```cpp
#include <iostream>
#include <string>

int main() {
    int x[] = {1,2,3};
    int *head = x; // gives location to first in array

    // loop through array (by changing head)
    for (int i = 0; i < 3; i++) {
        head = x + i;
        std::cout << head << std::endl; // memory address
        std::cout << *head << std::endl; // the value that the memory points to 
        
    }
} 
```

Notes:
- Array itself `x` is equal to memory address location of `x[0]`
- Incrementing the address works because we know there are subsequent elements

### Git

Make sure you are using a command prompt in directory 'cpp'.

```sh
cd cpp
git status
git add .
git commit -m "Completed Lesson 15 of Tech With's Tim C++ Series"
git push -u origin main
git status
git log --oneline
q
```

## #16 - Tuples

### Setup

```sh
cd tech_with_tim_series
mkdir 16
cd 16
echo int main() {} > tutorial16.cpp
```

Then, add this in at the top of the .cpp file:

```cpp
#include <iostream>
#include <string>
using namespace std;
```

### Intro

Start by including the library at the top:

```cpp
#include <tuple>
```

### What are Tuples?

Tuples: Similar to an array with ordered values, but with some differences:
- You can have multiple data types
- Different way of accessing/changing elements

```cpp
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main() {
    tuple <int, string, char> person;
} 

```

What is this:
- A tuple with the following:
    - value 1: int
    - value 2: string
    - value 3: char
    
You can make a tuple with 1, 2, 3000 items, it does not matter.

### Creating Tuples

Initializing a tuple with values:

```cpp
int main() {
    tuple <int, string> person (20, "Tim");
}
```

```sh
# compile
g++ -o runProgram tutorial16.cpp
runProgram
```

### Accessing Tuple Values

You cannot use the indexing, you must use .get():

```cpp
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main() {
    tuple <int, string> person (20, "Tim");

    // wrong
    // cout << person[i] << endl;

    // correct
    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;

    // change values
    get<0>(person) = 25;
    get<1>(person) = "Myles";
    
    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;
}

```


### make_tuple

make_tuple: Function that Takes in values, makes a tuple:

```cpp
// C++ program to  iterated thorough
// all values. I equals number
// of values in tuple
#include <iostream>
#include <string>
#include <tuple>
 
using namespace std;

// Function to iterate through all values
// I equals number of values in tuple
template <size_t I = 0, typename... Ts>
typename enable_if<I == sizeof...(Ts),
                   void>::type
printTuple(tuple<Ts...> tup)
{
    // If iterated through all values
    // of tuple, then simply return.
    return;
}
 
template <size_t I = 0, typename... Ts>
typename enable_if<(I < sizeof...(Ts)),
                   void>::type

printTuple(tuple<Ts...> tup)
{
 
    // Print element of tuple
    cout << get<I>(tup) << " ";
 
    // Go to next element
    printTuple<I + 1>(tup);
}

int main() {
    tuple <int, string> person (20, "Tim");
    get<0>(person) = 25;
    get<1>(person) = "Myles";
    
    // cout << get<0>(person) << endl;
    // cout << get<1>(person) << endl;

    // make_tuple
    tuple <int, char, bool, float> thing; // declaring that the variable exists
    thing = make_tuple(23, 'H', true, 24.3); // initializing the tuple
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;
    cout << get<3>(thing) << endl;

    // this is what happens if you do not initialize the tuple:
    tuple <int, char, bool, float> thing2; // declaring that the variable exists
    //thing = make_tuple(23, 'H', true, 24.3); // initializing the tuple
    cout << get<0>(thing2) << endl; // 0
    cout << get<1>(thing2) << endl; // 
    cout << get<2>(thing2) << endl; // 0
    cout << get<3>(thing2) << endl; // 0

    // Another way to initialize the tuple:
    tuple <int, char, bool, float> thing3 = make_tuple(2333, 'Z', false, 24.355665556); // initializing the tuple
    
    // for fun: iterate through the tuple
    // Function call
    printTuple(thing3);
    return 0;
}

```


### Swapping Tuples

Swap contents of 2 tuples:

```cpp
// C++ program to  iterated thorough
// all values. I equals number
// of values in tuple
#include <iostream>
#include <string>
#include <tuple>
 
using namespace std;


int main() {
    tuple <int, int> t1 = make_tuple(1,2); 
    tuple <int, int> t2 = make_tuple(3,4);

    t1.swap(t2);

    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;
}
```

Notes:
- you can switch order of the swap
- types must be the same

### Decomposing Tuples

Decompose = Break multiple elements up into their own variables
- tie: Takes in 2 variables, take element and assign to the variables

```cpp
// C++ program to  iterated thorough
// all values. I equals number
// of values in tuple
#include <iostream>
#include <string>
#include <tuple>
 
using namespace std;


int main() {
    tuple <int, int, int> t1 = make_tuple(1,2,3); 
    int x, y, z;

    tie(z, y, x) = t1;
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}
```
Notes:
- Once again, you must make sure the types are matching
    - This is because C++ is a strongly typed language!

### Concatenating Tuples

Concat: 
- tuple_cat: Takes in 2 tuples, returns 1 longer one

```cpp
// C++ program to  iterated thorough
// all values. I equals number
// of values in tuple
#include <iostream>
#include <string>
#include <tuple>
 
using namespace std;


int main() {
    // declare these 2 tuples (normal)
    tuple <int, char> t1(20, 'A');
    tuple <char, string> t2('B', "Hello World!");
    
    // make sure to declare types of variables, even for the cat!
    // if you do not declare, then use 'auto'
    
    // tuple <int, char, char, string> t3 = tuple_cat(t1, t2);
    auto t3 = tuple_cat(t1, t2);
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << get<3>(t3) << endl; 
}


```

Note: Auto allows the C++ compiler to figure out the data types for you!
- saves a lot of code
- Tim said that he does NOT like using auto
    - says to be careful
    - writing out types explicitly is good for appreciating what data you are working with

### Git

```sh
cd cpp
git status
git add .
git commit -m "Completed Lesson 16 of Tech With's Tim C++ Series"
git push -u origin main
git status
git log --oneline
q
```


## #17 - Tuples

### Setup

```sh
cd tech_with_tim_series
mkdir 17
cd 17
echo int main() {} > tutorial17.cpp
```

Then, add this in at the top of the .cpp file:

```cpp
#include <iostream>
#include <string>
using namespace std;
```

### Intro

...

### What are Maps?

Map: 

What maps are good for:
- order of elements do NOT matter
- allows you to search for something in O(1) time
    - (arrays use O(n) time)
    - does not matter how large the map is, still will be more efficient

### Creating maps

```cpp
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map <char, int> mp = {
        {'T', 7},
        {'S', 8},
        {'a', 4},
    };

    // inserting / accessing values
    mp['u'] = 9;
    //mp.insert(pair<char, int>('u', 9));
    cout << mp['u'] << endl; // 9
    cout << mp['c'] << endl; // 0 (it does not exist)

    // using pairs
    pair <char, int> p1('j', 5);
    cout << p1.first << endl; // j
    cout << p1.second << endl; // 5
    

    // check if it exists

} 

```

```sh
# compile
g++ -o runProgram tutorial17.cpp
runProgram
```

### Accessing Map Values / Inserting Map Pairs

.erase()
- delete 1 key with 
    - delete it all with .clear()

```cpp

```

### Erasing Map Pairs / Iterating Through Maps

Iterators: Used to pass through an object
- can use auto or declare the types

```cpp
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map <char, int> mp = {
        {'T', 7},
        {'S', 8},
        {'a', 4},
    };
    pair <char, int> p1('j', 5);
    mp.insert(p1);

    // iterate
    auto myMap = mp;
    for(const auto& elem : myMap) {
    std::cout << elem.first << " " << elem.second << "\n";
    }

    // check if it is empty
    cout << mp.empty() << endl; // 0
    mp.clear();
    cout << mp.empty() << endl; // 1

    // another way to iterate, iterators are used to loop through the object
    // - iterator has access to first object
    mp = myMap;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) { // ends when mp.end() is true
        // you are given a pointer to each pair
        // - to access elements, you must dereference it
        //cout << itr << endl; gives error
        cout << (*itr).first << endl;
        cout << (*itr).second << endl;

        cout << itr->first << endl;  // these do the same thing! (shorthand notation)
        cout << itr->second << endl; // these do the same thing! (shorthand notation) 
    }
} 

```

### Practical Map Example

Example: Count frequency of each letter

```cpp
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string test = "Hello world my name is Myles! hahahahahahahahahahaaha";

    map<char, int> freq;

    //cout << "Size of map: " << freq.size() << endl;
    //cout << "Length of the string 'test': " << test.length() << endl;

    // Stores length of the string
    int N = test.length();
    for (int i = 0; i < N; ++i) {
        char letter = test[i];
        cout << "i=" << i << endl;
        cout << "letter=" << test[i] << endl;
        
        // check if letter exists in the map...
        if (freq.find(letter) == freq.end()) {
            // no: make it 0
            freq[letter] = 0;
        }
        // regardless, increment by 1!
        freq[letter]++;
    }

    // iterate again and print results of final map
    //cout << "Size of map: " << freq.size() << endl;
    cout << "-----\niterating through finished map 'freq' ... \n-----\n";
    for (auto itr = freq.begin(); itr != freq.end(); ++itr) {
        cout << itr->first << ": " << itr->second << endl;
    }
} 
```

### Git

```sh
cd cpp
git status
git add .
git commit -m "Completed Lesson 17 of Tech With's Tim C++ Series"
git push -u origin main
git status
git log --oneline
q
```
