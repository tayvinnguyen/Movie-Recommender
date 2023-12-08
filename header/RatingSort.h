#include <iostream>
#include <vector>

class Movie;

class RatingSort {
    public: 
        RatingSort(const vector<Movie>& ratedMovies);
        bool compareByScore(const Movie &a, const Movie &b);
        void printRatingMovies() const;
    private:
        const vector<Movie>& movieVector;
};