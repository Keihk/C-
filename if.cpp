//
//  if.cpp
//  
//
//  Created by Laura on 20/09/2022.
//

#include <iostream>

using namespace std;


int main()
{
    bool isMale = false;
    bool isTall = true;
    
    
    if(isMale && isTall)        // male and tall
    {
        cout << "You are a tall male" << endl;
    }
    else if(isMale && !isTall)  // male and NOT tall
    {
        cout << "You are a short male" << endl;
    }
    else if(!isMale && isTall)  // NOT male and tall
    {
        cout << "You are a tall female" << endl;
    }
    else                        // NOT male and NOT tall
    {
        cout << "You are a female" << endl;
    }
    
    
    return 0;
}
