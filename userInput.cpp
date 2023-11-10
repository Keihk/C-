//
//  userInput.cpp
//  
//store the information
//  Created by Laura on 20/09/2022.
//

#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    
    // store the string (phrase)
    
    string name;
    cout << "Entre your name: ";
    getline(cin, name);  // store the string (phrase)
    
    cout << "Hello " << name << "." << endl;
    
    
    // store the numbre (integre, char)
    int age;
    cout << "Entre your age: ";
    cin >> age;         // store the numbre (integre, char)
    
    cout << "You are " << age << " years old" << endl;
   
    
    return 0;
}
