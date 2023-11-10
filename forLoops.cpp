//
//  forLoops.cpp
//  For Loops
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;



int main()
{
    // while loop
    int index = 1;
    
    while(index <= 5)
    {
        cout << index << endl;
        index++;
    }
    
    
    // for loop
    for(int i = 1; i <= 5; cout << i << endl, i++ )
    {}
        //cout << i << endl;
        //i++;
    
    for(int c = 5; c >= 1; cout << c << endl, c-- )
    {
        //cout << i << endl;
        //i++;
    }
    
    // for : array
    
    int nums[5] = {10, 20, 50, 80, 30};
    //nums[1];
    for(int j =0; j < 5 ; j++)
    {
        cout << nums[j] << endl;
        
    }
    
    
    return 0;
}
