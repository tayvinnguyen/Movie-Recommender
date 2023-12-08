#include "../header/topTrendMovies.h"
#include <algorithm>
#include <iostream>

using namespace std;

TopTrendMovies::TopTrendMovies(const vector<Movie>& movies) : movieVector(movies) {}

// function to compare two movies' trend scores
bool TopTrendMovies::compareByTrendScore(const Movie& movie1, const Movie& movie2) {
    return movie1.getTrendScore() > movie2.getTrendScore();
}

void TopTrendMovies::printTopTrendMovies() const {
    // sort movie vector based on trend score
    vector<Movie> sortedMovies = movieVector;
    sort(sortedMovies.begin(), sortedMovies.end(), compareByTrendScore);

    // print top ten highest scored movies
    cout << "Top Trending Movies:" << endl;
    for (size_t i = 0; i < min(sortedMovies.size(), static_cast<size_t>(10)); ++i) {
        cout << i + 1 << ". " << sortedMovies[i].getTitle() << " (Trend Score: "
             << sortedMovies[i].getTrendScore() << ")" << endl;
    }
}
