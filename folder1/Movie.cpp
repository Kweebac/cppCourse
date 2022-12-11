#include "Movie.h"

#include <iostream>
using std::cout, std::endl;

Movie::Movie(string n, string r, size_t t) 
    : name {n}, rating {r}, timesWatched {t} {
        if (rating != "G" && rating != "PG" &&  rating != "PG-13" && rating != "R") {
            if (rating != "Unknown") {
                rating = "Unknown";
                cout << "Rating for " << name << " was set to " << rating << " because " << r << " was invalid." << endl;
            } 
        }
    }
Movie::~Movie() {}