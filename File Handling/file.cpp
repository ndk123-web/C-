#include <iostream> // add cout , cin , .. in std   
// std is a namespace that contains objects for input/output operations

#include <string> // add members string in std   
// std::string is a class that allows us to work with strings

#include <fstream> // add members ofstream and ifstream in std
// ofstream and ifstream are classes that allow us to read and write to files

/*
    when we add fstream then in std came ofstream and ifstream
    when we add iostream then in std came cin,cout,cerr,...
    so std as a Locker room and has so many drawers inside that member are

    example:
        if we write iostream then iostream is key
        where we can open drawer where has cout , cin 
*/

int main()
{

    // Create File
    // Create a file named "file.txt" in the current directory
    std::string fileName = "file.txt";

    // Create an ofstream object named MyFile
    // MyFile is a variable of type ofstream
    // ofstream is a class that allows us to write to files
    std::ofstream MyFile(fileName);

    // Write to the file
    // Write the string "Files can be tricky , but it is fun enoughh" to the file
    MyFile << "Files can be tricky , but it is fun enoughh";

    // Print a message to the console
    // Print the message "Successfully created file " followed by the name of the file and " and Updated \n"
    std::cout << "Successfully created file " << fileName <<  " and Updated \n";

    // Close the file
    // Close the file so that other programs can access it
    MyFile.close();

    // Read File 
    // Create a string variable named text
    std::string text;

    // Create an ifstream object named MyReadFile
    // MyReadFile is a variable of type ifstream
    // ifstream is a class that allows us to read from files
    std::ifstream MyReadFile("file.txt");

    // Read the file line by line
    // While the end of the file has not been reached
    while (std::getline(MyReadFile,text))
    {
        // Print the line to the console
        // Print the string stored in the variable text
        std::cout << text;
    }

    // Close the file
    // Close the file so that other programs can access it
    MyReadFile.close();

    return 0;
}

