#ifndef RATINGSORT_H
#define RATINGSORT_H
#include <iostream>
#include <vector>
using namespace std;

class Movie;

class RatingSort {
    public: 
        RatingSort(const vector<Movie>& ratedMovies);
        static bool compareByScore(const Movie &a, const Movie &b);
        void printRatingMovies() const;
    private:
        const vector<Movie>& movieVector;
};

#endif