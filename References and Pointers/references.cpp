#include <iostream>

/*
    Bas Itna Dhyan Rkhna ki ,
    in stack ek hee object hai ek hee object ko ham alag alag name se call kr skte hai  
*/

int main()
{
    // Declare a string variable called food and assign it the value "pizza".
    // The string "pizza" is stored in memory, and the variable food is a pointer to that memory location.
    std::string food = "pizza";
    // Print out the memory address of the variable food and the value it points to.
    std::cout << "stack address of Food: " << &food << "\n";
    std::cout << "heap data of Food: " << food.c_str() << "\n";

    // Declare a reference variable called meal and set it equal to food.
    // This means that meal is an alias for the variable food, and they both point to the same memory location.
    std::string &meal = food; 
    // Print out the memory address of the variable meal and the value it points to.
    std::cout << "stack address of Meal: " << &meal << '\n';
    std::cout << "heap data of Meal: " << meal.c_str() << '\n';

    // Modify the value that food points to by adding "Changed" to the end of it.
    // This will also change the value that meal points to, since they are aliases for the same memory location.
    food = food + "Changed";

    // Print out the memory address of the variable food and the value it points to.
    // This should show that the memory address of food has not changed, but the value it points to has.
    std::cout << "stack address of Food: " << &food << "\n";
    std::cout << "heap data of Food: " << food.c_str() << "\n";

    // Print out the memory address of the variable meal and the value it points to.
    // This should show that the memory address of meal has not changed, but the value it points to has.
    std::cout << "stack address of Meal: " << &meal << '\n';
    std::cout << "heap data of Meal: " << meal.c_str() << '\n';

    return 0;
}
