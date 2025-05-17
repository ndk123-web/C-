#include <iostream>

using namespace std;

// we can add multiple myspace
// we can't write namespace inside function
// when we declare multiple namespace with same name then I c++ allowed that and add into that namespace as u can see in below example 

   namespace myspace {
       int value =10;
   } 
   
   namespace myspace {
       int n = 12;
   }
   
using namespace myspace;

int main() {
   
   cout << value << endl;
   cout << n << endl;
    
    return 0;
}

