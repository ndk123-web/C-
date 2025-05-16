#include <iostream>

int main()
{
    int n = 4;

    // Pattern 1:
    // Print a right triangle with asterisks
    //  *
    //  * *
    //  * * *
    //  * * * *

    std::cout << "\n Pattern 1 \n";

    // Iterate over the rows of the triangle
    for (int i = 0; i < n; i++)
    {
        // Iterate over the columns of the triangle
        for (int j = 0; j <= i; j++)
        {
            // Print an asterisk followed by a space
            std::cout << "* ";
        }
        // Print a newline
        std::cout << "\n";
    }

    // Pattern 2:
    // Print an inverted right triangle with asterisks
    //  * * * *
    //  * * *
    //  * *
    //  *

    std::cout << "\n Pattern 2 \n";

    // Iterate over the rows of the triangle, starting from the bottom
    for (int i = n - 1; i >= 0; i--)
    {
        // Iterate over the columns of the triangle
        for (int j = 0; j <= i; j++)
        {
            // Print an asterisk followed by a space
            std::cout << "* ";
        }
        // Print a newline
        std::cout << "\n";
    }

    // Pattern 3:
    // Print a right triangle with numbers
    //  1
    //  2 2
    //  3 3 3
    //  4 4 4 4

    std::cout << "\n Patern 3 \n";
    n = 4;
    int k = 1;

    // Iterate over the rows of the triangle
    for (int i = 0; i < n; i++)
    {
        // Iterate over the columns of the triangle
        for (int j = 0; j <= i; j++)
        {
            // Print the current number followed by a space
            std::cout << k << " ";
        }
        // Increment the number
        k++;
        // Print a newline
        std::cout << "\n";
    }

    // Pattern 4:
    // Print an inverted right triangle with asterisks
    //  * * * *
    //  * * *
    //  * *
    //  *

    std::cout << "\n Pattern 4 \n";
    k = 1;

    // Iterate over the rows of the triangle, starting from the bottom
    for (int i = n - 1; i >= 0; i--)
    {
        // Iterate over the columns of the triangle
        int space = n - i;
        for (int k = 0; k < space; k++)
        {
            // Print a space
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            // Print an asterisk followed by a space
            std::cout << "* ";
        }
        // Increment the number
        k++;
        // Print a newline
        std::cout << "\n";
    }

    return 0;
}
