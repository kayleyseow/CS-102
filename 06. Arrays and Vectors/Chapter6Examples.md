## Chapter 6 Examples
CS 102 Introduction to Programming Using C++  

### Part 1
#### Example 1:
  ```cpp  
  int temps [24];
  int temps [] = {80, 65, 70, 78, 75};
  int temps [5] = {70, 80, 85};
  double lengths [] = {35.25, 34, 35.5, 36, 36,75, 36};
  ```  

#### Example 2:
  ```cpp  
  int number_of_parts [] = {50, 55, 52, 60, 58, 62};
  for (int i=0;  i<6; i++)
  {
    cout  <<  number_of_parts [i]  <<  endl;
  }
  ```  
  
#### Example 3:
Create a new double array, called costs, that can hold 100 elements
- Lots of lines of missing code
- Print the third element
- Set the tenth element to $50.00
- Test if the 17th element is less than 500.  If so, print a message.

#### Example 4:
  ```cpp  
  int number_of_parts [16];
  for (int i=0;  i<16; i++)
  {
    cout  <<  number_of_parts [i]  <<  endl;
  }
  ```  

#### Example 5:
  ```cpp  
  double costs [100];
  for (int i = 0;  i < 100;  ++i)
  {
    costs [i] = 100.0;
  }
  ```
  
#### Example 6:
  ```cpp  
  for (int i = 0;  i < 100;  ++i)
  {
    costs [i] += 200.0;
  }
  ```  

#### Example 7:
  ```cpp  
  for (int i = 0;  i < 100;  ++i)
  {
    costs [i] = i;
  }
  ```  

#### Example 8:
  ```cpp  
  for (int i = 0;  i <= 100;  ++i)
  {
    if (costs [i] > 5000)
    {
      cout << "costs [" << i + "] = " << costs [i] << " is greater than $5000" << endl;
    }
  }
  ```  
***
### Part 2
#### Example 1
  ```cpp  
  for (int i=0;  i<10;  i++)
  {
    nums [i] = 0;
  }
  ```
OR
  ```cpp  
  for (int i=0;  i<10;  i++)
  {
    nums [i] = i;
  }
  ```

#### Example 2-Part 1:  Calculating a Sum
  ```cpp  
  int sum = 0;
  for (int i=0;  i<number_of_items;  i++)
  {
    sum += nums[i];
  }
  ```

#### Example 2-Part 2:  Calculating an Average
  ```cpp  
  int sum = 0;
  for (int i=0;  i<number_of_items;  i++)
  {
    sum += nums[i];
  }
  double average = (double) sum / number_of_items
  ```

#### Example 2-Part  3:  Finding the Maximum and Minimum
  ```cpp  
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
  
#### Example 3:  The Linear Search
  ```cpp  
  int search_value = ???;
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

#### Example 4:  Copying an Array
- NO:
  ```cpp  
  copy_of_nums = nums;
  ```  
- YES:
  ```cpp  
  for (int i=0;  i<number_of_items;  i++)
  {
    copy_of_nums [i] = nums[i];
  }
  ```

#### Example 5:  Listing the Elements in an Array Uuing a Separator
Here is the code:  
  ```cpp  
  cout << nums [0];
  for (int i=1;  i<number_of_items;  i++)
  {
    cout  <<  "," <<  nums[i];
  }
  ```  
OR  
  ```cpp  
  for (int i=0;  i<number_of_items-1;  i++)
  {
    cout  <<  nums[i]  <<  ",";
  }
  cout << nums [9];
  ```

#### Example 6-Part A:   (Pretending to) Delete a Position in an Array 
Assuming the order of the elements in the array is not important:  
  ```cpp  
  scores [2] = scores [number_of_scores-1];
  number_of_scores--;
  ```

#### Example 6-Part B:  When order matters
Move:  
  ```scores [4] to scores [3]```  
  ```scores [5] to scores [4]```  
  etc.  
  ```scores [9] to scores [8]```  
  ```number_of_scores--;```  
In general:  
  ```cpp  
  for (int i=3;  i<number_of_scores;  i++)
  {
    scores [i] = scores [i+1];
  }
  number_of_scores--;
  ```

#### Example 7-Part A:  (Pretending to) Insert an Element into an Array
Assuming the order of the elements in the array is not important:
  ```cpp  
  scores [number_of_scores] = item;
  number_of_scores++;
  ```

#### Example 7-Part B:  When order matters
Move:  
  ```scores [8] to scores [9]```  
  ```scores [7] to scores [8]```  
  etc.  
  ```scores [2] to scores [3]```  
   Insert the item in position 2
   ```cpp  
   scores [2] = item;
   number_of_scores++;
   ```

