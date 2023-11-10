//
//  exponentFunc.cpp
//  Exponent Function : take a number to a specific power
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;

// creating exponent function
int power(int baseNum, int powNum)
{
    int result = 1;
    
    for(int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }
    
    return result;
}

int main()
{
    
    cout << power(4,3);
    
    return 0;
}
