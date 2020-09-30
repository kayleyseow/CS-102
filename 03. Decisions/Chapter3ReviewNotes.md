## Chapter 3 Review Notes: Decisions
CS 102 Introduction to Programming Using C++  
9/18/2020  

#### ```if``` statements
- Be able to code ```if```, ```if``` with ```else```, given conditions. 
  - You will have to code several ```if```s
- Always use braces in ```if``` statements
- Know the relational operators
  - ```<```  (less than)
  - ```<=```  (less than or equal)
  - ```>```  (greater than),
  - ```>=```  (greater than or equal)
  - ```= =```  (equal)
  - ```!=```  (not equal)
- Know how to compare floating point numbers
- Know about comparing strings
  - ```“HI”``` and ```“Hi”``` are not equal
  - ```if (string1 < string2)``` means to test if ```string1``` comes before ```string2``` in the dictionary
- The last choice in a multi-way ```if``` is an ```else```, not an ```else if```
- Know what nested ```if```s are  

#### Flow Charts
- Know that the lines always flow down or to the right
- Know the various symbols
  - A rectangle indicates a task
  - A non-rectangular parallelogram indicates input or output
  - A diamond indicates a decision
  - Also, there are usually start and end symbols

#### The boolean data type  
- A ```bool``` variable can store either ```true``` or ```false```  
- Boolean variables frequently get their values as a result of a comparison
- Quick side note: booleans can be used in numerical equations
  - ```false``` is equal to ```0```  
  - ```true``` is equal to ```1```  

#### More advanced ```if``` ideas
- We can check if a data value is in a range  
- Know about and (```&&```), or (```||```), and not (```!```)  
- Know what short-circuit ```if``` logic is  
  - From [stackoverflow](https://stackoverflow.com/questions/9344305/what-is-short-circuiting-and-how-is-it-used-when-programming-in-java): Short-circuit evaluation means that when evaluating boolean expressions (logical ```&&``` and ```||```) you can stop as soon as you find the first condition which satisfies or negates the expression.  

#### Input Validation
- Input data should always be validated
- A common problem is that when people enter data, they make mistakes
