#include <iostream>
#include <string>

using namespace std;

bool checkIsSameAuthor(string author , Book &start);

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
        (*this).bookId = bookId;
        this->authorName = authorName;
        this->bookTitle = bookTitle;
        this->bookPrice = bookPrice;
    }
};

// if author name is same then
int main()
{

    int userChoice;

    int bookId;
    float bookPrice;
    string bookTitle;
    string bookAuthor;

    Book bot(1, "StartOfBook", "Null", -1);
    Book *start = &bot;

    cout << "Enter Your Choice" << endl;
    cin >> userChoice;

    cout << "1. Add Book" << endl;
    cout << "2. Display Book" << endl;

    switch (userChoice)
    {
    case 1:
    {
        cout << "Enter Book Id" << endl;
        cin >> bookId;
        cout << "Enter Book Author" << endl;
        getline(cin, bookAuthor);
        cout << "Enter Book Title" << endl;
        getline(cin, bookTitle);
        cout << "Enter Book Price" << endl;
        cin >> bookPrice;
        Book b1(bookId, bookAuthor, bookTitle, bookPrice);

        // if author name is same then simply add to nextSameAuthor
        if (checkIsSameAuthor(bookAuthor,start))
        {
            start->nextSameAuthor = &b1;
            start->nextSameAuthor->nextSameAuthor = nullptr;
        }
        // if author name is not same then simplt add to nextAuthor which is unique author
        else{

        }
        break;
    }
    }

    return 0;
}

bool checkIsSameAuthor(string author , Book *start){
    return true;
}