#pragma once
#include <iostream>
#include <vector>
#include "Book.h"

class Library
{
public:
	std::vector<Book> listOfBooks;
	void addBook(Book b);
	void removeLastBook();
	bool searchForBook(std::string bookName);
	void viewBooks();
};

