#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Map declaration: key=int, value=string
    map<int, string> student;

    // Inserting elements
    student[101] = "Amit";
    student[103] = "Ravi";
    student[102] = "Neha";

    // Another way to insert
    student.insert({104, "Priya"});

    // Print map
    for (auto it : student)
    {
        cout << "Roll: " << it.first << ", Name: " << it.second << endl;
    }

    // Access by key
    cout << "Student with roll 102: " << student[102] << endl;

    // Check if a key exists
    if (student.count(105))
    {
        cout << "Roll 105 exists\n";
    }
    else
    {
        cout << "Roll 105 not found\n";
    }

    // Erase an element
    student.erase(103);

    cout << "After erasing roll 103:\n";
    for (auto it : student)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
