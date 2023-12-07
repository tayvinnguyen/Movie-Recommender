#include "../header/actorSearch.h"

#include <iostream>
#include <algorithm>
#include <random>
#include <sstream>

using namespace std;

ActorSearch::ActorSearch(const vector<Movie>& movieVector)
    : movieVector(movieVector) {}

void ActorSearch::searchAndPrint(const string& actorName) const {
    // create a vector to store matching movies
    vector<Movie> matchingMovies;

    // search through the movie vector to find movies with the desired actor
    for (const auto& movie : movieVector) {
        // split the cast string into actors
        stringstream ss(movie.getCast());
        string token;
        // search for the actor and break if found
        while (getline(ss, token, ';')) {
            if (token == actorName) {
                matchingMovies.push_back(movie);
                break;
            }
        }
    }

    // check if there are matching movies
    if (matchingMovies.empty()) {
        cerr << "No movies found with the specified actor." << endl;
        return;
    }

    // randomize the matching movies vector 
    random_device rd;
    mt19937 g(rd());
    shuffle(matchingMovies.begin(), matchingMovies.end(), g);

    // print at most 3 movies with the actor in them
    int moviesToPrint = min(3, static_cast<int>(matchingMovies.size()));
    for (int i = 0; i < moviesToPrint; ++i) {
        const auto& movie = matchingMovies[i];
        cout << "Title: " << movie.getTitle() << ", Cast: " << movie.getCast() << endl;
    }
}