//
//  constructorFunc.cpp
//  Constructor Function
//
//  Created by Laura on 22/09/2022.
//

#include <iostream>
using namespace std;

// creating a class (a new date type) specification
class Book
{
    public:
    string title, author;
    int pages;
    
    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }
    
    // creating Constructor Function - get called whenever create a book obj.
    Book(string aTitle,string aAuthor, int aPages)      // (parameter)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};


int main()
{
    // creating an object : instance of the specification
    Book book1("Harry Potter", "JK Rowling", 500);
    
    /*
    book1.title = "Harry Potter";
    book1.author = ;
    book1.pages = 500;  */
    
    Book book2("Lord of the Rings", "Tolkein", 600);
    /*
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 600;  */
    
    Book book3;
    
    
    cout << book1.title << endl;
    cout << book2.title << endl;
    cout << book3.title << endl;
    
    return 0;
}

