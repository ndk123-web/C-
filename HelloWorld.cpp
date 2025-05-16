#include <iostream>

// This line brings in input/output functionality, which is how we communicate with the user.
using namespace std;

// This is the main function, which is where the program starts when it runs.
int main() {
    // This line prints the string "Hello, World!" to the console, followed by a newline character.
    cout << "Hello, World! \n Yo Bro";
    // This line returns 0 to the operating system, which indicates that the program ran successfully.
    return 0;
}

// to Compile       -> g++ myFile.cpp ( default name is a.exe )
// to Run           -> ./a.exe 
// to Compile       -> g++ myFile.cpp -o custom.exe ( custom name ) 
// Compile and Run  -> g++ myFile.cpp -o customName && customName  

// endl vs \n -> -- endl flushes the output buffer, ensuring that all output is written to the console immediately. This can be useful for debugging or when you want to ensure that the user sees the output right away. However, using endl can be slower than using
//               -- \n   because it forces a flush of the output buffer every time it is used.
