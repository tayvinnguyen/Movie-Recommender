#include "../header/genreSearch.h"

#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

GenreSearch::GenreSearch(const vector<Movie>& movieVector)
    : movieVector(movieVector) {}

void GenreSearch::searchAndPrint(const string& genreOrSubgenre) const {
    //create a vector to store matching movies
    vector<Movie> matchingMovies;

    //search through the movie vector to find matching genre
    for (const auto& movie : movieVector) {
        if (movie.getGenre() == genreOrSubgenre || movie.getSubGenre() == genreOrSubgenre) {
            matchingMovies.push_back(movie);
        }
    }

    //check if there are matching movies
    if (matchingMovies.empty()) {
        cerr << "No matching movies found." << endl;
        return;
    }

    //shuffle the matching movies vector to return random movies
    random_device rd;
    mt19937 g(rd());
    shuffle(matchingMovies.begin(), matchingMovies.end(), g);

    //print 3 matching movies
    for (int i = 0; i < 3; ++i) {
        const auto& movie = matchingMovies[i];
        cout << "Title: " << movie.getTitle() << ", Genre: " << movie.getGenre() << ", Subgenre: " << movie.getSubGenre() << endl;
    }
}
