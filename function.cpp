//
//  function.cpp
//  
//
//  Created by Laura on 20/09/2022.
//

#include <iostream>

using namespace std;

//creaing a function
void sayHi(string name, int age)
{
    cout << "Hello " << name <<  " ,You are " << age << endl;
}


int main()
{
    string n = "Mike";
    int a = 60;
    sayHi(n, a);
    
    n = "Tom";
    a = 25;
    sayHi(n, a);
    
    n = "Steve";
    a = 32;
    sayHi(n, a);
    
    
    return 0;
}
