#ifndef MOVIE1_H
#define MOVIE1_H
#include"Movie.h"
#include<string>
using std::string;

class Movie1
{
    public:
        Movie1(int movie_id,string name,string genre,string format);
        int MOVIE_ID;
        string Name;
        string Genre;
        string Format;
        void func();

    protected:

    private:
};

#endif // MOVIE1_H
