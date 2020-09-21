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
  
