#include <iostream>
#include <vector>

using namespace std;

int main(){

    /*
        Vector -> Dynamic Array
            - Push and Pop -> O(1)
            - Can access any index
    */

    // Create a vector of integers and initialize it with four elements: 1, 2, 3, 4
    vector<int> b = {1,2,3,4};

    // Add a new element to the end of the vector
    b.push_back(5);

    // Get the first element in the vector
    int first_element = b.front();

    // Get the last element in the vector
    int last_element = b.back();

    // Get the number of elements in the vector
    int vector_size = b.size();

    // Remove the last element in the vector
    b.pop_back();
    cout << "Popped" << endl;

    // Check if the vector is empty
    if(b.empty()){
        cout << "Vector is empty" << endl;
    }else{
        cout << "Vector is not empty" << endl;
    }

    // Set the first element in the vector to 11
    b.at(0) = 11;

    // Clear the vector (remove all elements)
    b.clear();

    return 0;
}
