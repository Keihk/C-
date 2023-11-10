//
//  inheritance.cpp
//  define a class and define other classes, that can extend the functionality
//
//  Created by Laura on 22/09/2022.
//

#include <iostream>
using namespace std;

// SuperClass
class Chef{
public:
    void makeChicken(){
        cout << "The chef makes yummy chicken" << endl;
    }
    void makeSalad(){
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes bbq ribs" << endl;
    }
};

// SubClass
class ItalianChef : public Chef     // using inheritance from Chef class(able to access all of class Chef)
{
public:
    void makePasta()
    {
        cout << "The chef makes pasta" << endl;
    }
    void makeSpecialDish(){                // overriding function
        cout << "The chef makes chicken parm" << endl;
    }
};


int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSalad();
    chef.makeSpecialDish();
    
    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();
    
    return 0;
}
