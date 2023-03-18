#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include "Book.h"

class Library
{
public:
	std::vector<Book> listOfBooks;
	std::map<std::string, std::vector<std::string>> author2books;
	Library();
	Library(std::string fileName);
	void addBook(Book b);
	void removeLastBook();
	bool IsBookInLib(std::string bookName);
	void searchForBook(std::string bookName);
	void viewAuthorBook(std::string authorName);
	void viewBooks();
};

