#ifndef ANOTHER_H   // if not defined 
#define ANOTHER_H   // then defined it 

// This is a template function that takes two parameters of the same type T
// and returns the sum of the two parameters.
// The template parameter T can be any type (int, float, double, etc.)
template <typename T>
T add(T a , T b){
    // Simply return the sum of the two parameters
    return a + b;
}

// This is a non-template function that takes two int parameters and returns
// the sum of the two parameters plus 2.
int add1(int a, int b){
    // Simply return the sum of the two parameters plus 2
    return a + b + 2;
}

#endif
