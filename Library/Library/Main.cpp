#include <iostream>
#include "Library.h"

char input;
Library* library = new Library();
Book* book;

void askForBook();
void checkGetBookFromLibrary();
void checkReturnBook();

int main()
{
    askForBook();
}

void askForBook() {
    std::cout << "Do you want a new book? (Y/N)" << std::endl;
    std::cin >> input;
    checkGetBookFromLibrary();

    std::cout << "Do you want to return a book? (Y/N)" << std::endl;
    std::cin >> input;
    checkReturnBook();

    askForBook();
}

void checkGetBookFromLibrary() {
    if (input == 'Y' || input == 'y') {
        book = library->getBook();
        std::cout << "You got a book!" << std::endl;
        askForBook();
    }
}

void checkReturnBook() {
    if (input == 'Y' || input == 'y') {
        if (library->getLendedAmount() > 0) {
            library->returnBook(book);
            std::cout << "You returned a book!" << std::endl;
            askForBook();
        }
        else {
            std::cout << "No books lended!" << std::endl;
        }
    }
}