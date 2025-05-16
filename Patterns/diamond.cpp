#include <iostream>

int main()
{
    // The number of rows in the diamond pattern
    int n = 4;

    // Print the top half of the diamond pattern
    for (int i = 1; i <= n; i++)
    {
        // Print the spaces before the stars
        int space = n - i;
        for (int k = 0; k < space; k++)
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

    // Print the bottom half of the diamond pattern
    n = n - 1;
    for (int i = 3; i >= 0; i--)
    {
        // Print the spaces before the stars
        int space = n - i + 1;
        for (int k = 0; k < space; k++)
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

    // Indicate successful completion of the program
    return 0;
}
