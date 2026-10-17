#include "book.h"

//Constructeur

Book::Book() : title(""), author(""), isbn(""), isAvailable(true), borrowerId("") {}

Book::Book(const string& title, const string& author, const string& isbn) : title(title), author(author), isbn(isbn), isAvailable(true), borrowerId("") {}

//Getter
string Book:: getTitle() const {
    return title;
}

string Book:: getAuthor() const {
    return author;
}

string Book:: getISBN() const {
    return isbn;
}

bool Book:: getAvailability() const {
    return isAvailable;
}

string Book:: getBorrowerId() const {
    return borrowerId;
}

//Setter

void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}

void Book::setAvailability(bool isAvailable) {
    this->isAvailable = isAvailable;
}

void Book::setBorrowerId(const string& borrowerId) {
    this->borrowerId = borrowerId;
}

//Methodes

void Book::checkOut(const string& borrowerId){}
void Book::returnBook() {}
string Book::toString() const {return "";}
string Book::toFileFormat() const {return "";}
void Book::fromFileFormat(const string& line) {}

