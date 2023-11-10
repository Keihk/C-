//
//  Strings.cpp
//  
//
//  Created by Laura on 20/09/2022.
//

#include <iostream>

using namespace std;

int main()
{
    string phrase = "Hello! Giraffe Academy";
    string phraseSub = phrase.substr(7,3);
    
 
    cout << phrase.length()<< endl;      // calling Function: length :How many caracters are inside
    cout << phrase[0] << endl;
    cout << phrase[1] << endl;
    cout << phrase.find("Giraffe",0) << endl;   //find an index position
    
    cout << phrase.substr(8,3) << endl;           // substring:(staring index,link(how many characters want to grab))
    cout << phraseSub << endl;
    
    
    return 0;
}
