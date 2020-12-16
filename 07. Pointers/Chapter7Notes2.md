## Chapter 7 Notes: Pointers, Part 2
CS 102 Introduction to Programming Using C++  
12/10/2020

#### ```arrays``` and ```pointers```
- Here is an idea from C itself
- These are the key points
  - A ```pointer``` contains an actual memory address
  - An ```array``` is a block of bytes that are all physically together
    - We say the bytes are contiguous
- So, it would seem that a ```pointer``` could be used to point to (or reference) various elements of an ```array```

#### A ```pointer``` to an ```array```
- Suppose we have:  
  ```double costs [10];```
- Then we can say:  
  ```double* cost_pointer = costs;```
- Now ```cost_pointer``` points to the ```array``` ```costs```
- You can say:  
  ```cout << *cost_pointer;```
- Which is the same as:  
  ```cout << costs [0];```
- It’s even deeper than that!

#### ```pointer``` Arithmetic
- You can use ```pointer```s in lots of clever ways
- One idea is called ```pointer``` arithmetic
- Once again, assume:  
  - ```double costs [10];```
  - ```double* cost_pointer = costs;```
- Then:  
  ```*(cost_pointer+2) is the same as costs [2];```
- Change 2 to your favorite ```int```
  - Your favorite ```int``` has to be less than 10 of course
- This still works!
- This equivalence is called the array/pointer duality law

#### Why Does This Work?
- Looking inside memory explains why this works
- Suppose an ```int``` gets 4 bytes
  - It’s frequently 4 or 8 bytes, but it doesn’t have to be
- Then we can see why a ```pointer``` can be used as a reference to an ```array```
- ```array [n]``` is truly at the same memory location as ```array + 4n```

#### Problems from the Textbook to Check Our Knowledge
- p. 317-318
- Problems 6, 7, 8, 9
- Do these to check on ```pointer``` arithmetic

#### Using a ```pointer``` to Step through an ```array```
- Two ways to print an ```array```
- Assume ```int counts [10];```
- Method 1:  
  ```
  for (int i=0; i<10; i++)
  {
    cout << counts [i] << endl;
  }
  ```  
- Method 2:  
  ```
  int *p = counts;
  for (int i=0; i<10; i++)
  {
    cout << *p << endl;
    p++;
  }  
  ```  

#### More Advanced Use of ```++```, ```--```
- The increment, decrement operators can occur inside of statements, not just on their own
- For example, you can code:  
  ```
  int n = 10;
  cout << n--;
  ```
- You can also code:  
  ```
  int n = 10;
  cout << --n;
  ```

#### Following the Examples
- This code:  
  ```
  int n = 10;
  cout << n--;
  ```
  - prints 10 and then decrements ```n```.
- This code:
  ```
  int n = 10;
  cout << --n;
  ```
  - decrements ```n``` and then prints 9.

#### Operators Before Variables, Operators After Variables
- If an increment/decrement operator occurs _before_ the variable
  - the increment/decrement is done _before_ the statement is executed
- If an increment/decrement operator occurs _after_ the variable
  - the increment/decrement is done _after_ the statement is executed

#### Tracing Some Code
What will print in the example below?  
```
int x, y;
x = 1;
cout << "x = " << x << endl;
y = ++x   +   2;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
y = x++   +   2;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
```

#### Tracing Code from the Textbook
Here's a code snippet to trace:
```
double sum (double* a, int size)
{
  double total = 0;
  while (size-- > 0)
  {
    total = total + *a++;
  }
  return total;
}
```  
- Trace the code with:  
  ```
  double a [3] = {15, 10, 20};
  sum (a,3);
  ```  
- What is in ```a``` at the end of the function call?
- What does the function ```return```?

#### A Second Example from the Textbook
- Be careful when using ```pointers``` with local variables:  
  ```  
  double* firstlast (double a[], int size)  
  {
    double result [2];
    result [0] = a [0];
    result [1] = a [size-1];
    return result;
  }
  ```
