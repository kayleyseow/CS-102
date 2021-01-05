## Chapter 8 Notes: Streams 
CS 102 Introduction to Programming Using C++  
1/5/2021

#### Writing to a File
- This is very similar to reading
- You declare a variable of type `ofstream`:  
  `ofstream out_file;
- Then you open the file
  
#### A Sample File
- Let's write some numeric data to a file
- We have the same problem we had back in Chapter 6 for arrays
  - We need a separator
- Ths difference now

#### Reading that File
- What if you wanted to read in the file?
- Because of that, you can't just write the data to the file
- You might want to line up the data
- To do that you use I/O manipulators
- We saw these before, in Chapter 2
- 

#### I/O Manipulators
- setw(5)
  - Sets the field width
  - Only refers to the next item in the cout statement
- setfill('0)
  - Prepends 0s to integers that are smaller than the field width
- `Left`, `right`
  - Controls data alignment in the field
  - The default is `right`
- Fixed

#### Using `left` and `right`
- General use of `left` and `right`
  - We usually use `left` for `string`s
  - We usually use `right` for numbers
    - Of course, if you are expecting numbers with decimal points, you need to line up the decimal points
- Why?
  - That's how we look at those kinds of data

#### String Streams
- This is a bit different
- You can create a `string` that is a stream
  - Why would you want to do that?
- It's for parsing a `string`
  - Parsing something means to break it into pieces according to some rule
- Of course, we do that to analyze the text

#### An Example from the Textbook
- This sets `strm` to "January 24, 2019"
  ```cpp  
  istringstream strm;  
  strm.str("January 24, 2019");
  ```
- Then you can parse it, based on spaces:
  ```cpp 
  string month;
  int day;
  string comma;
  int year;
  strm >> month >> day >> comma >> year;
  ```
- Note that, to use a `stringstream`, you need:  
  `#include <sstream>`

#### A Real Timesaver
- Imagine doing this yourself

#### Creating a String from Data
- This is the reverse of the previous idea

#### Running Programs from the Command Prompt
- An alternative to an IDE is the command prompt
- THere are two advantages to using the command prompt
- The first is the idea of command line arguments
  - These are also called switches
- Windows switches are preceded by `/`
- Linux switches are preceded by `-`
- These arguments alter the operation of a command

#### Some Arguments
- The `dir` command will list all files in the current folder
  - Linux uses  `ls`  
  - Its commands are somewhat different
- Some versions of the `dir` command are
  - `dir /w` 
  - `dir /od (also dir /o-d)`
  - `dir /ah`
  - `dir /b`
  - `dir /p`
  - `dir /?`

#### Using Arduments with Our Own Programs 
- To get the arguments, you have to call `main()` differently:
  `int main ()`

#### A Simple Program with Command Line Arguments

#### Command Line Arguments in Practice
- Command line arguments are used primarily for two things
- First, they are used to specify options
  - A program can have several options
- Second, they are used for files
  - If a program uses files, it's very common for the file name to be an argument on the command line

#### The Textbook's Example
- The textbook has an example of an encryption/decryption program
- The program assumes you want tot encrypt a file
  - This is the default
- If you want to decrypt a file, you use the `-d` argument
- Here are two examples:  
  - `caesar input.txt encrypt.txt`  
  - `caesar -d encrypt.txt output.txt`  

#### 
