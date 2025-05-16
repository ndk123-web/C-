#include <iostream>

using namespace std;

// Define a class named Car
class Car
{
public:
    int speed;   // Public integer variable to store the speed of the car
    string name; // Public string variable to store the name of the car

    // Member function defined inside the class
    void insideFn()
    {
        cout << "Hello From Inside Function";
    }

    // Declaration of a member function that will be defined outside the class
    void outsideFn();
};

// Definition of the member function outsideFn outside the class using scope resolution operator (::)
// This tells the compiler that outsideFn belongs to the Car class
void Car::outsideFn()
{
    cout << "Hello From Class Function\n";
}

int main()
{
    Car c1; // Create an object 'c1' of class Car

    c1.outsideFn(); // Call the member function outsideFn using the object 'c1'
    c1.insideFn();  // Call the member function insideFn using the object 'c1'

    return 0; // Return 0 to indicate successful program termination
}
