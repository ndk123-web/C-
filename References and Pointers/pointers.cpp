#include <iostream>
#include <string>

int main()
{
    // declare a string variable called food and assign it the value "pizza"
    std::string food = "pizza";

    // declare a pointer variable called ptr and set it to point to the address of food
    std::string *ptr = &food;

    // print out the value of food (the string "pizza")
    std::cout << food << "\n";  

    // print out the address of food in the stack
    std::cout << &food << "\n"; // this will print out an address in hexadecimal format

    // print out the address of ptr in the stack
    std::cout << ptr << "\n";  

    // print out the address of ptr in the stack ( again, because ptr is a pointer and this is its address )
    std::cout << &ptr << "\n"; 

    // dereference the pointer ptr to get the value it points to (the string "pizza")
    std::cout << *ptr << "\n"; 

    // change the value of food using the pointer
    // this is like saying food = "Hamburgers";
    *ptr = "Hamburgers";

    // print out the value of food after changing it
    std::cout << "After Changed \n";
    std::cout << food;

    // print out the value that ptr points to (which is now "Hamburgers")
    std::cout << *ptr;

    return 0;
}
