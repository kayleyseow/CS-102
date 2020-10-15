## Chapter 5 Notes: Functions  
CS 102 Introduction to Programming Using C++  
10/15/2020  

#### Changing a Paramater in a Function

#### What is printed here?
  ```
  void change(int i)
  {
    i = 10;
  }
  int main()
  {
    int i = 100;
    change(i);//it does not send the variable from 
    cout << i;
  }
  //The code prints out 100!
  ```

#### Using Call-by Reference
#### Changing the Value of a Parameter Using Call-By-Reference
Below is similar code to the example above; however, notice how there is a ```&``` after the ```int``` in the second one. We're using call-by reference this time.
  ```
  void change(int& i)
  {
    i = 10;
  }
  int main()
  {
    int i = 100;
    change(i);//it does not send the variable from 
    cout << i;
  }
  //The code prints out 10!
  ```
  - Think of it as how the ampersand is the argument

#### Using References vs. Returning Values
- There is another way to code this as well, using returns:
  ```
  int change2(int i)
  {
    return 10;
  }
  int main()
  {
    int i = 100;
    int save_i = i;//save value of i temporarily
    change(i);
    i = change2(i);
    cout << i;
  }
  ```  
- For the most part, you should use return values instead of references
- One reason is that you cannot call the ```change()``` function 

#### Constant References
```
void duplicate_string(string str)
{
  return str + " " + str;
}
```
- Here, if ```str``` is long, copying it would take a long time
  - Remember, C++ is call-by-value
- We can change the function header to ```void duplicate_string (const string& str)```  
- You can get the efficiency of a reference, but the performance of a variable  

#### Recursion 
- Sometimes it's convenient to create a function that calls itself
- Why would you want to do this?
  - It might be easier to program 
- A good example is the math function X!
  - Here, ```factorial(x)``` denotes x!

#### Re-examining the Factorial Function 
- Wait! The end of 10! is 9!
- We can say that ```nx(n-1)```

#### Programming Factorials
```
int factorial (int n)
{
  return n*factorial(n-1);
}
```

#### Another Example: Fibonacci Numbers
- The fibonacci numbers are a sequence of numbers
  - First two numbers are both 1
  - After that, got o the next Fibonacci number, add the two before it
- For example, the first seven numbers in the list are 1, 1, 2, 3, 55, 8, 13
- This is recursive!
- The code for a fibonacci sequence:
  ```
  int fobonacci (int n)
  {
    return fibonacci(n-1)+fibonacci(n-2);
  }
  ```
  
#### A Third Example: The Towers of Hanoi
- This problem is not as mathematical as the first two
- An example at https://www.mindgames.com/game/Tower+of+Hanoi 
