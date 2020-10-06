## Chapter 4 Notes: Random Numbers
CS 102 Introduction to Programming Using C++  
10/1/2020  

#### Why Random Numbers?
- There are many uses for random numbers
- In designing a game, you might have to make a choice:
  - Which friend or enemy will appear?
  - Which event will occur next?
  - Which items were left behind for the player to pick up?
- Computers are often used to simulate real-life situations
  - A common use is for retail applications
    - How many checkout lanes should we open?
    - How should we set the traffic lights?

#### Random Numbers in a Computer
- We call them pseudorandom numbers
  - A computer cannot generate truly random numbers
- It uses an algorithm to generate the next number based on the previous number
- The algorithm is chosen so that the numbers are almost random

#### Coding
- To use random numbers in a program you need to include ```cstdlib```  
  ```#include <cstdlib>```  
- To use random numbers  
  ```int x = rand();```  
  - These numbers are between 0 and the maximum integer, which is 1  
- To get values between ```a``` and ```b``` use  
  ```int x = rand () % (b – a + 1) + a;```  

#### Starting the Process
- How does the computer get the first number?
- It always generates the same one!
  - This is quite useful for testing
- What if you want a new starting value?
- You can call create a starting value based on the time  
  ```srand (time (0));```
