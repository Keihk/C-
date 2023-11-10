//
//  ClassesObjects.cpp
//  Classes and Objects
//
//  Class :creating a new date type
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;

// creating a class (a new date type) specification
class Book
{
    public:
    string title, author;
    int pages;
    
    // creating Constructor Function - get called whenever create a book obj.
    Book(string name)      // (parameter)
    {
        cout << name << endl;
    }
};


int main()
{
    // creating an object : instance of the specification
    Book book1("Harry Potter");
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;
    
    cout << book1.title << endl;
    
    Book book2("Lord of the Rings");
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 600;
    
    cout << book2.pages << endl;
    
    return 0;
}
