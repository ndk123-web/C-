#include <iostream>

// This is an example of simple inheritance in C++
// Inheritance allows us to create a new class that is a modified version of an existing class
// The new class is the "derived class" or "child class", and the existing class is the "base class" or "parent class"
// The derived class inherits all the members (methods and variables) of the base class and can also add new members or override existing ones
class Parent{
    public:

        // This is the constructor for the Parent class
        // A constructor is a special member function that is called when an object of the class is created
        // It is used to initialize the object's data members
        Parent(){
            std::cout << "I am Parent Constructor \n";
        }

        // This is a member function of the Parent class
        // It can be called by any object of the Parent class
        // It prints out the message "Yo I am parent"
        void parentFn(){
            std::cout << "Yo I am parent";
        }
};

// This is the Child class, which is derived from the Parent class
// It inherits all the members of the Parent class and can also add new members or override existing ones
class Child : public Parent{
    public:
        // This is the constructor for the Child class
        // It is called when an object of the Child class is created
        // It prints out the message "I am Child Constructor"
        Child(){
            std::cout << "I am Child Constructor \n";
        }

        // This is a data member of the Child class
        // It is an integer variable that is initialized to 10
        int x = 10;
};

// This is the main function, which is the entry point of the program
// It creates an object of the Child class and calls the parentFn method on it
int main(){

    // Create an object of the Child class
    Child c1;

    // Call the parentFn method on the object
    // This will print out the message "Yo I am parent"
    c1.parentFn();

    // Return 0 to indicate successful execution of the program
    return 0;
}
