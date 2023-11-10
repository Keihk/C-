//
//  switch.cpp
//  Switch statements
//
//  Created by Laura on 21/09/2022.
//

#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum)
{
    string dayName;
    
   switch(dayNum)
   {
    case 0:
        dayName = "Sunday";
           break;
       case 1:
           dayName = "Monday";
           break;
       case 2:
           dayName = "Tuesday";
           break;
       case 3:
           dayName = "Wednesday";
           break;
       case 4:
           dayName = "Thursday";
           break;
       case 5:
           dayName = "Friday";
           break;
       case 6:
           dayName = "Satday";
           break;
       default:
           dayName = "Invalid day number";

           
   }
    return dayName;
}


int main ()
{
    
    cout << getDayOfWeek(0);
    
    return 0;
}
