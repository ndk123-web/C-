#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    int bookId;
    string authorName;
    string bookTitle;
    float bookPrice;

    Book *nextSameAuthor;
    Book *nextAuthor;

    Book(int bookId, string authorName, string bookTitle, float bookPrice)
    {
        this->bookId = bookId;
        this->authorName = authorName;
        this->bookTitle = bookTitle;
        this->bookPrice = bookPrice;

        this->nextSameAuthor = nullptr;
        this->nextAuthor = nullptr;
    }
};

// Check if author already exists
Book *checkIsSameAuthor(string authorName, Book *start)
{
    Book *dummyStart = start->nextAuthor; // skip dummy

    while (dummyStart != nullptr)
    {
        if (dummyStart->authorName == authorName)
        {
            return dummyStart;
        }
        dummyStart = dummyStart->nextAuthor;
    }
    return nullptr;
}

// Print all books of a specific author
void relatedToAuthor(Book *authorStartNode)
{
    Book *temp = authorStartNode;

    while (temp != nullptr)
    {
        cout << "\nBook ID: " << temp->bookId << endl;
        cout << "Book Title: " << temp->bookTitle << endl;
        cout << "Book Author: " << temp->authorName << endl;
        cout << "Book Price: " << temp->bookPrice << endl;
        temp = temp->nextSameAuthor;
    }
}

// Print all books of all authors
void displayAllBooks(Book *start)
{
    Book *dummyStart = start->nextAuthor; // skip dummy

    while (dummyStart != nullptr)
    {
        cout << "\n--- Books by Author: " << dummyStart->authorName << " ---" << endl;
        relatedToAuthor(dummyStart);
        dummyStart = dummyStart->nextAuthor;
    }
}

int main()
{
    int userChoice;
    int bookId;
    float bookPrice;
    string bookTitle;
    string bookAuthor;

    Book bot(0, "Dummy", "Null", 0); // dummy head
    Book *start = &bot;

    while (true)
    {
        cout << "\n1. Add Book\n2. Display Books\n3. Exit\nEnter Your Choice: ";
        cin >> userChoice;

        switch (userChoice)
        {
        case 1:
        {
            cout << "Enter Book Id: ";
            cin >> bookId;

            cin.ignore(); // clear buffer
            cout << "Enter Book Author: ";
            getline(cin, bookAuthor);

            cout << "Enter Book Title: ";
            getline(cin, bookTitle);

            cout << "Enter Book Price: ";
            cin >> bookPrice;

            Book *newBook = new Book(bookId, bookAuthor, bookTitle, bookPrice);

            Book *existingAuthor = checkIsSameAuthor(bookAuthor, start);

            if (existingAuthor == nullptr)
            {
                // New author — add to nextAuthor
                Book *temp = start;
                while (temp->nextAuthor != nullptr)
                {
                    temp = temp->nextAuthor;
                }
                temp->nextAuthor = newBook;
            }
            else
            {
                // Same author — add to nextSameAuthor chain
                Book *temp = existingAuthor;
                while (temp->nextSameAuthor != nullptr)
                {
                    temp = temp->nextSameAuthor;
                }
                temp->nextSameAuthor = newBook;
            }

            break;
        }

        case 2:
            cout << "\nDisplaying All Books:\n";
            displayAllBooks(start);
            break;

        case 3:
            return 0;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
