#include <iostream>

using namespace std;

int main()
{

    // ternary operator for if else 
    int isSafe = 1;
    bool safe = (isSafe == 1) ? true : false;

    // A for loop is used to iterate over a block of code repeatedly for a specified number of times.
    // The syntax for a for loop is: for (initialization; condition; iteration)
    // The initialization statement is executed once at the beginning of the loop.
    // The condition expression is evaluated at the beginning of each iteration.
    // If the condition is true, the loop body is executed. If the condition is false, the loop is terminated.
    // The iteration statement is executed at the end of each iteration.
    for (int i = 0; i <= 10; i++)
    {
        // Print the current value of i.
        cout << i << " ";
    }

    // Print a newline character.
    cout << endl;

    // A for-each loop is used to iterate over a range of values.
    // The syntax for a for-each loop is: for (type variable : range)
    // The type is the type of the variable, and the range is the range of values to iterate over.
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i : arr)
    {
        // Print the current value of i.
        cout << i << " ";
    }

    // Print a newline character.
    cout << endl;

    // A while loop is used to iterate over a block of code repeatedly for as long as a specified condition is true.
    // The syntax for a while loop is: while (condition)
    // The condition expression is evaluated at the beginning of each iteration.
    // If the condition is true, the loop body is executed. If the condition is false, the loop is terminated.
    int i = 0;
    while (i <= 10)
    {
        // Print the current value of i.
        cout << i << " ";
        // Increment i by 1.
        i++;
    }

    // Print a newline character.
    cout << endl;

    // A do-while loop is used to iterate over a block of code repeatedly for as long as a specified condition is true.
    // The syntax for a do-while loop is: do { body } while (condition)
    // The condition expression is evaluated at the end of each iteration.
    // If the condition is true, the loop body is executed. If the condition is false, the loop is terminated.
    i = 0;
    do
    {
        // Increment i by 1.
        i++;
        // Print the current value of i.
        cout << i << " ";
    } while (i <= 10);

    // Return 0 to indicate that the program has finished successfully.
    return 0;
}
