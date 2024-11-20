#include<bits/stdc++.h>
using namespace std;

class Book {
public:
    static int book_id;
    string title;
    string author;
    string genre;
    bool is_available;

    Book() {}

    Book(string title, string author, string genre) {
        this->title = title;
        this->author = author;
        this->genre = genre;
        is_available = true;
        book_id++;
    }
};

int Book::book_id = 0;

class Library {
private:
    Book books[100];
    int book_count = 0;

public:
    void add_book(string title, string author, string genre) {
        if (book_count < 100) {
            books[book_count] = Book(title, author, genre);
            book_count++;
            cout << "Book " << title << " added to the library." << endl << endl;
        } else {
            cout << "Library is full, cannot add more books." << endl << endl;
        }
    }

    void remove_book(int book_id) {
        for (int i = 0; i < book_count; ++i) {
            if (i + 1 == book_id) {
                for (int j = i; j < book_count - 1; ++j) {
                    books[j] = books[j + 1];
                }
                book_count--;
                cout << "Book with ID " << book_id << " removed from the library." << endl << endl;
                return;
            }
        }
        cout << "Book with ID " << book_id << " not found." << endl << endl;
    }

    void borrow_book(int book_id) {
        for (int i = 0; i < book_count; ++i) {
            if (i + 1 == book_id) {
                if (books[i].is_available) {
                    books[i].is_available = false;
                    cout << "Book " << books[i].title << " borrowed." << endl << endl;
                } else {
                    cout << "Book " << books[i].title << " is not available for borrowing." << endl << endl;
                }
                return;
            }
        }
        cout << "Book with ID " << book_id << " not found." << endl << endl;
    }

    void return_book(int book_id) {
        for (int i = 0; i < book_count; ++i) {
            if (i + 1 == book_id) {
                if (!books[i].is_available) {
                    books[i].is_available = true;
                    cout << "Book " << books[i].title << " returned." << endl << endl;
                } else {
                    cout << "Book " << books[i].title << " is already available." << endl << endl;
                }
                return;
            }
        }
        cout << "Book with ID " << book_id << " not found." << endl << endl;
    }

    void list_available_books() {
        bool found = false;
        for (int i = 0; i < book_count; ++i) {
            if (books[i].is_available) {
                if (!found) {
                    cout << "Available books:" << endl;
                    found = true;
                }
                cout << i + 1 << ":" << books[i].title << " by " << books[i].author << endl;
            }
        }
        if (!found) {
            cout << "No books available." << endl << endl;
        } else {
            cout << endl; 
        }
    }

    void list_borrowed_books() {
        bool found = false;
        for (int i = 0; i < book_count; ++i) {
            if (!books[i].is_available) {
                if (!found) {
                    cout << "Borrowed books:" << endl;
                    found = true;
                }
                cout << i + 1 << ":" << books[i].title << " by " << books[i].author << endl;
            }
        }
        if (!found) {
            cout << "No books are currently borrowed." << endl << endl;
        } else {
            cout << endl; // Extra line for spacing
        }
    }
};

int main() {
    Library library;

    library.add_book("oops", "J.D", "cc");
    library.add_book("bye bye", "hooligan", "cks");

    library.list_available_books();

    library.borrow_book(1);
    library.list_borrowed_books();

    library.return_book(1);
    library.list_available_books();

    library.remove_book(2);
    library.list_available_books();

    return 0;
}