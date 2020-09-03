## Chapter 2 Notes: Fundamental Data Types
CS 102 Introduction to Programming Using C++  
9/1/2020  

#### Variables  
- A variable is a name for a place in storage
- There are various types of data
- We will start with numeric data
- The two main data types for numeric data are
  - int, for integer data
  - double, for data with decimal points 

#### Naming Variables  
- Variable names must start with a letter
- Made up of letters, numbers, and the underscore (_) character
- Use underscore if you are naming a variable with a string of words

#### More Ideas about Naming Variables  
- Variable names are case-sensitive
- You cannot use reserved words as variable names
- Use a name which describes what the variable contains

#### What Can You do with Variables?  
##### Why do I care about Variables anyways?  
- Variables in programming are similar to variables in math
- You can calculate something and store the result in a variable
- For example:  
  ```number_of_people = number_of_children + number_of_adults;```

#### Math Notation vs. C++
- In math, the equation x = x+1 has no solution 
- Think of this for whole numbers — no number can equal the next number
- Perfectly legal in C++
- It means:
  - Calculate the value on the right side
  - Store that value into the variable on the left
  - Essentially a command
- We use that to count things in C++ (think x++)  

#### Creating Your Own Variables
- Before using a variable, you must create, or rather, define/declare a variable
- Creating a variable is simple
  - Decide on its type (int, double, float?)
  - Give it a name which represents what it is
  - ```float price_per_gallon; ```  
  
#### Starting Values
- In addition to giving a value to a variable in a program, you can give it a starting value
- You can do this when you declare it ```int i = 10;``` 
- We call this initializing the variable

#### Constants
- A constant is a variable whose value does not change
- Use constants so we can remove numbers from inside of programs 
- Syntax, use capital letters to write the name of constants
- For example:  
  ```const double PRICE_OF_COFFEE = 2.35;```  
- If you make it a constant, your program will run a bit faster, for readability payoff, and prevents you from making random changes  

#### Readability
- Readability = understandability
- High readability is easily understood by other programmers
- Anything you can do to increase the readability of a program is good
- Ways to have better readability: 
  - Inserting blank lines
  - Usage of comments
  
#### Putting Comments in a Program 
- Two types of comments
- // 
  - Single line comments
  - Used anywhere in a line
  - rest of the line is ignored by the compiler
- /* */
  - Used for comments which take several lines

#### Comments
- Use comments to explain what's going on in your program 
- Explain every function except main()
- Explain tricky, complex code with comments
- Ask some else to take a look at your comments  

#### I/O Manipulator
- I/O = input or output
- There is cin for input, data from the keyboard and cout for outputs
- ```fixed``` is an i/o manipulator
- Use ```#include <iostream>``` and ```#include <iomanip>``` to use I/O Manipulators  

#### Floating Point Data
- Floating data is often imprecise
  - For example, 0.2 as a decimal number is 0.001100110011... as a binary number
  - Binary numbers are numbers with 0s and 1s
  - All computer data is stored as binary numbers
- The stored value will be very close to the actual value, but may not be exactly equal
  - For this reason, we do not usually ask if two floating point numbers are equal (we ask if they are close)  

#### Arithmetic
- variable = calculation
- For example:
  - ```total_cost = subtotal + tax;```  
  - ```average = (value_1*frequency_1+value_2*frequency_2)/(frequency_1 + frequency_2);``` 

#### The Operators
- Standard math operators
  - \+ for add
  - \- for subtract
  - \* for multiply
  - / for divide 
- Special operators
  - ++ for incrementing
  - -- for decrementing

#### More Operators and Integer Math
- If you have these statements:
  ```
  int number_of_boxes = 19/10;  
  cout << number_of_boxes; 
  ```  
  ^ it prints out 1
- Integer arithmetic gives integer answers
  - Fractions are rounded down, not rounded off
- %, mod, indicates the remainder after division  

#### More Integer Arithmetic
- Suppose you have these statements:  
  ```
  double price = 2.85;  
  int dollars = price; 
  ```  
- Dollars will have the value 2
- Roundoff trick is to add 0.5  

#### More Math: Powers and Roots
- To calculate use x^10, use pow(x,10)
- Use sqrt() to calculate square root

#### Calculations in C++
- When C++ calculates, it follows the normal math order of operations
- It calculates piece by piece, just like in algebra
- For each calculation within an expression, it promotes all variables to the most precise type
  - double is more precise than float
  - float is more precise than integer
- For example:  
  10.0 + 4/5  
  10.0 + 0 (0 is promoted to a double)  
  10.0  

#### Casting
- You are in full control of what your program does
- You can force data to be any type in a calculation 
- Example: ```unit_price = (double) 10/3;```  
- We just forced C++ to treat 10 as if it was a type of float
- Calculation worked as we had hoped

#### Writing Programs 
- Understanding the problem
  - This often generates test data
- The first step in the programming process is to understand the problem 
- One good way to understand the problem is to try cases
- For example, writing a payroll problem 

#### The Task  
- We want to calculate the weekly pay of an employee
- We will be given the number of hours the employee works and the hourly rate of pay
- We have to calculate according to these rules: 
  - All work at least 40 hours
  - Paid time and a half for overtime (pay 1.5 times the normal rate)  

#### The Value of Studying Cases
- Since we worked through some cases, we now know hot to write the program 
- The total pay is 
  - $600 (for regular hours) and $15*n*1.5
    - Where n is the number of hours over 40
  - Or, if h = total number of hours, the pay is
    - $600 + $15*(h-40)*1.5
- We also have some data to test if our program works  

#### Strings
- A string is another data type
- To use strings, you need ```#include <string>```  
- To store a value into a string, use quotation marks, like ```string name = "Harvey";```  
- Concatenation
  - This means appending one string onto the end of another
  - You do this by using +, like ```full_name = first_name + " " + last_name;```   
- Do we see a danger in toring a zip code as an int?
  - Due to 0's in zip codes, zip codes like ```01234``` would be treated like ```1234```  
  
#### Functions
- A function is a small program that does a task
  - There are two types
    - One sends back an answer
    - The other type performs a task
- So far, we know ```main()```  
- Since its type is int, we need to return an integer answer  

#### String Functions
- C++ has several built-in string functions
  - ```int name_len = name.length();```  
    - stores the length of the string ```name``` into the variable ```name_len```  
  - ```string new_string = old_string.substr(3,2)```  
    - This creates a new string starting at character 3 in ```old_string``` and having length 2
    - Character 3 is actually the fourth character in the string, since indexes start at 0  
- String functions are summarized on page 60 in the textbook
