#include <iostream>
#include <string>

// type 1
// This is a struct with one object named obj1
// It has two data members: an integer named myNum and a string named myName
struct {    
    int myNum;
    std::string myName;
} obj1;

// type 2 
// This is a struct with two objects named o1 and o2
// It has two data members: an integer named num and a string named name
struct {
    int num;
    std::string name;
} o1,o2;

// type 3
// This is a struct with multiple objects (we'll make three objects below)
// It has two data members: a string named model and an integer named speed
struct car{
    std::string model;
    int speed;
};

int main(){

    // type 1 -> one object of struct 
    // Initialize obj1's data members
    obj1.myNum = 10;
    obj1.myName = "Ndk";
    // Print out obj1's data members
    std::cout << "Name: " << obj1.myName << " Num: " << obj1.myNum;
    std::cout << "\n";

    // type 2 -> multiple object of struct 
    // Initialize o1's data members
    o1.name = "N";
    o1.num = 12;
    // Initialize o2's data members
    o2.name = 'Y';
    o2.num = 13;
    // Print out o1's and o2's data members
    std::cout << "Name1: " << o1.name << " Num: " << o1.num << " Name2: " << o2.name << " Num2: " << o2.num;

    // type 3 -> Using name of struct create multiple struct objects
    // Create three objects of struct car
    car myCar1 , myCar2 , myCar3;
    // Initialize myCar1's data members
    myCar1.model = "BMW";
    myCar1.speed = 300;
    // Initialize myCar2's data members
    myCar2.model = "Merceder";
    myCar2.speed = 200;
    // Initialize myCar3's data members
    myCar3.model = "Honda";
    myCar3.speed = 200;

    // Print out each car's data members
    std::cout << "\n Car 1 Model: " << myCar1.model << " Speed: " << myCar1.speed << "\n"; 
    std::cout << "Car 2 Model: " << myCar2.model << " Speed: " << myCar2.speed << "\n"; 
    std::cout << "Car 3 Model: " << myCar3.model << " Speed: " << myCar3.speed << "\n"; 
    
    // Create an array of car objects
    // We'll use this to store myCar1, myCar2, and myCar3
    // and then iterate over the array to print out each car's data members
    car myCarArr[] = {myCar1, myCar2, myCar3};

    // Iterate over the array of car objects using a for-each loop
    // This loop will automatically iterate over all the elements in the array
    // and assign each element to the variable 'i' for us to use
    for (car i : myCarArr) {
        // Print out the model and speed of the current car object
        // We'll use std::cout to print out the messages and the variables
        // will be separated by a space and then followed by a newline
        std::cout << i.model << " " << i.speed << "\n";
    }

    return 0;   
}
