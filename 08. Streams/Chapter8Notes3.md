## Chapter 8 Notes: Streams 
CS 102 Introduction to Programming Using C++  
1/7/2021

#### Sequential Access Files
- The text files we accessed before are sequential access files
- You have to access the records in order, without skipping any
- For example, if you wish to read the fourth line, you have to:  
  - Read the first line
  - Read the second line
  - Read the third line
  - Then you can read the fourth line 
- There is no equivalent to the array/pointer duality for a file
- You can only go forwards, not backwards
- A text file is an example of a sequential access file
- Sequential access files are easy to create
- They are slow to access, unless you want to access every record in order
- It is painful to change a sequential access file
  - To do that, you have to recreate the file
- The only disadvantage of sequential access files is that there is a lack of speed while accessing and you cannot easily chage the data in the file
- However, they allow variable length/size records, and ease of use (easy to make using notepad, word processor) 

#### Random Access Files with Uniform Data Records
- An alternative to a sequential access file is a random access file
- In a random access file, you can access any record at any time
  - You don't have to go in order
  - This is what the word random means
- A drawback is that every record must be the same length

#### Getting Ready to Use a Random Access File
- To declare a random access file variable, use
  ```cpp  
  fstream random_file;
  random_file.open(filename, status);
  ```
  - Status should be one of `ios::in`, `ios::out`, or `ios::binary``
  - `ios` stands for input/output status
  - It should be more than one, separated by `|`
- How to open the file:  
  `random_file("filename", ios::in | ios::out);`
- You will need this `#include`:  
  `#include <fstream>`
  
#### Reading Records from a Random Access File
- You can use read:
  `file_var.read(&variable, number_of_bytes);`

#### The `sizeof` Function
- You can use `sizeof()` to get the number of bytes in a data item
- Suppose, you have these lines in your program:  
  ```cpp  
  struct Data
  {
    int key;
    double value;
  };
  Data x;
  int y;
  ```
- `sizeof(x)` will tell you how many bytes `x` (or the struct) uses
- `sizeof(y)` will tell you how many bytes `y` (or any int) uses
- An Example
  ```cpp  
  struct Data
  {
    int key;
    double value;
  }
  int main()
  {
    Data x;
    x.key = 1;
    x.value = 100;
    
    fstream myFile ("data.bin", ios::out);
    myFile.write ((char*)&x, sizeof(x));
    myFile.close();
    
    fstream myFile2 ("data.bin", ios::in);
    myFile2.read ((char*)&x, sizeof (x));
    cout << "x: " << x.key << "," << x.value << endl;
    
    return 0;
  }
  ```

#### Finding Records in a Random Access File
- When using a random access file, everything is measured in bytes
  - Let's suppose a record is 15 bytes long
  - This means the first record is at byte 0
  - The second record is at byte 15
  - The 53rd record is at Byte 52*15
- To get ready to read the nth record, you need to move to the correct byte:  
  `random_file.seekg((n-1)*15);`

#### 
