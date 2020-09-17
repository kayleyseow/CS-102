## Chapter 3 Notes: Decisions
CS 102 Introduction to Programming Using C++  
9/8/2020  

#### Structured Programming  
- Programs can be diagrammed using flowcharts
- A flowchart gives a picture of a program 
- Items in a flowchart are represented by shapes
- The shapes are connected by lines to show connections
  - The connections indicate the order in which the statements are executed
- Flowcharts will be explained later in the chapter
- We have come to use only three structures

#### Flow Charts  
- A flow chart has many symbols
  - They are all connected by lines
  - The lines always flow down or to the right
- A rectangle indicates a task
  - It can be a single statement or several statements
  - Remember to write what your code does, NOT the actual code itself in the rectangle
- A non-rectangular parallelogram indicates i/o
  - For example, ```cin``` or ```cout```  
- A diamond indicates a decision
  - It should be followed by a yes and no, or some decision
- Also, there are usually start and end symbols

#### The Three Structures of Structured Programming
- Sequence
  - This means executing the lines "in order"
- Decision
  - This means doing one thing out of several
  - A choice is consciously made
  - This choice is based on some kind of fact
  - Usually it's a comparison
??? (will learn in Chapter 4)  

#### The ```if``` Statement  
- The ```if``` statement is a way to make a choice
- Here is an example:  
  ```
  double service_charge = 0.00;
  if (account_balance < 0.00) //checks to see if your account balance is less than 0
    service_charge = 25.00;
  ```
- Notice the indenting, indicates that the following lines are under the control of the statement
- Read the textbook's note on tabs on page 81

#### Adding Alternatives
- Let's make a slight change to the previous code fragment:  
  ```
  double service_charge = 0.00;
  if (account_balance < 0.00) //checks to see if your account balance is less than 0
    service_charge = 25.00;
  else 
    service_charge = 0.00;
  ```

#### Adding Braces
- Adding braces avoids problems
- Makes indenting obvious
- You actually don't need braces, but it is a good habit to get into — take a look at this: 
  ```
  double service_charge = 0.00;
  if (account_balance < 0.00)  
  {
    service_charge = 25.00;
  }
  else  
  {  
    service_charge = 0.00;  
  }  
  ```
  
#### Legal, but usually a logic error
- The ```if``` part of the ```if``` statement itself should not get a semicolon 
- This is perfectly legal, but it usually is not intentional — take a look at the code below:
  ```
  double service_charge = 0.00;
  if (account_balance < 0.00); //the semicolon ends the if  
    service_charge = 25.00;
  else 
    service_charge = 0.00;
  ```

#### Avoid Duplicate Code
- Example on page 82 that talks about duplicate code
- For example: 
  ```
  double service_charge;
  if (account_balance < 0.00)  
  {
    service_charge = 25.00;
    total_charges = total_charges + service_charge;
  }
  else  
  {  
    service_charge = 0.00;  
    total_charges = total_charges + service_charge; //second line of duplicate code
  }  
  ```  

#### Remove Duplicate Code from the ```if```  
- This is better: 
  ```
  double service_charge;
  if (account_balance < 0.00)  
  {
    service_charge = 25.00;
  }
  else  
  {  
    service_charge = 0.00;  
  }  
  total_charges = total_charges + service_charge;
  ```

#### Comparison Operators
- They are called relational operators
- They are
  - ```<``` (less than)
  - ```<=``` (Less than or equal to)
  - ```>``` (greater than)
  - ```>=``` (greater than or equal to)
  - ```==``` (equal, but be careful! == ≠ =)  
  - ```!=``` (not equal)  

#### Comparing Floating Point Numbers  
- Comparing floating point numbers
  - ```<```, ```>```, ```<=```, ```>=``` are okay
  - We never ask if two floating point numbers are equal
    - Because of round-off errors, they could be really, really close
    - Effectively, they are equal
  - Instead, we check if they are very close
  - The test is: 
    ```if (fabs (double1 – double2) < epsilon))```
- This is partly context-dependent

#### Comparing Strings 
- This is like comparing numbers
- Notice that ```“HI”``` and ```“Hi”``` are not equal
  - For two strings to be equal, they must match exactly
