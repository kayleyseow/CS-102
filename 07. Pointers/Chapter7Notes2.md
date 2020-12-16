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

#### A Pointer to an Array
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
