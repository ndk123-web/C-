#include <iostream>

// This program demonstrates the concept of getter and setter methods in a class.
// Getters and setters are used to access and modify private members of a class.
// The main idea is to encapsulate the data and prevent direct access to private members,
// allowing controlled access through public methods.

class myClass {
    // Private members of the class are not accessible directly from outside the class.
    private:
        // Declare a private integer variable with an initial value of 20.
        int privateVar = 20;

    public:
        // Define a setter method to modify the value of the private variable.
        // This method takes an integer parameter 'newValue' and assigns it to 'privateVar'.
        void setter(int newValue) {
            privateVar = newValue;
        }

        // Define a getter method to access the value of the private variable.
        // This method returns the current value of 'privateVar'.
        int getter() {
            return privateVar;
        }
};

int main() {
    // Create an object 'c1' of class 'myClass'.
    myClass c1;

    // Use the getter method to print the initial value of the private variable.
    std::cout << "Initially Private Value: " << c1.getter() << "\n";

    // Use the setter method to change the value of the private variable to 200.
    c1.setter(200);

    // Use the getter method again to print the updated value of the private variable.
    std::cout << "After Setter Private Value: " << c1.getter() << "\n";

    // Return 0 to indicate successful program termination.
    return 0;
}
