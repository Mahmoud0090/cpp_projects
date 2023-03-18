#include <iostream>
#include "Library.h"
#include "Book.h"

int main()
{
    Book b("c++", "George");
    Book b1("c#", "Micheal");
    Book b2("algorithms", "giovanny");
    Library l;

    l.addBook(b);
    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b1);

    l.viewBooks();

    //l.searchForBook("1555");
}