#include "../header/Movie.h"
#include "../header/movieParse.h"
#include "../header/genreSearch.h"
#include "../header/directorSearch.h"

#include <iostream>

using namespace std;

int main() {
    MovieParse csvParser;
    vector<Movie> movies = csvParser.parse("movieDatabase.csv");

    // Example: Use GenreSearch to search for and print movies with a specific genre or subgenre
    GenreSearch genreSearch(movies);
    genreSearch.searchAndPrint("ACTION");
    DirectorSearch directorSearch(movies);
    directorSearch.searchAndPrint("Steven Spielberg");

    return 0;
}