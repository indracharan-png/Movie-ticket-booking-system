#ifndef MOVIE4_H
#define MOVIE4_H
#include"Movie.h"
#include<string>
using std::string;

class Movie4
{
    public:
        Movie4(int movie_id,string name,string genre,string format);
        int MOVIE_ID;
        string Name;
        string Genre;
        string Format;
        void func();

    protected:

    private:
};

#endif // MOVIE2_H
