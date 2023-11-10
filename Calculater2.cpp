//
//  Calculater2.cpp
//Building a better calculater
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;




int main()
{
    int num1, num2, result;
    char op;                 //operater
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    if(op == '+')
    {
        result = num1 + num2;
    }
    else if(op == '-')
    {
        result = num1 - num2;
    }
    else if(op == '*')
    {
        result = num1 * num2;
    }
    else if(op == '/')
    {
        result = num1 / num2;
    }
    else
    {
        cout << "Invalid operator ";
    }
    
    cout << result;
    
    return 0;
}
