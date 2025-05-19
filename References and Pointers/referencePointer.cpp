#include <iostream>

using namespace std;

// This function takes a pointer to a pointer (int*&) as an argument
// The ampersand (&) after int* means that the function takes a reference to a pointer
// This function changes the value of the pointer that the reference points to
void changePointer(int*& ptr){
    // Create a new integer on the heap with the value 10
    ptr = new int(10);
    // Print out the value of the new integer
    cout << "Changes p in Function: " << *ptr << endl;
    // Return from the function
    return;
}

int main(){
    // Create a new integer on the heap with the value 20
    int *p = new int(20);

    // Print out the value of the integer
    cout << "Before p: " << *p << endl;

    // Call the changePointer function and pass it the pointer p
    changePointer(p);

    // Print out the value of the pointer after the function has changed it
    cout << "After p: " << *p << endl;

    // Return from main
    return 0;
}
