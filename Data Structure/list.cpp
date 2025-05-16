#include <iostream>
#include <list>

using namespace std;

int main()
{

    /*
        List -> Doubly Linked List
            - Efficient Insert and Erase anywhere (O(1) if pointer known)
            - No direct access like vector (no indexing)
    */

    // Create a list of integers and initialize it with values: 1, 2, 3, 4
    list<int> myList = {1, 2, 3, 4};

    // Add an element to the end
    myList.push_back(5);

    // Add an element to the front
    myList.push_front(0);

    // Get first element using front()
    int first_element = myList.front();

    // Get last element using back()
    int last_element = myList.back();

    cout << "First: " << first_element << ", Last: " << last_element << endl;

    // Check size
    cout << "Size: " << myList.size() << endl;

    // Check if list is empty
    if (myList.empty())
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }

    // Remove element from front
    myList.pop_front();

    // Remove element from back
    myList.pop_back();

    // Print the remaining list
    cout << "Remaining List: ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    // Clear the list
    myList.clear();

    // Final check
    if (myList.empty())
    {
        cout << "List is now empty after clear()" << endl;
    }

    return 0;
}
