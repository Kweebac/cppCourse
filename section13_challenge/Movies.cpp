#include "Movies.h"

#include <iostream>
using std::cout, std::endl;

void Movies::addMovie(string n, string r, size_t t) {
    size_t counter {};
    for (Movie m : allMovies) {
        if (m.name == n) {
            cout << "That movie already exists" << endl;
        }
        else {
            ++counter;
        }
    }
    if (counter == allMovies.size()) {
        Movie temp {n,r,t};
        allMovies.push_back(temp);
    }
}
void Movies::displayMovies() {
    for (size_t i {}; i < allMovies.size(); ++i) {
        cout << "Name: " << allMovies[i].name << endl;
        cout << "Rating: " << allMovies[i].rating << endl;
        cout << "Times watched: " << allMovies[i].timesWatched << endl << endl;
    }
}
void Movies::displayMovie(string n) {
    for (size_t i {}; i < allMovies.size(); ++i) {
        if (n == allMovies[i].name) {
            cout << "Name: " << allMovies[i].name << endl;
            cout << "Rating: " << allMovies[i].rating << endl;
            cout << "Times watched: " << allMovies[i].timesWatched << endl << endl;
        }
    }
}
void Movies::incrementMovie (string n) {
    size_t counter {};
    for (size_t i {}; i < allMovies.size(); ++i) {
        if (n == allMovies[i].name) {
            ++allMovies[i].timesWatched;
        }
        else {
            ++counter;
        }
    }
    if (counter == allMovies.size()) {
        cout << "There isn't a movie called " << n << endl;
    }
}

Movies::Movies() {}
Movies::~Movies() {}
