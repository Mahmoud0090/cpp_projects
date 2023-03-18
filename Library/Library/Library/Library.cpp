#include "Library.h"

void Library::addBook(Book b)
{
	if(!searchForBook(b.bookName))
	listOfBooks.push_back(b);

	else
	std::cout << "book " << b.bookName << " is already in list " << std::endl;
}

void Library::removeLastBook()
{
	listOfBooks.pop_back();
}

bool Library::searchForBook(std::string bookName)
{
	for(auto book : listOfBooks)
	{
		if (book.bookName == bookName)
		{
			//std::cout << "book found!" << std::endl;
			return true;
		}
	}
	//std::cout << "book not found!" << std::endl;
	return false;
}
void Library::viewBooks()
{
	for (auto book : listOfBooks)
	{
		std::cout << book.bookName << " , " << book.AuthorName <<std::endl;
	}
}