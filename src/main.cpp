#include "../header/Movie.h"
#include "../header/movieParse.h"
#include "../header/genreSearch.h"

#include <iostream>

using namespace std;

int main() {
    MovieParse csvParser;
    vector<Movie> movies = csvParser.parse("movieDatabase.csv");

    // Example: Use GenreSearch to search for and print movies with a specific genre or subgenre
    GenreSearch genreSearch(movies);
    genreSearch.searchAndPrint("ACTION");

    return 0;
}