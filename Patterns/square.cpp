#include <iostream>

int main()
{
    // This variable determines the size of the square pattern
    int n = 4;

    // Output a header for the first pattern
    std::cout << "\n Pattern 1 \n";

    // Outer loop for each row of the square pattern
    for (int i = 0; i < n; i++)
    {
        // Inner loop for each column in the current row
        for (int j = 0; j < n; j++)
        {
            // Output the current column number (1-based index)
            std::cout << j + 1 << " ";
        }
        // Move to the next line after completing a row
        std::cout << "\n";
    }

    // Separate the patterns with a newline
    std::cout << "\n";

    // Output a header for the second pattern
    std::cout << "Pattern 2 \n";

    // Set the size of the pattern for the second example
    n = 3;
    // Initialize a counter to fill the pattern with sequential numbers
    int k = 1;

    // Outer loop for each row of the pattern
    for (int i = 0; i < n; i++)
    {
        // Inner loop for each column in the current row
        for (int j = 0; j < n; j++)
        {
            // Output the current counter value and increment it
            std::cout << k++ << " ";
        }
        // Move to the next line after completing a row
        std::cout << "\n";
    }

    // Indicate successful completion of the program
    return 0;
}
