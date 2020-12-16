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
