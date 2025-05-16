#include <iostream>

/*
    try , throw
    catch
*/

int main()
{

    int age = 15;

    try
    {
        if (age >= 18)
        {
            std::cout << "Yes U r Allowed\n";
        }
        else
        {
            throw(age); // it goes to catch
            // throw 403; // u can throw any type of error 
        }
    }
    catch (int age)
    {
        std::cout << "U r Below 18\n";
        std::cout << "your age: " << age;
    }

    return 0;
}