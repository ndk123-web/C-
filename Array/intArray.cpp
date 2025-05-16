#include <iostream>
#include <vector>

// Use the standard namespace to avoid prefixing std:: before standard objects.
using namespace std;

// Entry point of the program
int main()
{
    /*
        Arrays and Vectors in C++

        - Arrays are mutable (modifiable) in C++.

        - Fixed Size Arrays:
            - These are normal arrays that have a fixed size and cannot expand dynamically.
        
        - Dynamic Size Arrays:
            - "Vectors" are a data structure in C++ that can automatically expand as elements are added.
    */

    // Declare and initialize a fixed size array
    int myArray[] = {1, 2, 3, 4, 5, 6, 7};

    // Declare a fixed size array without initialization
    int myArray2[5]; // Array of size 5
    myArray2[0] = 1; // Assign value 1 to the first element
    myArray2[1] = 2; // Assign value 2 to the second element

    // Modify the second element of myArray
    myArray[1] = 10;
    cout << myArray[1]; // Output the modified element of myArray
    cout << myArray2[1]; // Output the second element of myArray2

    // Declare a dynamic size vector of integers
    vector<int> myInt;

    // Add elements to the vector
    myInt.push_back(1); // Add 1 to the vector
    myInt.push_back(2); // Add 2 to the vector
    myInt.push_back(3); // Add 3 to the vector

    // Access and output the second element of the vector (index 1)
    cout << "My Vector: " << myInt[1] << "\n";

    // Calculate and output the size of the fixed size array
    int sizeOfIntArray = sizeof(myArray) / sizeof(myArray[0]); // Total size divided by size of one element
    // Output the size of the array
    cout << "Size of Array: " << sizeOfIntArray << "\n";

    // Calculate and output the size of the vector
    int sizeOfVector = myInt.size(); // Use the size() method
    // Output the size of the vector
    cout << "Size of Vector: " << sizeOfVector << "\n";

    // Declare and initialize a 2x2 multi-dimensional array
    int multiDimen[2][2] = {
        {1, 2},
        {3, 4}
    };

    // Access and output an element from the multi-dimensional array
    cout << multiDimen[0][1]; // Outputs the element in the first row, second column

    // Indicate successful completion of the program
    return 0;
}
