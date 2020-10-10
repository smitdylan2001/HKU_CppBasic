#include "Book.h"
#include <list>

class Library
{
public:
	Book*& getBook();
	void returnBook(Book* book);
	int getLendedAmount();
private:
	std::list<Book> lendedBooks; //TODO: Fix lists
	int lendedAmount;
};

