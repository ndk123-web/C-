#include <iostream>
#include <deque>

using namespace std;

int main()
{

    /*
        Deque (Double Ended Queue)
            - Push/Pop from both ends: O(1)
            - Supports indexing like vector
            - Good when you need flexibility at front + back
    */

    // Create a deque and initialize it
    deque<int> dq = {10, 20, 30};

    // Add elements to the back
    dq.push_back(40);

    // Add elements to the front
    dq.push_front(5);

    // Access front and back
    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;

    // Index access (like vector)
    cout << "Element at index 2: " << dq[2] << endl;

    // Size
    cout << "Size: " << dq.size() << endl;

    // Remove from front
    dq.pop_front();

    // Remove from back
    dq.pop_back();

    // Check if empty
    if (dq.empty())
    {
        cout << "Deque is empty" << endl;
    }
    else
    {
        cout << "Deque is not empty" << endl;
    }

    // Print remaining elements
    cout << "Remaining deque: ";
    for (int val : dq)
    {
        cout << val << " ";
    }
    cout << endl;

    // Clear all
    dq.clear();

    return 0;
}
