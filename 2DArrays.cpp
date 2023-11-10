//
//  2DArrays.cpp
//  2D Arrays & Nested Loops(a for loop indide of another for loop)
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;




int main()
{
    // creating 2D Arrays
    int numberGrid[3][2] =
    {
        {1,2},
        {3,4},
        {5,6}
    };
    
    cout << numberGrid[2][0] << endl;
    
    // creating nested loops
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j] <<",";
        }
        cout << endl;
    }
    
    
    
    
    
    
    // creating 3D Arrays
    int numGrid[2][3][4] =
    {
        {   {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} },
        {   {20, 21, 22, 23}, {24, 25, 26, 27}, {28, 29, 30,31} }
    };
    
  
    // creating nested loops
    
    for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 3; b++)
        {
            for(int c = 0; c < 4; c++)
            {
                cout << numGrid[a][b][c] <<",";
            }
            cout <<":";
        }
        cout << endl;
    }
    
    
    
    
    // creating 4D Arrays
    int numGri[2][2][2][3] =
    {
        {   { {1, 2, 3}, { 6, 7, 8} }, {   {21, 22, 23}, { 26, 27, 28} },    },
            
        {    {   {11, 12, 13}, {15, 16, 17} },  {   {31, 32, 33}, {35, 36, 37} },   }
    };
    

    
    // creating nested loops
    
    for(int d = 0; d < 2; d++)
    {
        for(int e = 0; e < 2; e++)
        {
            for(int f = 0; f < 2; f++)
            {
                for(int g = 0; g < 3; g++)
                {
                    cout << numGri[d][e][f][g] <<",";
                }
                cout << ":";
            }
            cout << "|";
        }
        cout << endl;
    }
    
    
    
    
    
    
    return 0;
}