- ```if (string1 < string2)```
  - means if string1 comes before string2 in the dictionary
  - Dictionary order is called lexicographic order

#### Multiple Alternatives
- We want to write a program to assign grades
- The scale is
  - 90-100->A
  - 80-89.999…->B
  - 70-79.999…->C
  - 60-69.999…->D
  - <60->F
- For B, it takes what is left of A, for C it takes what is left of B, etc.
- The code:
  ```
  if (grade >= 90)
  {
    cout << “A”;
  }
  else if (grade >= 80)
  {
    cout << “B”;
  }
  else if (grade >= 70)
  {
     cout << “C”;
  }
  else if (grade >= 60)
  {
    cout << “D”;
  }
  else 
  {
    cout << “F”;
  }
  ```  
  ^ The structure clearly shows that you are making a choice

#### Analyzing the ```if```  
- Notice that the ```if``` is combined with the ```else``` on a single line
  - This increases readability even more
- Notice how the code works
  - Each ```if``` "cuts off" a part of the grade range

#### The Last Choice in a Multi-way ```if```
- Notice that the last ```else``` is not an ```else if```
  - The last ```else``` is a "catch-all"
    - It catches anything that is still left
  - If the last ```else``` were an ```else if```, it’s possible that all cases of the ```if``` would be skipped
  - Good programming practice (Read this as “something that increases readability”) is to comment the last ```else```  
    For example: ```else  /*  if (grade >= 0   &&   grade < 60)  */```

#### Nested ```if```s
- You can put one if inside another
- For example, 
- You have several shirts
  - They’re all light colored, except there is one dark blue shirt
- On Tuesday, you always wear your dark blue shirt
  - However, if it’s raining, you wear your bright yellow shirt, because dark colors are too depressing
- On other days, you wear whatever you can find
- Nesting means putting something inside another
- Pseudocode for this example:
  ```
  if (today == “Tuesday”)
     if (weather == “raining”)
          Wear yellow shirt
     else
          Wear blue shirt
  else
     Wear any shirt
  ```
  
#### Hand Tracing
- This is also called desk checking
- It is when you trace a program without using a computer
- You should develop this habit
- Desk check your programs several times before running them

#### Shipping Charges
- The prompt:
  - We will write a program to calculate shipping charges for an international company
  - The company ships to several international destinations
  - Right now, Hawaii is the only US destination , but the company plans on expanding to other states
  - Shipping charges are as follows:
    - Hawaii  $10.00
    - International cities  $20.00
- Problem: A Dangling Else
  - The code:
    ```
    if (country == “USA”)
      if (state == “HI”)   // HI is the code for Hawaii
        shipping_charge = 10.00;
    else
      shipping_charge = 20.00;
    ```  
  - Remember, indentation is only for people
  - The second ```else``` matches the LATEST ```if```
- The Solution:
  ```
  if (country == “USA”)
  {
    if (state == “HI”)
    {
      shipping_charge = 10.00;
    }
  }
  else
  {
    shipping_charge = 20.00;
  }
  ```  
  
#### The ```boolean``` Data Type
- C++ has a ```boolean``` data type
- A boolean variable can store ```true``` or ```false```
- To declare a ```boolean``` variable, you code:
  ```bool is_valid, was_found;```
- Boolean variables quite commonly start with ```is_``` or ```was_```
- Boolean variables are for use in ```if```s

#### Using ```boolean``` Variables—An Example
```
string user_name, dictionary_name;
bool is_found;
…  (Missing lines that give values to user_name, dictionary_name)
if (user_name == dictionary_name)
{
  is_found = true;
}
else
{
  is_found = false;
}
…  (Several other lines)
if (is_found)
{
…  (React to the item being found)
}

```  

#### More Powerful ```if```s
- The ```if``` statement is very powerful
- For example:
  - The average low temperature for Fremont in September is 55.5° and the average high is 78.3°
  - We can check if a data value is in that range
  ```
  if (temp >= 55.5   &&   temp <= 78.3)
  // && used to compare
  {
    cout << “The temperature is in the usual range”
  }
  else
  {
    cout << “The temperature is unusual”
  }
  ```  
