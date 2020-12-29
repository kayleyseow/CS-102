## Chapter 7 Notes: Pointers 
CS 102 Introduction to Programming Using C++  
12/3/2020

#### A Game
A picture of the game:  
|     Dice 	| Game Board 	|
|-	|-	|
|     <img src="https://cloud-4tsuxp10s.vercel.app/0image.png" alt="Drawing of the dice"/> 	| <img src="https://cloud-4tsuxp10s.vercel.app/1image.png" alt="Drawing of the game board" width=60%/> 	|  

#### Playing the Game
- The players start at START and take turns
- On your turn:  
  - You roll the die
    - The number on the die tells which card you take from the draw pile
  - You take the correct card from the draw pile
  - You move the number of spaces shown on the card
- The first person to reach “FINISH” wins

#### Analyzing the Game
- The number on the die did not tell you how many squares to move
- Instead, it told you which card to take
- The card told you how many squares to move

#### Pointers
- A pointer is like the die
- A pointer doesn’t contain the data itself
  - The die didn’t tell you how many squares to move
- A pointer just tells you where to go to find the data
  - You used the die to find a card in the pile
  - Then, the card told you how to move

#### Pointer = Address
- From now on, we will think of a pointer as containing a number
- This number can be 0, 1, 2, 3, …
- It is not the data we need
- It contains the address _in memory_ of the data
- Example:  A pointer contains 6
  - This means the data is in location 6

#### Is This Like an Index into an Array?
- Yes, it’s exactly like that
  - The only difference is that a pointer points to actual memory, not just the cells in an array
- If a pointer contains 0, that means _actual_ byte 0
  - This is the very first byte in memory
- All of Chapter 7 is about pointers

#### Symbols to Know: Symbol 1: ```*```
- The symbol ```*``` is used to declare a pointer variable
- The declaration:  
  ```double* data_ptr;```
- means that ```data_ptr``` is a pointer to a ```double``` precision value
- ```data_ptr``` does not actually contain a ```double``` precision value

#### Symbols to Know: Symbol 2: ```&```
- An ```&``` in front of a variable gets the address of the data contained in the variable
- The declaration:  
  ```double data_val;```
- creates an actual variable ```data_val``` that can contain a ```double``` precision value
- Then, in a program, you can code:
  ```data_ptr = &data_val;```
- This means to get the address of ```data_val``` and store it in ```data_ptr```

#### The Word Dereference
- The word dereference means getting or using the value a pointer points to

#### Practicing with ```*``` and ```&```
- Background:
  ```
  int* id_pointer;
  int sams_id = 2515;
  ```  
- Now assume that ```sams_id``` is stored at location 32.
- What is the effect of this statement?
  ```id_pointer = &sams_id;```
- What is the effect of this statement?
  ```cout << *id_pointer;```

#### Uninitialized Pointers
- There is a danger here
- When you create a pointer, you have to make sure it points to something before using it
- What is wrong with this code?
  ```
  char* user_code;
  cout << *user_code;
  ```

#### The Value ```NULL```
- Initializing a pointer variable to ```NULL``` is a safety feature
  - ```NULL``` is a value that points to nowhere
- This guarantees that any references to it will not cause weird behavior
  - Instead, references to it will cause the program to exit with an error message

#### Trying to Dereference a ```NULL``` Pointer
- I tried to run a program containing  this code
  ```
  char* user_code = NULL;
  *user_code = ‘A’;
  ```  
- You got a pop-up box with the error message:  
  ```a.exe stopped working```  

#### Actually Using ```NULL```
- You can use the value ```NUL```L in a program
- You can check if a pointer is ```NULL``` before using it:  
  ```
  if (my_pointer == NULL)
  {
    //  Assign it to point to something before using it
  }
  else
  {
    // Use the pointer
  }
  ```

#### ```NULL``` Is Only for Pointers
- You can use ```NULL``` like any other value
- Except that ```NULL``` is only for pointer variables
- Typically, ```NULL``` represents some kind of error or an uninitialized pointer
 
