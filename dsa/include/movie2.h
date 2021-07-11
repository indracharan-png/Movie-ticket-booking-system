#ifndef MOVIE2_H
#define MOVIE2_H
#include"Movie.h"
#include<string>
using std::string;

class Movie2
{
    public:
        Movie2(int movie_id,string name,string genre,string format);
        int MOVIE_ID;
        string Name;
        string Genre;
        string Format;
        void func();

    protected:

    private:
};

#endif // MOVIE2_H
