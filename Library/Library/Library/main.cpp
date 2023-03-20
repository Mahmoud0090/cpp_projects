#include <iostream>
#include "Library.h"
#include "Book.h"

int main()
{
    Book b("c++", "George");
    Book b1("c#", "Micheal");
    Book b2("java", "robert");

    Library l("books"); //library object that read file called book contains book names and the author of each book

    //Library l1; // library object that instantiate empty library

    //l.addBook(b);

    l.addBook(b);
    l.addBook(b1);
    l.addBook(b2);

    //l.addBook(b2);

    //l.viewAuthorBook("Dan Brown");

    Book b4("The Da Vinci Code", "Dan Brown");

    l.removeBook(b4);

    l.searchForBook("The Da Vinci Code");
    l.viewAuthorBook("Dan Brown");

    //l.viewBooks(); 
}