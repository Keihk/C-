//
//  ObjFunc.cpp
//  Object Functions (Instance Function)
//
//  Created by Laura on 22/09/2022.
//

#include <iostream>
using namespace std;

class Student
{
public:
    string name, majour;
    double gpa;
    
    Student(string aName, string aMajor, double aGpa)
    {
        name = aName;
        majour = aMajor;
        gpa = aGpa;
    }
    
    bool hasHonors()            // GPA >= 3.5
    {
     if(gpa >= 3.5)
        {
         return true;
        }
        return false;
    }
    
};


int main ()
{
    Student student1("Jim", "Bussiness", 2.4);
    Student student2("Pam", "Art", 3.6);
    
    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    
    return 0;
}
    
