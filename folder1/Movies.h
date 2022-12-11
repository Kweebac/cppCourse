#ifndef MOVIES_H
#define MOVIES_H
#pragma once
#include "Movie.h"

#include <vector>
using std::vector;

class Movies {
private:
    vector<Movie> allMovies;
public:
    void addMovie (string, string = "Unknown", size_t = 0);
    void displayMovies();
    void displayMovie(string);
    void incrementMovie(string);
    Movies();
    ~Movies();
};

#endif