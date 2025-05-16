#include <iostream>
#include <set>

using namespace std;

int main() {

    /*
        Set:
            - Stores only unique elements
            - Ordered (automatically sorted in ascending)
            - Implemented using Red-Black Tree (Self-balancing BST)
            - Search, Insert, Delete -> O(log n)
    */

    set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10);  // Duplicate, will be ignored

    // Print set
    cout << "Set elements: ";
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    // Check if element exists
    if (s.count(5)) {
        cout << "5 exists in set\n";
    } else {
        cout << "5 not found\n";
    }

    // Erase element
    s.erase(10);

    // Size of set
    cout << "Set size after erase: " << s.size() << endl;

    // Find element using iterator
    auto it = s.find(20);
    if (it != s.end()) {
        cout << "Found: " << *it << endl;
    } else {
        cout << "Not found\n";
    }

    // Clear all
    s.clear();
    cout << "Set size after clear: " << s.size() << endl;

    return 0;
}
