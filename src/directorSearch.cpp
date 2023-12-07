#include "../header/directorSearch.h"

#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

DirectorSearch::DirectorSearch(const vector<Movie>& movieVector)
    : movieVector(movieVector) {}

void DirectorSearch::searchAndPrint(const string& directorName) const {
    // Create a vector to store matching movies
    vector<Movie> matchingMovies;

    // Find movies directed by the specified director
    for (const auto& movie : movieVector) {
        if (movie.getDirector() == directorName) {
            matchingMovies.push_back(movie);
        }
    }

    // Check if there are matching movies
    if (matchingMovies.empty()) {
        cerr << "No movies found directed by the specified director." << endl;
        return;
    }

    // Shuffle the matching movies to get random order
    random_device rd;
    mt19937 g(rd());
    shuffle(matchingMovies.begin(), matchingMovies.end(), g);

    // Print at most 3 randomly chosen movies directed by the specified director
    int moviesToPrint = min(3, static_cast<int>(matchingMovies.size()));
    for (int i = 0; i < moviesToPrint; ++i) {
        const auto& movie = matchingMovies[i];
        cout << "Title: " << movie.getTitle() << ", Directors: " << movie.getDirector() << endl;
    }
}