## Chapter 5 Notes: Functions  
CS 102 Introduction to Programming Using C++  
10/8/2020  

#### Steps Vs. Modules  
- Discussion about modular programming  
- Putting code in "modules" makes the entire program more readable  
- Essentially, you are just putting in little chunks of code in a module  

#### Why Do We Need Functions?  
- It would seem easier to just put everything into ```main()```  
- Wouldn't it be a lot faster to just put everything together?  
- **No.**
#### Benefits of Using Functions  
- Simplify the coding process  
- You do not need to rewrite code  
- There is value to cut and paste, but maintenance is a nightmare  
  - Maintaining the same code in several places is difficult  
  - Makes the code more error-prone  
- They make testing easier  
  - You can test each module separately, and then assemble them  
  - If they work by themselves, then the entire program as a whole will run  
- They make it easier for a team to design a large project  
  - Each person or team can focus on an individual module (function)  

#### Functions
- A C++ function is similar to a mathematical function
- It has some inputs
- It may produce an output
  - Unlike math, a function does not have to return a result

#### Examples of Functions
- ```int main()```  
- ```int twice(int x)```  
- ```void print_int (int num)```  
- ```double sin (double x)```  

#### A Look at a Function
Here is an example of a function: 
```
double cube_volume (double side_length)// input is a double, output is a double as well
{
  double volume = side_length*side_length*side_length;//the task of the cube, in this case, calculating the volume  
  return volume;//returns whatever you need from the function, in this case, the volume
}
```  
- Function name is ```double_cube_volume()```
- Function will return a ```double```
- Input is a ```double```
- There is one input  
- The function calculates the volume of a cube  

#### Using the Function  
- ```vol = cube_volume(3);```  
  - Assign the value to a variable
- ```cout << "The volume is" << cube_volume(12);```  
  - Print out the value
- ```double_vol = 2*cube_volume(side1);```  
  - Uses it in a calculation

#### Vocabulary
- Parameter
  - Whatever is inside the parentheses
- Argument
- Function Header
  - Top line of the function 
- Function body
  - Whatever is in between the braces

#### Modifying Parameter Values
- In general, not a good idea to modify parameter values  
- Here is an example (of what not to do): 
```
// Function to convert dollars and cents to only cents  
int total_cents (int dollars, int cents)
{
  cents = dollars*100 + cents;
  return cents;
} 
```
- In this example, cents is changed from the argument to the final value to return

#### A Better Example
- Here is a better version of the function that does not change the parameter:
```
// Function to convert dollars and cents to only cents  
int total_cents (int dollars, int cents)
{
  new_cents = dollars*100 + cents;
  return new_cents;
} 
```

#### Explaining How to Use Functions (A Commenting Standard)
- THere are special comments we put immediately before functions
- Their purpose is to tell how to call the function 
- These are from Java, they follow the JavaDoc
- Here is an example for the ```cube_volume()``` function:  
  ```
  /** Computes the volume of a cube
      @param side_length The side length of a cube
      @return The volume of the cube */
  ```

#### The ```return``` Statement  
- All C++ functions exit when they see the ```return``` statement
- Code after a ```return``` statement is not executed
  - This code is called unreachable code
- The ```cout``` after the ```return``` statement below is not executed:  
  ```
  double_cube_volume (double side_length)
  {
    double volume = side_length*side_length*side_length;
    return volume;
    cout << "The volume is" << volume << endl; //unreachable code  
  }
  ```  

#### Types of Functions
- Some functions don't return a value
  - These functions typically do a task
  - Their type is ```void```  
  - ```void print_line (string line_to_print)```  
  - ```void``` functions **NEVER** have a ```return``` statement
- Other functions return a value
  - Their type is based on what they return
  - ```int twice(int x)```  
  - ```double raise_to_power (int x)```  
  - ```int read_integer ()```  

#### ```Void``` Vs. Non-```Void``` Functions
- A ```void``` function should not have a ```return``` statement
  - a g++ compiler will catch this
- A non-```void``` function must ```return``` a value
  - The g++ compiler will not catch this
  - You will get a run-time error
  - Of course, the type returned must match the function's type  

#### Hopling the Computer Find Functions 
- Example of a working program:  
  ```
  double_cube_volume (double side_length)
  {
    double volume = side_length*side_length*side_length;
    return volume;
    cout << "The volume is" << volume << endl; //unreachable code  
  }
  int main()
  {
    cout << cube_volume(4);
  }  
  ```  
