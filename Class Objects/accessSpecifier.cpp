#include <iostream>

class myClass{

    // Public -> Can Change and Access from outside 
    public:
        int publicVar = 10;
    
    // Private -> Can't Change and Access from outside
    private:
        int privateVar = 20;
    
    // Protected -> same as private but can be inherited
    protected:
        int protectedVar = 30;

    // The default access specifier is private
    int defaultPrivateVar;
};

int main(){

    myClass c1;
    std::cout << c1.publicVar << "\n";

    /* Can't Access Because it's protected */
    // std::cout << c1.protectedVar << "\n";

    return 0;
}