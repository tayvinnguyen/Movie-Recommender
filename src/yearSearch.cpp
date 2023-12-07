#include "../header/yearSearch.h"
#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

YearSearch::YearSearch(const vector<Movie>& movieVector)
    : movieVector(movieVector) {}

void YearSearch::searchAndPrint(const string& decade) const {
    //create a vector for movies that match the decade
    vector<Movie> matchingMovies;

    //find movies with release date in desired decade
    for (const auto& movie : movieVector) {
        // grab only the decade from the year
        string movieDecade = to_string(movie.getYear() / 10 * 10);

        if (movieDecade == decade) {
            matchingMovies.push_back(movie);
        }
    }

    //check if there are matching movies
    if (matchingMovies.empty()) {
        cerr << "No movies found in the specified decade." << endl;
        return;
    }

    //randomize the matching movies vector
    random_device rd;
    mt19937 g(rd());
    shuffle(matchingMovies.begin(), matchingMovies.end(), g);

    //print at most 3 matching movies
    int moviesToPrint = min(3, static_cast<int>(matchingMovies.size()));
    for (int i = 0; i < moviesToPrint; ++i) {
        const auto& movie = matchingMovies[i];
        cout << "Title: " << movie.getTitle() << ", Year: " << movie.getYear() << endl;
    }
}