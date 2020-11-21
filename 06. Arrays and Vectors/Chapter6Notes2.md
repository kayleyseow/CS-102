## Chapter 6 Notes: The Applications of Arrays and Vectors  
CS 102 Introduction to Programming Using C++  
11/17/2020  

#### What Can You Do to an Array?  
##### Example 1: Using Part of an Array
- For this example, and several that follow suppose the array nums is declared as:  
  ```int nums[10];```  
- It is easy to initialize an array
- A ```for``` loop is a very convenient tool:
  - You can use a ```for``` loop to set everything to 0
    ```
    for (int i=0;  i<10;  i++)
      nums [i] = 0;
    ```
  - You can also use a ```for``` loop to set everything to its own place in the array:
    ```
    for (int i=0;  i<10;  i++)
      nums [i] = i;
    ```  
- Using Part of an Array
  - In the previous point, we talked about using part of an array
  - The rest of the examples do that
  - Even though the array is dimensioned to 10, it may not be full
  - We will use the ```int``` variable ```number_of_items``` to tell how many of the 10 items are in use
##### Example 2: You Can Calculate Different Things from the Array of Numbers
- Calculating a Sum
  - If you want to know the sum of the elements in an array, you use familiar code:
    ```
    int sum = 0;
    for (int i=0;  i<number_of_items;  i++)
    {
      sum += nums[i];
    }
    ```  
- Calculating an Average
  - To calculate the average of the elements in an array, you just calculate the sum of the elements and divide by the number of elements:  
    ```
    int sum = 0;
    for (int i=0;  i<number_of_items;  i++)
    {
      sum += nums[i];
    }
    double average = (double) sum / number_of_items;
    ```
- Finding the Maximum and Minimum
  - This code is familiar too:
    ```
    int max = nums [0];
    int min = nums [0];
    for (int i=1;  i<number_of_items;  i++)
    {
      if (nums[i] > max)
      {
        max = nums [i];
      }
      if (nums[i] < min)
      {
      min = nums [i];
      }
    }
    ```  
##### Example 3: You Can Perform Linear Search
- Again, this is familiar code
- We used the linear search with strings
- This is a slow search
  - However, it always works
  - And, it’s easy to code
- There are other ways to search, but they assume the data is in some order
- The Code:
  - You want to know if one of the integers in ```nums``` is 17
    - You also want to know where 17 is, if it’s found
    - The value 17 is stored in the ```int``` variable ```search_value``` 
	    ```
	    int pos = 0;
	    bool found = false;
	    while (pos < number_of_items  &&  !found)
	    {
	      if (nums [pos] == search_value)
	      {
		found = true;
	      }
	      else
	      {
		pos++;
	      }
	    }
	    ```
##### Example 4: Copying an Array
- To copy the array ```nums``` to the array ```copy_of_nums```, you cannot use:  
  ```copy_of_nums = nums;```
- You must copy the array element by element:
  ```
  for (int i=0;  i<number_of_items;  i++)
  {
    copy_of_nums [i] = nums[i];
  }
  ```
##### Example 5: Listing the Elements in an Array
- To list the elements requires a separator
- This first chunk of code prints out a comma after each element, even after the last one:
  ```
  cout << nums [0];
  for (int i=1;  i<number_of_items;  i++)
  {
    cout  <<  “,”  <<  nums[i];
  }
  ```
- This second chunk of code prints out a comma after each element, but the last one (fenceposts):  
  ```
  for (int i=0;  i<number_of_items-1;  i++)
  {
    cout  <<  nums[i]  <<  “,”;
  }
  cout << nums [9];
  ```
#### Arrays As Data Structures
- Data structures are ways to store data
- There are two main types
  - An array is one of the types
- It is useful because it is easy to use
- Its main drawback is that it is not easily changed
  - The elements of the array can be changed
  - The array itself cannot be changed
#### Changing an Array Itself: Deleting a Position
- An array cannot be changed
- You cannot delete a position from an array
	- Suppose you have the array int scores[10];
	- You want to delete the third score
	- You want the array to have positions  
		0, 1, 3, 4, 5, 6, 7, 8, 9, but not 2
	- You cannot do this
#### Changing an Array Itself: Inserting a Position
- Again, an array cannot be changed
- You also cannot insert a position into an array
	- Suppose you have the array int scores[10];
	- You decide to insert a score after the fourth score
	- You want the array to have positions  
		0, 1, 2, 3, 3.5 maybe?, 4, 5, 6, 7, 8, 9
	- You cannot do this

#### Actually Changing an Array
- You can pretend to delete and insert
- Deleting and inserting can be very slow if you have a big array
- We will see code that deletes and inserts

#### Deleting an Element from an Array First Version
- Here is an easy and fast way to delete an element
- It assumes the order of the elements in the array is not important
	- A shopping cart is like this
	- Anything you put in a pile is like this
- If you don’t care about the order, you could simply move the last element into the soon-to-be empty spot:  
	```
	scores [2] = scores [number_of_scores-1];
	```  
- Then you have to decrement number_of_scores:  
	```
	number_of_scores--;
	```
#### Deleting an Element from an Array When Order Matters
- Again, the scenario is ```int scores[10];```  
	- Again, you want to delete the third score
- You can move the “bottom portion” of the array up to cover the third element
- In this case, we move
	scores [4] to scores [3]
	scores [5] to scores [4]
	etc. …
	scores [9] to scores [8]
#### Deleting an Element from an Array Second Version
- This code is for when order matters
- This code will be very slow if you have a big array
- Also, if you do this code often, it will slow down your program
	- For example, if it’s in a loop
		- This means that there are two loops here!
		```
		for (int i=3;  i<number_of_scores;  i++)
		{
			scores [i] = scores [i+1];
		}
		number_of_scores--;
		```
