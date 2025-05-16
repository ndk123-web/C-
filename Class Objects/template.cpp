#include <iostream>
#include <vector>

// This code demonstrates the use of templates in C++.
// Templates provide a way to define functions, classes, and data structures 
// that can work with any data type.

/*
    Using 'typename' and 'class' in templates:
    - Both 'typename' and 'class' can be used to define a template.
    - 'typename' is preferred when the template parameter is intended to 
      represent a type, to avoid confusion with the 'class' keyword 
      which is used for defining classes.
*/

// Function template to add two elements of any data type
template <typename T>
T add(T a , T b){
    return a + b; // Templates enable this function to handle any data type
}

/*
    Templates only work with the first block (class/function/struct) 
    they are defined with, hence a single template cannot be shared 
    across multiple functions without defining them separately.
    
    Uncommenting the below function would cause an error because it 
    tries to share the same template 'T' from the above function.
*/

// T add1(T a){
//     return a;
// }

// Function template to demonstrate accessing the data type within a container
template <typename B>
void fn(B Container){  // 'B' is the template parameter which can be any container type
    typename B::value_type a;  // 'B::value_type' extracts the data type stored in the container
    a = 10;  // Assign a value to 'a', which is of the container's stored data type
    std::cout << "Inside Vector Type: " << a << "\n";  // Output the value of 'a'
}

// Class template to define a class with methods that work with any data type
template <typename T>
class myClass{
    public:
        // Method to add two elements of any data type with additional logic
        T add(T a , T b){
            return a + b + 1; // Adds 1 to the result of the addition
        }

        // Another method to add two elements with different additional logic
        T add1(T a , T b){
            return a + b + 2; // Adds 2 to the result of the addition
        }
};

// Entry point of the program
int main(){

    // Use the function template 'add' with 'int' data type
    std::cout << add<int>(2,3) << std::endl;  // Outputs the sum of 2 and 3

    // Use the function template 'fn' with a vector of integers
    std::vector<int> v;  // Declare a vector of integers
    fn(v);  // Call 'fn' to demonstrate accessing the vector's stored data type

    // Use the class template 'myClass' with 'int' data type
    myClass<int> c1;  // Create an object of 'myClass' with 'int' as the template parameter
    std::cout << "Addition : " << c1.add(10,20) << "\n";  // Outputs the sum of 10 and 20 with additional logic
    std::cout << "Addition1 : " << c1.add1(10,20) << "\n";  // Outputs the sum of 10 and 20 with different logic

    return 0;  // Indicate successful program termination
}