#### ```if``` Logic uses: and (```&&```), or (```||```), and not (```!```)  
- You are writing a program
  - The user will type in a number
    - You read this with ```cin```
  - You need to verify that it’s an even number between 1 and 7
  - You can code that as:
  ```
  if (number == 2   ||   number == 4   ||   number == 6)
  {
    cout << “You entered a valid number”
  }
  ```  

#### Operator Precedence
- Precedence refers to the order of operations
- For example, in math we do multiplication before addition
  - In programming terms, we say that multiplication has higher precedence than addition
- There is a partial precedence list in Table 5 on p. 105 in the textbook

#### Extras in the Text  
- The text talks about  confusing “and” and “or” on p. 107
- The text also talks about DeMorgan’s Law on p. 108
  - DeMorgan’s Law is for “not”
  - Here are two different ways to test if a number is not in the range 0-100:  
    ```if (!(number >= 0   &&   number <= 100))```  
    ```if (number < 0   ||  number > 100)```  

#### Short-circuit ```if``` Logic
- Suppose you code an ```if``` with ```||``` or ```&&```
- As always, you need to verify that your ```if``` is correct
- You check the conditions one-by one
- Short-circuit evaluation occurs when you don’t need to check all the conditions to determine the truth value of the ```if```

#### Two Examples of Short-circuit Logic
```
if (homework == “done”   &&   room == “clean”)  
treat = “yes”;  
```  
  - If your homework is not done, do we need to check if the room is clean?
```
if (homework == “done”   ||   room == “clean”)  
treat = “yes”;  
```  
  - If your homework is done, do we need to check if the room is clean?

#### Input Validation
- A common problem is that when people enter data, they make mistakes
- An ```if``` statement can check that input is valid
- Most of the previous examples of complex ```if``` logic are typical input validation ```if```s
- Input data should always be checked to be sure it’s reasonable

#### Input Failure
- There are times when the value entered is not correct
- One error that you have to watch for and respond to is entering the wrong type of data
- For example, you ask a person to type in his/her age
- The person is ```23```
- The person types:  ```"twenty-three"```  

#### Responding to That Input
- C++ will get an input failure in that case
- You check using the ```cin.fail()``` function
For example:
```
int my_age;
cin >> my_age;
if (cin.fail ())
{
  cout << “Please type in a number.”;
}
```
- You usually have to clear the error status using ```cin.clear ()```  

#### Other Logic Tests in C++
- C++ has two other ways to code conditional logic
- One is the ``switch`` statement
  - It is the usual way to test if a variable has one value chosen from a list
- The other is the conditional operator  
These are equivalent:
```
if (temperature > 100)
{
     fever = true;
}
else
{
     fever = false;
}
```  
AND  
```fever = Temperature > 100 ? true : false;```  

#### The ```switch``` Statement
- The ```switch``` is like a multi-way if
- It only allows something that evaluates to an integer to control a choice

#### An Example with the ```if``` Statement
Example code with if statements to match employee codes to employee:
```
if (employee_code == 1)
{
  cout << “CEO”;
}
else if (employee_code == 2)
{
  cout << “Department Manager”;
}
else if (employee_code == 3)
{
  cout << “Programmer”;
}
else
{
  cout << “Invalid code”;
}
```  

#### An Equivalent ```switch``` Statement
Example code that does the same thing as the series of if statements above:
```
switch(employee_code)
{ // other brackets are optional, but must have this pair of braces
//order is switched to 3 then 2 then 1 because other way around is deceptive
case 3: // equivalent to if (employee_code ==3)
  cout << “Programmer”;
  break;
case 2: 
  cout << “Department Manager”;
  break;
case 1:
  cout << “CEO”;
  break;
else
  cout << “Invalid code”;
  //do not need a break here because it is at the end of the cases
}
```  
Above code, except with braces included:
```
switch(employee_code)
{ 
  case 3:
  {
    cout << “Programmer”;
    break;
  }
  case 2: 
  {
    cout << “Department Manager”;
    break;
  }
  case 1:
  {
    cout << “CEO”;
    break;
  }
  else
  {
    cout << “Invalid code”;
  }
}
```