- Compiler will not find the function:  
  ```  
  int main()
  {
    cout << cube_volume(4);
  }
  double_cube_volume (double side_length)
  {
    double volume = side_length*side_length*side_length;
    return volume;
    cout << "The volume is" << volume << endl; //unreachable code  
  }
  ```  
- Using a prototype, below code works:
  ```  
  double cube_volume (double side_length); //you will explain the function later
  int main()
  {
    cout << cube_volume(4);
  }
  double_cube_volume (double side_length)
  {
    double volume = side_length*side_length*side_length;
    return volume;
    cout << "The volume is" << volume << endl; //unreachable code  
  }
  ```  

#### Function Prototypes
- Another approach is to copy a function's header to the beginning of the program  
  - Add a semi-colon after the header  
- If you do not do this, compiler expects all functions to be defined before being used
- The header that you copied to the beginning is called a function prototype
- Some programmers prefer to put all functions at the beginning of the program  

#### Steps to Writing a Function
- Decide what the function should do
- Decide on the inputs
- Decide on what will be returned
- Code the function 
  - Use the pseudocode or a flowchart to design
  - Then write the code
- Test the function

#### Keep Functions Short
- All functions (including ```main()``` itself) should be short
  - Typically, this means the function's code must be no more than two or three screens long
- A function should only do one task
- If it does more than that, it should be redesigned
  - It is probably two or more functions  
  
#### A Book in the Library
- Suppose we are writing a program to track a book's history at a library
- What can happen to the book?
  - Book is requested (R)
  - Library purchases the book (P)
  - The book is placed on a shelf (S)
  - The book can be checked in and out (I,O)
  - Book might be lost or ruined (L)

#### The Code
- ```main()``` contains a loop that asks what should happen to the book 
- User enters R, P, S, I, O, L
- The code reads the user's choice into the character variable ```user_request```  
- The code has a ```switch``` statement that processes the user's request

#### The ```switch``` statement
The code below is not good, it is very messy: 
```
switch (user_choice)
{
  case 'R": // Lots of code
  case 'P': // Lots of code
  case 'S': // Lots of code
  case 'I': // Lots of code
  case 'O': // Lots of code
  case 'L': // Lots of code
}
```  

#### A Better Version  
The code below is a better version, uses methods to organize code:  
```
switch (user_choice)
{
  case 'R": request(book);
  case 'P': purchase(book);
  case 'S': shelve(book);
  case 'I': check_in(book);
  case 'O': check_out(book);
  case 'L': remove_book(book);
}
```  

#### Explaining the ```switch``` statement
- Each line contains a function call
  - This version is more readable  
- We have to write the functions
- We would like to test our code after we write each individual function
- To do this we create stubs which are minimal functions

#### Some Stubs
- Suppose we have written the code for ```request()``` and want to test it  
- We cannot because the program will not compile until we have every function 
- So we code stubs
```
void purchase (string book)
{
}
string shelve (string book)
{
  return "";
}
```
- We have to code stubs for every function
- We are able to test the rest of the code, writing stubs guarantees that your code will compile

#### The Scope of Variables
- We already saw this before 
- Scope means where a variable can be used
- There is an interesting that can happen to variables when use functions
  - Happens in regular code too
  - More common in functions
- Happens with functions and their arguments too, so pay attention to that as well
- It is called shadowing
- An Example of Shadowing: 
  ```
  int i = 1--, posn = -1;
  string str = "hello there";
  for (int i = 0; posn<0 && i<str.length(); i++)
  {
    if (str[i] == ' ')//if character is a space
      posn = i;//the variable got redeclared
  }
  cout << i << endl;
  ```
  ↑ That was confusing, right?!
  - there are two variables with the same name  
    - The variable ```i``` is declared in Line 1
    - The variable ```i``` is also declared in Line 3
    - [Will the real ```i``` please stand up?](https://youtu.be/eJO5HU_7_1w?t=88)
  - So basically this is not good
  - We call this shadowing
  - We say the variable ```i``` in the ```for``` loop shadows the variable ```i``` in the ```main()``` function

#### Scope
- The ```i``` declared in Line 1 is local to the function, that is:
  - it belongs to the entire function
  - and only to the function
- The ```i``` in the for in Line 3 belongs only to the ```for```
- When the ```for``` ends (Line 5), the variable ```i``` doesn’t exist anymore
- This solves the mystery:
  - The ```i``` in Lines 4 and 5 is the ```i``` declared in Line 3
  - The ```i``` in Line 6 is the ```i``` declared in Line 1

