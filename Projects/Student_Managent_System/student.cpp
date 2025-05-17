#include <iostream> // adding members of iostream in std namespace
#include <string>   // adding member of string in std namespace
#include <vector>   // adding member of map in std namespace

using namespace std; // because i dont want to write std:: stuff

class Student
{

private:
    string StudentName;
    string rollNo;

public:
    Student(string studentName, string rollNo)
    {
        this->StudentName = studentName;
        this->rollNo = rollNo;
    }

    string getName()
    {
        return this->StudentName;
    }

    string getRoll()
    {
        return this->rollNo;
    }

    void setName(string newStudentName)
    {
        this->StudentName = newStudentName;
    }

    void setRoll(string newRollNo)
    {
        this->rollNo = newRollNo;
    }
};

int main()
{

    vector<Student> students;
    string studentName;
    string rollNo;
    string updateStudentOrRoll;
    string deleteStudentOrRoll;
    string searchStudentOrRoll;
    string newUpdatedValue;
    bool isFound = false;
    int adminChoice;

    while (1)
    {
        cout << "Enter Your Choice Whether What u want ?" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Update Student" << endl;
        cout << "3. Delete Student" << endl;
        cout << "4. Search by roll no. / name of Student" << endl;
        cout << "5. Display All Students" << endl;
        cout << "6. Exit" << endl;

        cin >> adminChoice;

        switch (adminChoice)
        {
        case 1:
        {
            cout << "Enter Student Name: ";
            cin >> studentName;
            cout << "Enter Student Roll No. : ";
            cin >> rollNo;

            // create object of new student
            Student studentObject(studentName, rollNo);

            // add it to the vector list
            students.push_back(studentObject);
            break;
        }

        case 2:
        {
            cout << "Enter Studnet Name / Roll No. that wanted to update: ";
            cin >> updateStudentOrRoll;

            cout << "Enter New Updated Value: " << endl;
            cin >> newUpdatedValue;

            // it will only changing Student Name
            // If wants to change roll number also then for that already have a setRoll to set the roll no.
            for (Student &s : students)
            {
                if (s.getName() == updateStudentOrRoll || s.getRoll() == updateStudentOrRoll)
                {
                    s.setName(newUpdatedValue);
                    isFound = true;
                }
            }
            if (!isFound)
            {
                cout << "We Didnt get the Studnet name or Roll No. at what u specified" << endl;
            }

            // to check for further admin choices
            isFound = false;

            break;
        }

        case 3:
        {
            cout << "Enter Student Name or Roll No. to Delete the The Student: ";
            cin >> deleteStudentOrRoll;

            for (auto it = students.begin(); it < students.end(); ++it)
            {
                if (it->getName() == deleteStudentOrRoll || it->getRoll() == deleteStudentOrRoll)
                {
                    cout << "SuccessFully Deleted Student " << it->getName() << endl;
                    students.erase(it);
                }
            }
            break;
        }

        case 4:
        {
            cout << "Enter Studnet Name or Roll No. u want to search: " << endl;
            cin >> searchStudentOrRoll;

            for (auto it = students.begin(); it < students.end(); ++it)
            {
                if (it->getName() == searchStudentOrRoll || it->getRoll() == searchStudentOrRoll)
                {
                    cout << "We Found it!!" << endl;
                    cout << "Name: " << it->getName() << " Roll No. : " << it->getRoll() << endl;
                    isFound = true;
                }
            }

            if (!isFound)
            {
                cout << "We Doesnt Found Any Student Name / Roll with u specified" << endl;
            }

            // for next admin purpose
            isFound = false;
        }

        case 5:
        {
            // simply displaying All Studnet Details
            for (Student &s : students)
            {
                cout << "Name : " << s.getName() << " Roll No. : " << s.getRoll() << endl;
            }
            break;
        }

        case 6:
        {
            cout << "Exited ...." << endl;
            return 0;
        }
        }
    }
    return 0;
}