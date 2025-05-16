#include <iostream>
#include <cstdio>
#include <format>

using namespace std;

class Person
{
public:
    int age;
    string name;
};

int main()
{
    Person p1;
    p1.age = 19;
    p1.name = "Ndk";

    // method 1: cout with <<
    cout << "Name: " << p1.name << " , Age: " << p1.age << "\n";

    // method 2: printf (C style)
    printf("Name: %s , Age: %d\n", p1.name.c_str(), p1.age);

    // method 3: C++20 std::format not supporting in my pc idk why 
    // cout << format("Name: {} , Age: {}\n", p1.name, p1.age);

    return 0;
}
