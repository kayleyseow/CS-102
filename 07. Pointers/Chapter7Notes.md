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
