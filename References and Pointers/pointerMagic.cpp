#include <iostream>
#include <cstdlib>

int main() {

    /*
        // Conceptual representation of a memory block allocated on the heap using malloc 

        0x5000: ?? ?? ?? ?? ?? ?? ?? ??   // 8 bytes of memory

        // When typecasted to int*, each int occupies 4 bytes
        ptr = (int*) 0x5000

        // Now, ptr[0] corresponds to the first 4 bytes starting at 0x5000
        // and ptr[1] corresponds to the next 4 bytes starting at 0x5004

    */

    // Allocate 12 bytes of memory on the heap using malloc
    // malloc returns a void pointer to the beginning of the allocated block
    void *raw = std::malloc(12);

    // Typecast the void pointer to an int pointer, so each int occupies 4 bytes
    int *ptr = (int*) raw;

    // Assign the value 10 to the first 4 bytes of the allocated memory
    *(ptr + 0) = 10; // Equivalent to ptr[0] = 10

    // Assign the value 20 to the next 4 bytes of the allocated memory
    *(ptr + 1) = 20; // Equivalent to ptr[1] = 20

    // Output the value of the first 4 bytes, expected to be 10
    std::cout << *(ptr + 0) << "\n";

    // Output the value of the next 4 bytes, expected to be 20
    std::cout << *(ptr + 1) << "\n";

    // Free the allocated memory to prevent memory leaks
    std::free(raw);

    return 0;
}
