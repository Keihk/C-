//
//  returnStatement.cpp
//  
//
//  Created by Laura on 20/09/2022.
//

#include <iostream>

using namespace std;

double cube(double num)
    {
    return num * num * num;     // the same as : double result = num * num * num;
                                //     return result
    
    }



int main()
{
    
    double answer = cube(5.0);
    cout << answer << endl;
    
    cout << cube(2.0);              // short
    
    return 0;
}
