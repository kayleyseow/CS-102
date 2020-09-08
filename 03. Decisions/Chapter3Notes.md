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
- A non-rectangular paralellogram indicates i/o
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