#### Example 8:  Swapping Two Data Items
This is common in sorting:  Two data items might be out of order. Suppose you want to swap the values of ```a``` and ```b```
Why doesn't this code work?  
  ```cpp  
  a = b;
  b = a;
  ```  
Instead, we do this:  
  ```cpp  
  temp = a;     // Temporarily save a  
  a = b;        //  Copy b to a
  b = temp;     //  Copy saved value of a to b
  ```
Here, we will write a function to do this:  
  ```cpp  
  void swap (int &a, int &b)
  ```
- It will swap the values of its two arguments
- Notice the two ampersands

#### Example 9:  The Selection Sort-The code
  ```cpp  
  for (int i=0;  i<10;  ++i)
  {
    //  Find the index of the smallest element in scores [i+1, i+2, ..., 9]
    smallest_posn = index_of_smallest (i, 9);
    //  Swap element smallest_posn with the ith element
    swap (scores [i], scores [smallest_posn]);
  }
  ```

#### Example 10:  Code for the Binary Search
  ```cpp  
  bool found = false;
  int low = 0;
  int high = size - 1; 
  int pos = 0;
  while (low <= high  &&  !found)
    {
    pos = (low + high) / 2;
    if (nums [pos] == search_value)
    {
      found = true;
    }
    else if (nums [pos] < search_value)
    {
      low = pos + 1;
    }
    else
    {
      high = pos - 1;
    }
  }
  if (found)
  {
    cout << search_value << " found at position " << pos;
  }
  else
  {
    cout << search_value << " not found.  Insert before position" << pos;
  }
  ```
***
### Part 3
#### Example 1:
  ```cpp  
  int sum_elements (int int_array[], int len)
  {
    int sum=0;
    for (int i=0;  i<len;  i++)
    {
      sum += int_array[i];
      return sum;
    }
  }
  ```

#### Example 2:
  ```cpp  
  int append_element (int int_array[], int len, int new_element)
  {
    int_array[len] = new_element;
    len++;
    return len;
  }
  ```  

#### Example 3:
To add all elements in the first row:  
  ```cpp  
  int sum = 0;
  int row_num = 0;
  for (int i=0;  i<num_cols;  i++)
  {
    sum += nums [row_num] [i];
  }
  ```

#### Example 4:
To add all elements in the first column:  
  ```cpp  
  int sum = 0;
  int col_num = 0;
  for (int i=0;  i<num_rows;  i++)
  {
    sum += nums [i] [col_num];
  }
  ```

#### Example 5:
  ```cpp  
  int sum_row (int array [ ] [3], int num_cols, int row_num)
  {
    int sum = 0;
    for (int i=0;  i<num_cols;  i++)
    {
      sum += array [row_num] [i];
    }
  return sum;
  }
  
  int main ()
  {
    int sales_reps [5] [3] = {
                             {1, 6, 1},
                             {6, 5, 3},
                             {9, 2, 8},
                             {4, 8, 1},
                             {2, 9, 1}
                             };
    cout << "The sum of the elements in the first row is " << sum_row (sales_reps, 3, 1);
  }
  ```

#### Example 6:
  ```cpp  
  #include <vector>
  ```

#### Example 7:
  ```cpp  
  vector <int> nums (10);
  for (int i=0;  i<10; i++)
  {
    cin >> nums [i];
  }
  ```

#### Example 8:
  ```cpp  
  int sum  = 0;
  for (int i=0;  i<10;  i++)
  {
    sum += nums [i];
  }
  ```

#### Example 9:
  ```cpp  
  vector <int> read_nums ()
  {
    vector <int> temp_nums;
    int temp_val;
    while (cin >> temp_val)
    {
      temp_nums.push_back (temp_val);
    }
    return temp_nums;
  }
  ```

#### Example 10:
  ```cpp  
  vector <int> nums;
  /*  Deleted lines
      with many push_back and pop_back calls  */
  for (int i=0;  i<nums.size();  i++)
  {
    cout << nums [i];
  }
  ```

#### Example 11:  (Array Code to Find Values)
  ```cpp  
  int cust_nums [100];
  int invalid [100];
  int num_invalid = 0;
  for (int i=0;  i<number_of_customers;  i++)
  {
    if (cust_nums [i] < 1000  ||  cust_nums [i] > 9999)
    {
      num_invalid++;
      invalid [num_invalid] = cust_nums [i];
    }
  }
  ```

#### Example 12:  (Vector Code to Find Values)
  ```cpp  
  int cust_nums [100];
  vector <int> invalid;
  for (int i=0;  i<number_of_customers;  i++)
  {
    if (cust_nums [i] < 1000  ||  cust_nums [i] > 9999)
    {
      invalid.push_back (cust_nums [i]);
    }
  }
  ```
