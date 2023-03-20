#include "Library.h"

Library::Library()
{
	std::cout << "Empty library instatiated!" << std::endl;
}

Library::Library(std::string fileName)
{
	std::fstream file;
	file.open(fileName + ".txt", std::ios::in);

	if (file.is_open())
	{
		std::string line;
		while (getline(file, line))
		{
			size_t pos = line.find(',');
			std::string book_name = line.substr(0, pos);
			std::string author_name = line.substr(pos + 1);

			Book b(book_name, author_name);
			listOfBooks.push_back(b);
			author2books[author_name].push_back(book_name);
		}
		file.close(); // close file
	}
}

void Library::addBook(Book b)
{
	if (!IsBookInLib(b.bookName))
	{
		listOfBooks.push_back(b);
		author2books[b.AuthorName].push_back(b.bookName);
	}
	
	else
	std::cout << "book " << b.bookName << " is already in list " << std::endl;
}

void Library::removeBook(Book b)
{
	if (IsBookInLib(b.bookName))
	{
		for (int i = 0; i < listOfBooks.size(); i++)
		{
			if (listOfBooks[i].bookName == b.bookName)
			{
				listOfBooks.erase(listOfBooks.begin() + i);
			}
		}

		for (int i = 0; i < author2books[b.AuthorName].size(); i++)
		{
			if (author2books[b.AuthorName][i] == b.bookName)
			{
				author2books[b.AuthorName].erase(author2books[b.AuthorName].begin() + i);
			}
		}
	}
	else
	{
		std::cout << "No book with name " << b.bookName << " to delete" << std::endl;
	}
}

bool Library::IsBookInLib(std::string bookName)
{
	for(auto book : listOfBooks)
	{
		if (book.bookName == bookName)
		{
			return true;
		}
	}
	return false;
}

void Library::searchForBook(std::string bookName)
{
	if (IsBookInLib(bookName))
	{
		std::cout << "book found!" << std::endl;
	}
	else
	{
		std::cout << "book not found!" << std::endl;
	}
}

void Library::viewAuthorBook(std::string authorName)
{
	if (author2books[authorName].size() != 0)
	{
		std::cout << "Here are the list of " << authorName << "'s books :" << std::endl;
		for (auto book : author2books[authorName])
		{
			std::cout << book << std::endl;
		}
	}
	else
	{
		std::cout<<"No books found for the author " << authorName << std::endl;
	}
}

void Library::viewBooks()
{
	for (auto book : listOfBooks)
	{
		std::cout << book.bookName << " , " << book.AuthorName <<std::endl;
	}
}