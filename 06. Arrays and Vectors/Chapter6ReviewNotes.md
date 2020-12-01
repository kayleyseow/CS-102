## Chapter 6 Review Notes: Arrays and Vectors
CS 102 Introduction to Programming Using C++  
11/12/2020

#### Vocabulary to know
- Array
- Elements of an array
- Subscript, index
- Bounds error

#### General facts to know about arrays
- An array is a group of variables that all
  - Have the same name
  - Have the same type
  - Are accessed by their positions
  - Store similar data
- An array has a definite size that cannot be changed
- The first index in an array is location is 0, the next is 1, etc.
- If an array is not full, you have to keep track of the effective length
- An array is a data structure (a way to store data)
- When an array is passed to a function, it is passed by reference
- A function cannot return an array  (A function cannot be of type array.)

#### Coding specifics
- Know how to declare an array
- Know how to use an array.  Specifically,
  - Be able to print and/or calculate with an element of an array
  - Be able to initialize an array using a ```for``` loop
  - Be able to calculate the sum, average of the elements in an array
  - Be able to find the maximum, minimum element in an array
  - Be able to search an array linearly
  - Be able to copy one array to another array
    - You have to do this element by element
  - Be able to list the elements in an array
    - This requires a separator

#### Sorting
- Sorting takes a long time
- Know the selection sort
- Know how to swap two data items
- Know that the quicksort is the fastest sort

#### Deleting elements from and inserting elements into an array
- You cannot actually delete or insert; this size of an array cannot be changed
- There are two ways to delete element ```i``` from an array containing ```n``` elements
  - 1.  You can copy element ```n```-1 to location ```i``` 
  - 2.  You copy element ```i```+1 to index ```i```, element ```i```+2 to index ```i```+1, …, element ```n```-1 to index ```n```-2  
- In either case, you have to decrement ```n```
- Similarly, there are two ways to insert a new element into an array containing   elements
  - 1.  You can copy the new element to location ```n```
  - 2.  Suppose you want to insert it at index ```i```. You copy element ```n```-1 to index ```n```, element ```n```-2 to index ```n```-1, …, element ```i``` to  index ```i```+1. Then insert the element at index ```i```.
  - Again, in either case, you have to increment ```n```.  
- Know that Option 2 (in both cases) can be very slow if you have a big array
- The delete operation assumes the item you are trying to delete is actually in the array
- The insert operation assumes that there is room in the array to insert a new element

#### The Binary Search
- The linear search is the slowest search
- A much faster search is the binary search
- It only works if the data is sorted
- The binary search works recursively
  - It breaks the data into halves
  - It determines the correct half and searches that half recursively

#### Two-Dimensional Arrays
- A two-dimensional array has rows and columns
- Know how to declare a two-dimensional array
- Know how to use a two-dimensional array  (It requires two subscripts.)

#### Vectors
- A vector is similar to an array, but it can grow and shrink dynamically
- You can add an element to the end of the array using ```push_back()```
- You can delete an element from the end of the array using ```pop_back()```
- To use a vector, you need to ```#include <vector>```
- Know how to declare a vector of a specified type and size
- Know that it’s common to create an empty vector and add elements to it using ```push_back()```. Also know how to do this
- Know how to use the ```size``` member function
- If you pass a vector into a function, it is passed by value
- A function can return a vector  (It can be of type vector.)
- You can copy one vector to another like you copy two ```int```s
