// The <iostream> library is used for input and output operations in C++.
// It contains the std namespace, which includes objects like cout, cin, and endl.
#include <iostream>

// Using the standard namespace to avoid prefixing std:: before standard objects.
using namespace std; 

/*
    Data Types in C++:
    1. Primitive:
        - int: Integer type (e.g., 10, -5)
        - float: Single-precision floating-point type (e.g., 3.14f)
        - double: Double-precision floating-point type (e.g., 19.19921)
        - char: Character type (e.g., 'A', 'z')
        - bool: Boolean type (true or false)
        - void: Represents no value (used for functions that return nothing)
    2. Non-Primitive:
        - string: Sequence of characters (e.g., "Hello")
        - array: Collection of elements of the same type
        - pointer: Stores the memory address of another variable
        - structure: User-defined data type to group related variables
*/ 

int main() {

    // Integer: 4 bytes = 32 bits (Range: -2^31 to 2^31-1)
    int a = 10; 
    cout << "Integer a: " << a << endl;

    // Character: 1 byte (Stored as ASCII value, then converted to binary)
    char b = 'A';
    cout << "Character b: " << b << endl;

    // Float: 4 bytes = 32 bits (Single-precision floating-point)
    float PI = 3.14f;
    cout << "Float PI: " << PI << endl;

    // Boolean: 1 byte = 8 bits (true = 1, false = 0)
    bool isSafe = true;
    cout << "Boolean isSafe: " << isSafe << endl;

    // Double: 8 bytes = 64 bits (Double-precision floating-point)
    double d = 19.19921;
    cout << "Double d: " << d << endl;

    // String: Sequence of characters
    string str = "My String";
    cout << "String str: " << str << endl;

    /*
        Type Casting and Conversion:
        1. Type Casting:
            - Implicit: Automatic conversion by the compiler (small to large type).
              Example: char -> int
            - Explicit: Manual conversion by the programmer (large to small type).
              Example: float -> int
    */

    // Implicit Type Casting: char to int
    char grade = 'A';
    int conv = grade; // ASCII value of 'A' is 65
    cout << "Type Casting (char to int): " << conv << endl;

    // Explicit Type Conversion: float to int
    float ch = 10.4f;
    int conv2 = (int)ch; // Truncates the decimal part
    cout << "Type Conversion (float to int): " << conv2 << endl;

    /*
        cin: Used to take input from the user.
        Example: cin >> variable;
    */

    int age;
    cout << "Enter your age: ";
    cin >> age; // Takes input from the user
    cout << "Your age is: " << age << endl;

    /*
        Operators in C++:
        1. Arithmetic Operators:
            - +, -, *, /, %, ++ (increment), -- (decrement)
        2. Relational Operators:
            - ==, !=, >, <, >=, <=
        3. Logical Operators:
            - && (AND), || (OR), ! (NOT)
        4. Bitwise Operators:
            - &, |, ^, ~, << (left shift), >> (right shift)
    */

    return 0;
}

/*
    Notes:
    1. Data Types:
        - int: Used for integers (e.g., 10, -5).
        - float: Used for single-precision floating-point numbers (e.g., 3.14f).
        - double: Used for double-precision floating-point numbers (e.g., 19.19921).
        - char: Used for single characters (e.g., 'A').
        - bool: Used for true/false values.
        - string: Used for sequences of characters (e.g., "Hello").
    2. Input/Output:
        - cout: Object of ostream class, used for output.
        - cin: Object of istream class, used for input.
        - endl: Used to insert a newline (same as "\n").
    3. Type Casting:
        - Implicit: Automatic conversion by the compiler (e.g., char to int).
        - Explicit: Manual conversion by the programmer (e.g., float to int).
    4. Operators:
        - Arithmetic: Perform mathematical operations.
        - Relational: Compare two values.
        - Logical: Combine multiple conditions.
        - Bitwise: Perform operations at the bit level.
*/