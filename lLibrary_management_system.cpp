
/*
  NAME: MARIPET KERETO
  REG: CT101/G/26655/25

  LIBRARY MANAGEMENT SYSTEM
*/

#include <iostream>
#include <string>
using namespace std;

class Book {

public:

    string bookTitle, author;
    int copies_Available;

    // Function to input book details
    void inputDetails() {

        cout << "Enter book title: ";
        getline(cin, bookTitle);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter copies available: ";
        cin >> copies_Available;
    }

    // Function to borrow books
    void borrowBook(int borrow) {

        if (borrow <= 0) {

            cout << "Please enter a valid number of books." << endl;

        }

        else if (copies_Available >= borrow) {

            copies_Available = copies_Available - borrow;

            cout << "Books borrowed: " << borrow << endl;
            cout << "Updated copies available: "
                 << copies_Available << endl;
        }

        else {

            cout << "Sorry! Not enough copies available." << endl;
        }
    }

    // Function to display book details
    void displayDetails() {

        cout << "\nLIBRARY MANAGEMENT SYSTEM" << endl;
        cout << "=========================" << endl;

        cout << "Book title: " << bookTitle << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: "
             << copies_Available << endl;
    }

};

int main() {

    Book book1;

    int borrow;
    char choice;

    book1.inputDetails();

    // Continue until user chooses to quit
    while (true) {

        book1.displayDetails();

        cout << "\nHow many books do you want to borrow? ";
        cin >> borrow;

        book1.borrowBook(borrow);

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N') {

            cout << "\nThank you for using the Library Management System!"
                 << endl;

            break;
        }
    }

    return 0;
}
