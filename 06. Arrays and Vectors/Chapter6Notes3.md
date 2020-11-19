## Chapter 6 Notes: Arrays and Vectors, Part 3  
CS 102 Introduction to Programming Using C++  
11/19/2020  

#### Passing an Array into a Function  
- There are several important things to know if you want to pass an array into a function
- There are some important differences between passing an array and passing a simple variable
- Some differences are syntax differences
- Some differences involve knowing about what happens when using an array inside a program
- You are writing a function to add up the values in an array
- For example:  
		```int sum (int int_array[])```
- you have to add the brackets to indicate that a parameter is an array
- We don’t specify the size inside the brackets
- You also need to add another parameter to tell the size of the array
- So, the actual call should be:  
		```int sum (int int_array[], int array_size)```

#### Using Size As a Parameter
- As before, only a portion of the array might be in use
- We will use an ```int``` (like ```number_of_scores```) to keep track of the number of elements in use
- We could then pass that into a function
- The function might add or delete elements from the array
- This means it adjusts the ```int```

#### Changing the Effective Size of an Array inside a Function
- The function will have to alert the caller that the size has changed
- A common way to do that is to return the new size
- This function would then be an ```int``` function:  
  ``` int insert (int nums[], int size_of_array, int capacity, int num_to_insert)```

#### Capacity vs. Size
- We need to keep track of the number of elements in use in an array
- We also need to keep track of the capacity of the array
  - This is the initial size of the array
  - We might have declared the array:  
    ```int counts [10]```
    - Here, 10 is the capacity
- This might have to be passed to the function
  - We definitely need to pass the capacity if the function might add new elements to the array

#### Array Parameters Are Reference Parameters
- Array parameters are always reference parameters
  - If they were value parameters, a copy of the array would be passed into the function
  - Making this copy would take too long
- This means array data is “live” within a function
- Unlike variables, any changes you make to an array while inside a function are actually made to the array
- Also, unlike variables, you do not need (and we don’t use) the ```&``` on an array
- TL;DR you don't need ```*``` and ```&```  

#### Returning an Array from a Function
- Functions cannot return arrays
  - In fact, they can only return simple things, like variables
- That should not be a problem
  - If an array is a parameter, it’s a reference parameter and can be changed

#### Two-Dimensional Arrays
- We can create two-dimensional arrays
- You use the idea of a two-dimensional array when you attend a sporting event or a concert in a concert hall
- A matrix in math is a two-dimensional array
- Two-dimensional arrays are useful in many contexts
- Think of a two-dimensional array as having rows and columns
- To create a two-dimensional array, you declare it:  
  ```int concert_hall [number_of_rows]  [number_of_columns];```
- Notice that you need two pairs of brackets
- You can also create and initialize a two-dimensional array:
  ```
	int matrix [2] [3]= {
                      {1, 2, 3},
                      { 7, 9, 2} 
                      };
  ```
- You do have to specify the dimensions
- We do line the rows up like that

#### Using a Two-Dimensional Array
- Using an element of a two-dimensional array is no different than using a variable or an element of a one dimensional array
- For example, you can add up all the elements in the first row of an a two-dimensional array
##### Example 1: Add all elements in the first row
- This code snippet adds all elements in the first row:
  ```
  int sum = 0;
  int row_num = 0;
  for (int i=0;  i<num_cols;  i++)
  {
    sum += nums [row_num] [i];
  }
  ```
##### Example 2: Add all elements in the first column
- This code snippet adds all elements in the first column:
  ```
  int sum = 0;
  int col_num = 0;
  for (int i=0;  i<num_rows;  i++)
  {
    sum += nums [i] [col_num];
  }
  ```  

#### Functions and Two-Dimensional Arrays
- You have to be careful when writing a function that will use a two-dimensional array
- You have to specify the number of columns in the function header
- For example:
  - In ```main ()```:  
    ```sales_reps [5] [3];```
  - In the function definition:  
    ```int add_reps (arr [] [], which_row)```
- This is not OK.  It will generate a syntax error.

#### The Correct Way to Call a Function That Uses Two-dimensional Arrays
- If in ```main ()``` you have:   
  ```sales_reps [5] [3];```
- Then in the function definition you will need:  
  ```int add_reps (arr [] [3], which_col)```
- The number of columns must be specified
- This is because of how the array is stored in memory
- ```location_in_memory = first_index*2 + second_index + start_of_array```
  - We need to start calculations at 0 so we don't need to slow the program down with subtracting  

#### And Now for Something New: Vectors  
- A vector is similar to an array
- It can grow and shrink as needed
- Because of this, it is more flexible than an array
- To use it, you need to add
  ```#include <vector>```
- When declaring a vector, you have to use this syntax
  ```vector <int> nums (10);```
- This creates a vector that can contain 10 integers
- Notice that this looks different from declaring an ```int``` array
