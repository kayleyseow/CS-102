## Chapter 8 Notes: Streams 
CS 102 Introduction to Programming Using C++  
1/4/2021

#### Examining Storage
- Computers have primary storage
  - It is also called memory
  - Primary storage is temporary or volatile
  - Everything happens in primary storage
  - Where is my program while it's running?
- Computers also have secondary storage
  - It is also called
  
#### A Deep Look into Storage
- All data is stored in bits
  - This is true, for memory, a CD or DVD, a flash drive, a 
  
#### Bytes — The Way We View Data
- A byte on a PC is made up of 8 bits
- A byta can hold a letter or a small number or any single character
  - Even a byte is too small for numbers in some cases
- A programmer thinks of storage as a long list of bytes
  - Think of it as an `array` of bytes
- Words
  - A word on a PC is made up of two bytes
- We will be more concerned with bytes more than words

#### File Types
- A file is data stored in secondary (permanent) storage
- There are two main types of files
  - Binary Files
    - Data files are one type of binary file
    - Program files are another (a.exe, any app)
    - If you look at these files with a text editor, you only see symbols
    - A better term would be a "non-text" file
    - Can be looked at with either the program that created it, or a program that can open binary files
  - Text files
    - You can look at these files with a text editor
    - A .cpp file is a text file

#### Working with Data
- We think of data as flowing in a stram
- This is like ducks in the children's pond game
- The ducks float around past a person
- The person can examine them as they come by
- Instead of saying "file", we will say "filestream"
  - The words are often used interchangeably

#### Using a File
- When you use a file, you have two choices
  - You can read the file (look at it)
    - This is also called input
  - You can write to the file (change it)
    - This is also called output
- We use file I/O to refer to file input and output
- In order to use a file, you have to
  - Open it before doing anything to it
  - Close it after you are finished with it

#### Opening a File Stream
- The `#include` for file I/O is `#include <fstream>`
- Opening a file stream allows you to use it
- You open a stream for reading by:
  ```cpp  
  ifstream data_file;
  data_file.open ("\\cs102\\programs\\lab8-1.dat");
  ```
  - You need to have `\\` because it is an escape character
- You now can read the data stored in the file
- Use `data_file` to refer to the file from now on

#### Reading the File
- Reading from a file is like reading from the keyboard using ```cin```
- Instead of `cin`, use the file variable
  ```cpp
  string a_line;
  data_file >> a_line;
  ```  
- To read several

#### Reading an Entire Line from a File
- Use the `getline()` function to read an entire line
  ```cpp  
  string input_line;
  getline(data_file, input_line);
  ```
- You can even use `getline()` to cause `cin` to read an entire line
  ```cpp  
  example
  ```

#### A Simple File Program: Echoing a File
