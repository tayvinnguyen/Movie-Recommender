#include <iostream>
#include "../header/RatingSort.h"
#include <vector>
using namespace std;

RatingSort::RatingSort(const vector<Movie>& ratedMovies) : movieVector(ratedMovies) {}

bool RatingSort::compareByScore(const Movie &a, const Movie &b) {
    return a.getTrendScore() > b.getTrendScore();
}

void RatingSort::printRatingMovies() const {
    vector<Movie> sortedMoviesByRating = movieVector;
    std::sort(sortedMoviesByRating.begin(), sortedMoviesByRating.end(), compareByScore);

    cout << "Top 10 Highest Rated Movies:" << endl;
    for(size_t i = 0; i < min(sortedMoviesByRating.size(), static_cast<size_t>(10)); i++) {
        cout << i + 1 << ". " << sortedMoviesByRating[i].getTitle() << endl;
    }
}