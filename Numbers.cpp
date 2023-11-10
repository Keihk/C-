//
//  Numbers.cpp
//  
//
//  Created by Laura on 20/09/2022.
//

#include <iostream>

using namespace std;

int main()
{
    int wnum = 5;
    double dnum = 5.5;
    
    cout << 5 + 7 << endl;      // =12 basic math
    cout << 10 % 3 << endl;     // Modulus operator: 3 with a remeinder of 1
  
    wnum ++;
    cout << wnum << endl;
    
    wnum --;
    cout << wnum << endl;

    wnum += 80;
    cout << wnum << endl;

    wnum -= 15;
    cout << wnum << endl;
    
    wnum *= 2;
    cout << wnum << endl;
    
    wnum /= 2;
    cout << wnum << endl;
    
    
    dnum ++;
    cout << dnum << endl;
    
    dnum --;
    cout << dnum << endl;

    dnum += 80;
    cout << dnum << endl;

    dnum -= 15;
    cout << dnum << endl;
    
    dnum *= 2;
    cout << dnum << endl;
    
    dnum /= 2;
    cout << dnum << endl;
    
    
    return 0;
}
