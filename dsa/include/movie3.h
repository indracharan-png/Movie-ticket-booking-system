#ifndef MOVIE3_H
#define MOVIE3_H
#include"Movie.h"
#include<string>
using std::string;

class Movie3
{
    public:
        Movie3(int movie_id,string name,string genre,string format);
        int MOVIE_ID;
        string Name;
        string Genre;
        string Format;
        void func();

    protected:

    private:
};

#endif // MOVIE2_H
