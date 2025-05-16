#include <iostream>

int main()
{
    // The number of rows in the pyramid
    int n = 4;

    // The counter for the number of stars to print
    int k = 1;

    // Print the pyramid
    std::cout << "Pyramid \n";
    for (int i = 1; i <= n; i++)
    {
        // Print the spaces before the stars
        int space = n - i;
        for (int j = 0; j < space; j++)
        {
            std::cout << " ";
        }

        // Print the stars
        for (int j = 0; j < i; j++)
        {
            std::cout << "* ";
        }

        // Move to the next line
        std::cout << "\n";
    }

    // Print the inverted pyramid
    std::cout << "\n Inverted Pyramid \n";

    for (int i = n - 1; i >= 0; i--)
    {
        // Print the spaces before the stars
        int space = n - i;
        for (int j = 0; j < space; j++)
        {
            std::cout << " ";
        }

        // Print the stars
        for (int j = 0; j <= i; j++)
        {
            std::cout << "* ";
        }

        // Move to the next line
        std::cout << "\n";
    }

    return 0;
}
