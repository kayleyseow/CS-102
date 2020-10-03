## Chapter 4 Notes: Loops, Part 2
CS 102 Introduction to Programming Using C++  
9/29/2020  
#### The ```break``` Statement Again 
- The ```break``` statement has another use
- It can end a loop early; look at the code excerpt below:
  ```
  for (int i = 0; i<10; i+++)
  {
    if (i==5)
    {
      break;
    }
    cout << i << endl;
  }
  ```
- Many people avoid it
- See the textbook’s comment
  - The ```break``` statement breaks out of the enclosing loop, independent of the loop condition.
  - In the loop-and-a-half case, ```break``` statements can be beneficial. But it is difficult to lay down clear rules as to when they are safe and when they should be avoided. We do not use the ```break``` statement in this book.

#### Structured Programming (Again)
  The three structures of structured programming are Sequence, Decision, and Repetition  

#### I/O Redirection
- I/O stands for input and output
- These ideas are for commands entered at the command prompt
- Input can be redirected using ```<```
- Output can be redirected using ```>```
- There are other ways to use redirection
- Some examples are
- ```dir``` vs. ```dir >filelist```
- more ```<filename```
- When writing programs, you should consider this

#### Applications of Loops-1 Calculating a Sum and Average
The code below uses a ```while loop``` to calculate the total:
```  
  double total = 0;
  double input;
  while (cin >> input)
  {
    total = total + input;
  }
  cout << total;
```  
   Changes for an Average  
  - For an average, you have to count the items
  - Declare a counter:  
    ```int count;```
  - Increment the counter in the loop:  
    ```count++;```
  - Then you have to calculate the average  
    ```average = total /  count;```  
  - There are two potential bugs with this code

#### Shortcut Math Operators
- There are several shortcut operators
- These are the same  
  ```total = total + count;``` and ```total += count;```  
- The same idea works for ```-=```, ```*=```, ```/=```, ```%=```  
- What does   ```var *=2```;   do?  
  ```var = var * 2;```  

#### ```string``` vs. ```char```:  ```substr```  vs.  ```[ ]```
- ```Strings``` are very common in programming
  - A ```string``` is just a list of characters
- Let’s start with:  ```string str;```
- Then we can do ```str.substr (0,1)```  
  - We can also do ```str [0]``` or ```str.at [0]```
- What’s the difference?
  - The book uses the substring function
  - In class, we will use the character versions

#### Applications of Loops-2 Counting Spaces in a String
The code below uses a ```for``` loop and ```if``` statement to calculate the number of spaces in a ```string```:  
```
  string str = "...";
  int spaces = 0;
  for (int i=0;  i<str.length();  i++)
  {
    if (str [i] == ' ')
    {
      spaces++;
    }
  }
```

#### Applications of Loops-3 Finding the first match
The code below uses a ```while``` loop, ```if``` statement, and ```else``` statement to find the first match:
```
  string str ="...";
  bool found = false;
  int position = 0;
  while (!found  &&  position < str.length())
  {
    if (str [position] == ' ')
    {
      found = true;
    }
    else
    {
      position++;
    }
  }
```

#### Applications of Loops-4 Finding the Maximum and Minimum
The code below uses a ```while``` loop and ```if``` statement to find the largest number:
```
  double largest;
  cin >> largest;
  double input;
  while (cin >> input)
  {
    if (input > largest)
    {
      largest = input;
    }
  }
```  
The code below uses a ```while``` loop and ```if``` statement to find the smallest number:
```
  double smallest;
  cin >> smallest;
  double input;
  while (cin >> input)
  {
    if (input < smallest)
    {
      largest = smallest;
    }
  }
```

#### Applications of Loops-5 Checking If Adjacent Values Are Equal
The code below uses a ```while``` loop and ```if``` statement to find if adjacent values are equal:
```
  double input;
  double previous;
  cin >> previous;
  while (cin >> input)
  {
    if (input == previous)
    {
      cout <<  "Duplicate input" << endl;
    }
    previous = input;
  }
```

#### The ```for``` Loop Again
- The ```for``` loop is very versatile
- The middle expression can be any condition
- An example of this follows:
  ```
  bool found = false;
  int posn;
  for (posn=0;  !found && posn<str.length();  posn++)
  {
    if (str [posn] == '')
    {
      found = true;
    }
  }
  ```
- Before looking at the example, remember readability is important
- It should be considered before adding “wrinkles” to code
