//
//  NumbresFunc.cpp
//  Cmath
// search C++ math functions
//
//  Created by Laura on 20/09/2022.
//

#include <iostream>
#include <cmath>

using namespace  std;

int main()
{
    cout << pow(2, 5) << endl;   // 2 power 5 : 2*2*2*2*2
    cout << sqrt(36) << endl;    // square root 36 = 6
    
    cout << round(4.3) << endl;     //round number
    cout << round(4.8) << endl;
    
    cout << ceil(4.1) << endl;      // the number up to the next highest whole number
    cout << floor(4.1) << endl;      // the number down to the next lowest whole number
    cout << floor(4.8) << endl;
    
    cout << fmax(3,10) << endl;       // return the bigger numbers

    cout << fmin(3,10) << endl;       // return the smaller numbers
    
    
    
    return 0;
}

