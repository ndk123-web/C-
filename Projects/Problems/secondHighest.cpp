#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Dynamically allocate a vector of integers and initialize it with some values
    vector<int> *inp = new vector<int>{1, 5, 20, 8};
    
    // Initialize variables to store the maximum value and its index
    int maxVal = 0;
    int maxValIndex = 0;

    // Iterate through the vector to find the maximum value and its index
    for (int i = 0; i < (*inp).size(); i++)
    {
        // If the current element is greater than the current maximum value
        if (maxVal < inp->at(i))
        {
            // Update the maximum value and its index
            maxVal = (*inp)[i];
            maxValIndex = i;
        }
    }

    // Swap the maximum element with the first element of the vector
    int temp = inp->at(0);
    inp->at(0) = inp->at(maxValIndex);
    inp->at(maxValIndex) = temp;

    // Initialize variable to store the second highest value
    int secondHighest = 0;
    
    // Iterate through the vector starting from the second element
    for (int i = 1; i < (*inp).size(); i++)
    {
        // If the current element is greater than the current second highest value
        if (secondHighest < inp->at(i))
        {
            // Update the second highest value
            secondHighest = inp->at(i);
        }
    }

    // Output the second highest value
    cout << "Second Highest: " << secondHighest << endl;

    // Free the dynamically allocated memory
    delete inp;

    return 0;
}
