#include <iostream>

// We're using the standard namespace to avoid having to prefix std:: before standard objects.
using namespace std;

// Define a class named Car with public data members and methods.
class Car{
    public:
    // Data member to store the model of the car as a string.
    string model;
    // Data member to store the speed of the car as an integer.
    int speed;

    // Constructor for the Car class. It takes two parameters: a string for the model and an integer for the speed.
    // When an object of the Car class is created, this constructor is called automatically.
    // It initializes the data members of the object with the values passed as arguments to the constructor.
    Car(string model , int speed){
        // Print a message to the console to indicate that the constructor has been called.
        cout << "This is My Class Construtor\n";
        // Use the this pointer to access the data members of the object and assign them the values passed as arguments.
        this->model = model;
        this->speed = speed;
    }

    // Method to print out the data members of the object.
    void show(){
        // Use cout to print out the values of the data members separated by a space and followed by a newline.
        cout << model << " " << speed << "\n";
    }
};

// Entry point of the program.
int main(){

    // Create an object of the Car class named c1 and pass "BMW" and 200 as arguments to the constructor.
    // The constructor is called automatically when the object is created.
    Car c1("BMW",200);
    // Call the show method of the c1 object to print out its data members.
    c1.show();

    // Create another object of the Car class named c2 and pass "Mercedes" and 100 as arguments to the constructor.
    // The constructor is called automatically when the object is created.
    Car c2("Mercedes",100);
    // Call the show method of the c2 object to print out its data members.
    c2.show();
    
    // Indicate successful completion of the program.
    return 0;   
}
