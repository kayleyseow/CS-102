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

#### Focusing on that Character Type
- The type is ```char```
- You use single quotes (like ') for ```char``` data
  - ```char first_initial = 'K';```
- Don't forget
  - Use double quotes, like " for ```string``` data

#### The ```string``` Type vs. the ```char``` Type
```
string name;
name = "Harry";
```
- The ```string``` requires extra memory to keep track of where it ends
```
char middle_initial;
middle_initial = 'T";
```

#### The ```string``` Type vs. the ```char``` Type Part 2  
- A ```string``` is just a list of characters
We can code it like this:
```
string song = "By the Beautiful Blue Danube";
int num_caps = 0;
for (int i = 0; i<song.length(); i++)
{
  if (song [i] >= 'A' && song [i[ <= 'Z')
    num_caps++;
}
```

#### Pre-Test Loops Again 
- The ```for``` loop is another example of a pre-test loop
- The condition is checked before the loop is run 
- As with the ```while``` loop, this loop can be skipped (not executed at all)
- This is useful for counting items

#### Counting Items
- You read in several items with a ```while``` loop
- You process them with a ```for``` loop
- What if there are no items to process?
  ```
  int last = -1;
  for (int i = 0; i<last;i++)
  {
    ...// Lots of lines deleted here
  }

#### A Third Type of Loop
- This is the ```do``` loop
- It merrily goes its way and then checks for the condition at the end
- An example is 
  ```
  int i = 1;
  do
  {
    cout << i << endl;
    i++
  }
  while (i<10);
  ```

#### A Post-Test Loop
- Obvious from layout of the code
- ```do``` loop is a post-test loop
- The condition is tested after the body of the loop is run 
  - The body of a loop (any loop) is the code that is run on each iteration of the loop
- This means the ```do``` loop always iterates at least once

#### An Example of a Post-Test Loop
  ```
  int i = -1;
  do
  {
    cout << i << endl;
    i++
  }
  while (i>0);
  ```
#### Input Validation 
- A good use of a post-test loop is input validation:  
  ```
  int value;
  do
  {
    cout << "Enter a non-negative integer: ";
    cin >> value;
  }
  while (value <0);
  ```
  
#### Validating Input with a ```while``` Loop
- Let's try this with a ```while``` loop
- Why won't similar code work? 
- How would we have to change it? 
  ```
  int value;
  while (value <0)
  {
    cout << "Enter a positive integer: ";
    cin >> value;
  }
  ```
  - Remember to have a ```cout``` before a ```cin```, so the user knows to enter something in
