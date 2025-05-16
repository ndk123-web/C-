#include <iostream>

// Use the standard namespace to avoid prefixing std:: before standard objects.
using namespace std;

// Function declarations: Declaring functions before main to use them later in the code.
// This function prints "hello" to the console.
void function1();

// This function prints "World" followed by a name. It has a default parameter "name" with value "Ndk".
void function2(string name = "Ndk");

// This function takes a string reference and changes its value. It demonstrates pass by reference.
void function3(string &name);

// This function demonstrates recursion by calculating the sum of numbers up to 'n'.
int recursion(int n);

int main(){
    // Call function1 to print "hello".
    function1();

    // Call function2 without arguments to use the default parameter "Ndk".
    function2();

    // Define a string variable "name" with initial value "Op".
    string name = "Op";

    // Call function3 to change the value of "name" by reference.
    function3(name);

    // Print the changed value of "name" after calling function3.
    cout << "Name in Main function: " << name << "\n";

    // Define an integer 'n' with value 10.
    int n = 10;

    // Call the recursive function to calculate the sum of numbers up to 'n'.
    int ans = recursion(n);

    // Print the result of the recursive function.
    cout << "Sum Up to " << n << " is " << ans << "\n";

    // Indicate successful completion of the program.
    return 0;
}

// Definition of function1: Prints "hello" to the console.
void function1(){
    cout << "hello\n";
}

// Definition of function2: Prints "World" followed by the given name.
void function2(string name){
    cout << "World" << name;
}

// Definition of function3: Takes a reference and changes the value of the original variable.
void function3(string &refname){
    // Change the referenced variable to "Changed".
    refname = "Changed";
    // Print the changed value within the function.
    cout << "Name in function3: " << refname << "\n";
}

// Definition of recursion: Calculates the sum of numbers from 'n' to 0 using recursion.
int recursion(int n){
    // Base case: If 'n' is less than or equal to 0, return 0.
    if ( n <= 0){
        return 0;
    }
    // Recursive case: Return 'n' plus the result of recursion for 'n-1'.
    return n + recursion(n-1);
}
