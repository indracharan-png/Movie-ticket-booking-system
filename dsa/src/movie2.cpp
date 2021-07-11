#include "Movie2.h"
#include "Movie.h"
#include<iostream>
using namespace std;

Movie2::Movie2(int movie_id,string name,string genre,string format)
{
    MOVIE_ID=movie_id;
     Name=name;
    Genre=genre;
    Format=format;
}
void Movie2 ::  func()
{
        cout<<endl;
        cout<<MOVIE_ID<<"              "<<Name<<"            "<<Genre<<"        "<<Format<<endl;
}
