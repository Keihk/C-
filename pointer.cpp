//
//  pointer.cpp
//  Pointers
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;





int main()
{
    int age = 19;
    int *pAge = &age;
    
    double gpa = 2.7, *pGpa = &gpa;
    
    string name = "Mike", *pName = &name ;
    
    cout << "Age address: " << pAge <<endl;
    cout << "Age: " << *pAge << endl;
    
    *pAge = 25;
    cout << "Age a:" << *pAge << endl;
    
    cout << "Gpa ad: " << pGpa <<endl;
    cout << "Gpa: " << *pGpa <<endl;
    
    cout << "Name ad: " << pName <<endl;
    cout << "Name: " << *pName <<endl;
    
    
    return 0;
}
