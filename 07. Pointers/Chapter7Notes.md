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
