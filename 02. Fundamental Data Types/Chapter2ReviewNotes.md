## Chapter 2 Review Notes: Fundamental Data Types  
CS 102 Introduction to Programming Using C++  
9/3/2020  

#### Variables  
- Know how to create and use variables  (types we know:  ```int```, ```double```, ```string```)  
- Be able to use ```cin``` to read a variable  

#### Comments
- They explain what the program does
- They increase readability  (Know what readability is)
- Know that indentation is only for people, and not for the compiler.
  - Indentation is another way to increase readability.
- We have ```//``` and the pair ```/*  */```

#### Math
- Be able to declare a constant
- Given a formula, be able to figure out the result of a calculation using it
- ```%``` indicates the remainder after division
- Know how to use the increment (```++```) and decrement (```--```) operators
- Be able to use a cast if necessary
- To calculate √x, use ```sqrt (x)```
- Don’t get tripped up by integer math
  - Integer arithmetic gives integer answers.
  - Fractions are rounded down, not rounded off
- In any (single) C++ calculation, C++ promotes the variables to the most precise type
  
#### Know basic string ideas  
- Be able to declare and initialize a string variable
- Concatenation
- The length function: ```name.length ();```
- The substring function: ```substr (m, n)```
- You can use ```cin``` to read a string, but it only reads the first word

#### Displaying results
- Know how to use ```cout``` with strings and data values and ```endl```  

#### How to answer a question properly
Prompt: Write a Java if statement to print “Volume is too high” if the int variable speakerVolume is greater than 10.  
Three different solutions:  
  - Correct Solution:  (Just do this; don’t do more.)  
  ```
    if (intVolume > 10)
      System.out.println (“Volume is too high”);
  ```
  - Bad Solution One:
  ```
    int speakerVolume;
    if (intVolume > 10)
      System.out.println (“Volume is too high”);
  ```
  - Bad Solution Two:
  ```
    int speakerVolume = 13;
    if (intVolume > 10)
      System.out.println (“Volume is too high”);
  ```  
A problem with those solutions:  
Why bother with the ```if``` statement?  
  - In Bad Solution One, speakerVolume was just created and has no value.  
    - This means that the if statement won’t work correctly.  
  - In Bad Solution Two, you know the volume.  
    - Why use the if statement to test?  You don’t need it.  
    
The moral of the story:  
- You are just creating the if.
- The variable already has a value.  Your job is merely to test it.
- Do not create it or change its value.  

You will lose points if you create the variable or change its value.
