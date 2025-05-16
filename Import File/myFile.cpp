#include <iostream>

// Import the contents of the file "another.h" into this file
// Note that we don't include a semicolon at the end of this line
// because we're importing a header file, not declaring a function or variable
#include "another.h"

int main() {
    // Call the function template "add" with two int parameters
    // and print the result to the console using std::cout
    std::cout << add<int>(2, 3) << std::endl;

    // Call the non-template function "add1" with two int parameters
    // and print the result to the console using std::cout
    std::cout << add1(2, 3) << std::endl;

    // Return 0 to indicate successful program termination
    return 0;
}
