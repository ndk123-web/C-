#include <iostream>

using namespace std;

// we can add multiple myspace
// we can't write namespace inside function
// when we declare multiple namespace with same name then I c++ allowed that and add into that namespace as u can see in below example
// this also allowed in multiple file 

// that's how std also work like
/*
   if we write iostream header then inside iostream header there is std namespace that adds cout , cin function to the std 

  again if we write string header then inside string header there is std namespace that adds string related function 

 so then we are able to use cout , string and all after writing header 

 then combining iostream namespace std and string namespace std , c++ merge all function of std in one and then we are using members of that header that we included 

*/

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

