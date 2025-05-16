#include <iostream>

int main(){

    std::string name = "Ndk";

    std::string *ptr = &name;

    std::string **ptr2 = &ptr;

    // now ptr holding address of name
    // inside name is actual data Ndk
    // and -> this means go inside that location and return data
    // -> this behaviour is same as *

    std::cout << **ptr2;

    return 0;
}