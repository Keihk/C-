//
//  whileLoopG.cpp
//  
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;

int main ()
{
    int secretNum = 8, guess, guessCount = 0, guessLimit = 3;
    bool outOfGuesses = false;
    
    while(secretNum != guess && !outOfGuesses)  // !outOfGuesses = false: outOfGuesses = ture
    {
        if(guessCount < guessLimit)
        {
            cout << "Entre guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses)
    {
        cout << "You lose";
    }
    else
    {
        cout << "You win!";
    }
    
    return 0;
}
