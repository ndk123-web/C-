// Online C++ compiler to run C++ program online
#include <iostream>

// A namespace is a collection of related functions and variables.
// It is used to group named entities that otherwise would have global scope into a narrower scope, giving them namespace scope.
// This allows organizing the elements of programs into different logical scopes referred to by names.
// The standard library uses the std namespace to avoid naming conflicts with user code.

// Declare a new namespace named mySpace
namespace mySpace{
    
    // Declare an integer variable named value with value 10
    int value = 10;
    
    // Declare a function named myFn that prints a message to the console
    void myFn(){
        std::cout << "Hello From Namespace mySpace" << std::endl;
    }
    
}

// Use the using namespace directive to bring all the names in the mySpace namespace into the current scope
using namespace mySpace;

int main() {
    
    // Print the value of the variable value from the mySpace namespace
    std::cout << value << std::endl; 
    
    // Call the function myFn from the mySpace namespace
    myFn();
    
    return 0;
}
