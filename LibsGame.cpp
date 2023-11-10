//
//  LibsGame.cpp
//  
//
//  Created by Laura on 20/09/2022.
//

#include <iostream>
#include <cmath>

using namespace std;


int main ()
{
    string color, pNoun, celebrity;
    
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pNoun <<" are blue" << endl;
    cout << "I love " << celebrity << endl;
    
    return 0;
}

