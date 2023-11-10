//
//  GetterSetter.cpp
//  Getter & Setter
//  control the access to the diffrent attributes and elements
//  Created by Laura on 22/09/2022.
//

#include <iostream>
using namespace std;

class Movie
{
private:        // able to access only in the class
    string rating;
    
public:         // able to access from wherever
    string title, director;
    
    Movie(string aTitile, string aDirector, string aRating)
    {
        title = aTitile;
        director = aDirector;
        setRating(aRating);            //rating = aRating;
    }
    
    void setRating(string aRating)
    {
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
        
    }
    string getRating(){
        return rating;
    }
};


int main()
{
    
    Movie avengers("The Avengers", "Joss Whedon", "PG");
    
    avengers.setRating("G");    // modification of the rating via setRationg(public function)
    
    cout << avengers.getRating();
    
    return 0;
}
