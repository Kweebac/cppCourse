#ifndef MOVIE_H
#define MOVIE_H
#pragma once

#include <string>
using std::string;

class Movie {
private:
    string name;
    string rating;
    size_t timesWatched;
public:
    friend class Movies;
    Movie(string, string = "Unknown", size_t = 0);
    ~Movie();
};

#endif