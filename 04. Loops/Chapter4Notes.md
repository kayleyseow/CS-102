## Chapter 4 Notes: Loops
CS 102 Introduction to Programming Using C++  
9/21/2020  

#### Structured Programming (Again)
  The three structures of structured programming are Sequence, Decision, and Repetition  

#### Repeating Commands
- Sometimes you want to do something repeatedly
  - Doing something repeatedly is called looping
- C++ has many different ways to do it
  - ```for```, ```while```, ```do while```  

#### Counting to Ten
Here is a program using a ```while``` loop to count to ten:
  ```
  int i = 1;  
  while (i <=10)  
  {  
    cout << i << endl;  
    i++;  
  }  
  ```  
  Some comments:
  - if ```i``` was equal to 15 (if the first line was ```int i = 15```) we would not enter the loop  
  - this can be done using a ```for``` loop as well
  
#### Example from the Textbook
The program below uses a ```while``` loop 
  ```
  const double RATE = 5;
  coust double INITIAL_BALANCE = 10000;
  const double TARGET = 2 * INITIAL_BALANCE;
  
  double balance = INITIAL_BALANCE;
  int year = 0;
  
  while (balance < target)
  {
    year++;
    double interest = balance*RATE/100;
    balance = balance + interest;
  }
  ```

#### Variables
- This statement appears inside the loop:
  ```double interest = balance*RATE/100;```  
-  

#### Loop Exercise
Find the logic error in the code below:
  ```
  int n = 1;
  while (n! = 50)
  {
    cout << n << endl;
    n = n + 10;
  }
  ```
  Some comments:
  - This piece of code causes an infinite loop
  - When you code, you need to make sure that you will not encounter an infinite loop

#### Hand Tracing a While Loop Part 1
- How does this code count?
- Assume upper_limit is a given integer variable
  ```
  int i = 1;
  while (i < upper_limit) // upper limit = 10
  {
    cout << i << endl; // 1 2 3 ... 9
    i++;
  }
  ```
  Some comments:
  - loop prints all integers from 1 to upper_limit -1

#### Hand Tracing a While Loop Part 2
- How does this code count?
- Assume upper_limit is a given integer variable
  ```
  int i = 1;
  while (i < upper_limit) // upper limit = 10
  {
    i++;
    cout << i << endl; // 2 3 4 ... 10
  }
  ```
  Some comments:
  - loop prints all integers from 1 to upper_limit -1

#### A Pre-Test Loop

#### Example of a Pre-Test Loop
Below is an example of a loop with a pre-test:
  ```
  int i = 50;
  while (i<10)
  {
    cout << i << endl;
    i++;
  }
  ```
- In the code, you are just checking to see how the pretest, ```while (i<10)``` checks the integer

#### A Second Type of Loop

#### An Example of a ```for``` Loop
This code below demonstrates how to use a ```for``` loop
  ```
  int i;
  for (i = 1; i<=10; i++)
  {
    cout << i << endl;
  }
  ```
  - This loop forces you to count
  - The loop starts at 1, and as long as i is less than or equal to 10, it will iterate and print
  
#### Declaring the Counter Variable at the Last Minute
- You can declare the coutner variable right inside the ```for``` loop
- This version is very common:
  ```
  for (int i = 1; i <=10; i++)
  {
    cout << i << endl;
  }
- Why would people code it this way?
  - Readability
  - More options for increments
  - Does not use as many lines
