#include "Library.h"

Book*& Library::getBook() {
	Book* book = new Book();
	lendedAmount++;

	return book;

	//lendedBooks.assign(1, book);
}

void Library::returnBook(Book* book) {
	lendedAmount--;
	delete book;

	//WIP, cant get lists to work right
	/*for (int i = 0, i < lendedBooks.size; i++) {
		if (book == lendedBooks. {
			lendedBooks.remove(i);
		}
	}*/
	
}

int Library::getLendedAmount() {
	return lendedAmount;
}

