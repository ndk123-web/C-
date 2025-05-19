#include <iostream>  // added cin , cout members like cout , cin , ... in std  
#include <cstdlib>   // added c lib members like malloc , calloc , ...

using namespace std;

int main(){

    cout << "Checking the Malloc Usage" << endl;

    // malloc(20) -> creates 20 bytes in heap
    // return memory location of first byte of memory with void*
    // it means compiler dont know how to use that memory location
    // example 1 -> if (int*) then 20 byte use as 4,4 byte for each because int has 4 bytes
    // example 2 -> if (char*) then 20 byte use as 1,1 byte for each because char has 1 byte
    // example 3 -> if (void*) then it means compiler dont know how to use this memory locations

    // now for this example i used int* means 
    // compiler knows the memory location of 20 bytes need to be used as 4,4 byte
    int *ptrToFirstLocation = (int*) malloc(20);

    *(ptrToFirstLocation + 0) = 10; // it's also equal to ptrToLocation[0]
    *(ptrToFirstLocation + 1) = 20; // it's also equal to ptrToLocation[1]

    // it's now running but it can be error in future 
    *(ptrToFirstLocation + 8) = 30;

    cout << *(ptrToFirstLocation + 0) << endl;
    cout << *(ptrToFirstLocation + 1) << endl; 

    // it's now running but it can be error in future 
    cout << *(ptrToFirstLocation + 8) << endl; 

    // it's always better to free to pointer from heap
    free(ptrToFirstLocation);

    return 0;
}
