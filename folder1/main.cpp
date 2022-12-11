#include "Movies.h"
#include "Movie.h"

#include <iostream>
#include <string>
using std::cout, std::endl, std::cin, std::string;

int main() {
    Movies Kweebac {};
    Kweebac.addMovie("Star Wars","PG-13");
    Kweebac.addMovie("Harry Potter");
    Kweebac.displayMovies();
    Kweebac.incrementMovie("Harry Potter");
    Kweebac.displayMovie("Harry Potter"); 
}