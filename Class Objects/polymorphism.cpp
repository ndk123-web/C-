#include <iostream>

/*
    Polymorphism:
        - It is useful for code reusability: 
            - reuse attributes and methods of an existing class when you create a new class.
*/

// Base class
class Animal{
    public:
        // Virtual function providing interface framework.
        virtual void animalSound(){
            std::cout << "The animal makes a sound\n";
        }
};

// Derived class
class Dog : public Animal{
    public:
        // Override virtual function
        void animalSound(){
            std::cout << "The dog barks\n";
        }
};

// Derived class
class Cat : public Animal{
    public:
        // Override virtual function
        void animalSound(){
            std::cout << "The cat meows\n";
        }
};

int main(){

    // Create an instance of base class
    Animal myAnimal;
    // Create an instance of derived class
    Dog myDog;
    // Create an instance of derived class
    Cat myCat;

    // Call virtual function
    myAnimal.animalSound();
    // Call virtual function
    myDog.animalSound();
    // Call virtual function
    myCat.animalSound();

    return 0;
}
