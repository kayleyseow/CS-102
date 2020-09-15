## Chapter 1 Notes: Introduction
CS 102 Introduction to Programming Using C++  
8/27/2020  

#### What is Programming?  
- What is a program?  
- Name some examples of programs  

#### Important Hardware Items—The CPU
- It executes instructions  
- Some instructions are  
  - Making decisions
  - Doing arithmetic
  - Getting data from memory, external devices
  - Modifying that data
  - Storing data back into memory, external devices
  - Moving to another part of the instructions

#### More Hardware (Storage)
- Primary Storage  
  - Also called memory
  - Just circuits (chips)
  - Is volatile (temporary)
  - It’s where the action is
- Secondary Storage
  - Examples
  - Hard disk
  - Flash drive
  - Data stored there is permanent

#### Programming Language Ladder
- High Level
  - Close to how we think
  - C++, Java
- Low Level
  - Close to how the hardware operates
  - Machine language, Assembly language
- We keep trying to climb higher
  - Why?

#### Translating C++ to Machine Language
- C++ is a high level language
- It needs to be translated into machine language
-   The computer stores and understands only 0 and 1
- The translator is called a compiler

#### Portable Languages
- A portable language is one that compiles on any machine
- C++ is mostly a portable language
  - The basic part is portable
  - Extensions, like graphics, may not be portable (In the computer world, the word graphics refers to pictures)

#### Creating C++ Programs
- We say you write or create programs
- Writing a program means typing, typing, and typing!
  - We use an editor
  - It’s a very primitive word processor that doesn’t do boldfacing, font style or size, has no graphics, etc.
- Spelling, Punctuation and Indentation counts!

#### Our Programs
- We will start out with very mild ambitions
- We will write programs that print answers to questions and calculations
- We will build up to some sophisticated programming concepts
- We will write some GUI code if we have time
  - GUI stands for Graphical User Interface
  - It means you click on buttons, move icons, etc.

#### IDEs
- You can create your program using an IDE
  - IDE stands for Integrated Development Environment
- An IDE is a development environment
  - It helps you develop programs
  - It contains an editor
- It’s integrated
  - It contains an editor
  - It contains a compiler
  - It may also contain a debugger
  
#### A Sample Program
```
#include <iostream>  
using namespace std;  
int main ()  
{  
     cout << “My first program” << endl;  
     return 0;  
}  
```  

#### Writing a C++ Program
- I have numbered the lines for discussion
  - Do not number the lines in your own programs
- Some general ideas about C++
- 1.  C++ is case-sensitive
  - This means that, for example, the line     int main () must have main in all lower case letters
- 2.  Every line ends with a semi-colon
- 3.  The braces come in pairs
- 4.  You can (and should!) skip lines in your program

##### More Program Analysis
- Line 1.  #include statements tell the compiler where to find various commands
  - Later we will call these commands functions
- Line 2. Using namespaces allows you to build large projects in small pieces
  - We will always type this line just as it is
##### Still More Program Analysis
- Line 3.  main  is the name of the function where you put the statements of your program
  - Here is where you have print statements, calculations, etc.
  - Your program will do everything you put into main()
  - main () is an example of a function
- Lines 4 and 7.  The braces are a pair.
  - They must be lined up
  - They form the limits of the main() function
  - We indent everything between them
##### Even More Program Analysis  
- Line 5.  cout is a print statement
  - It prints whatever is on the right side of the <<
  - Think of cout as the screen and << as an arrow
- Line 6.  This indicates your program completed normally and that no errors occurred

#### Getting Your Program to Run
- You just type in your program
- We call your program source or source code
- You save it in a file
  - This should be a .cpp file
- You compile it
  - I will use the tdm-gcc compiler
    - You can search for it and download it
  - The compiler typically generates a.out (a.exe on Windows)
- You run the result of the compile process

#### Behind the Scenes
- The actual steps were these
- 1.  You stored your program in a file
- 2.  You submitted your source file to the compiler
  - The compiler created machine code from your source
- 3.  The machine code was submitted to the linker
  - The linker combined needed library files with your machine code
  - The linker created a program that you can run
    - We call this an executable

#### Errors
- It’s very easy to write a program with errors
- There are two kinds of errors
  - Syntax errors
    - These errors are due to missing semicolons, misspelled words, mismatched braces, etc.
    - Your program won’t compile if it has syntax errors
    - The gcc compiler tells the line number and position of the error
  - Logic errors
    - These errors occur when your program doesn’t do what you expect

#### Algorithms
- An algorithm is a step-by-step recipe to do something
  - You can think of a recipe as an algorithm
  - Giving directions is an algorithm
  - Many things we do in life involve algorithms
- The challenge in programming is breaking a task down into a step-by-step algorithm
  - It’s easy for us to understand and do, but gets complicated when we try to analyze it

#### The Software Development Process
- The Steps
- 1.  Understand the problem
  - Test the algorithm with sample data
- 2.  Develop an algorithm that solves the problem
- 3.  Translate the algorithm to C++
- 4.  Compile and Test the program
- If the program doesn’t do what it should, go back to step 2

#### Lines Starting with //
- The previous slide says to put four extra lines into your program
- Those lines are comments
  - The point of a comment is to explain code
    - In this case, the explanation is more about the code in general
    - Usually, comments explain routines or tricky code
  - Comments have no rules
    - You can write in “plain English”

