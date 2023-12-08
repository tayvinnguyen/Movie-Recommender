#ifndef TOPTRENDMOVIES_H
#define TOPTRENDMOVIES_H

#include <vector>
#include "Movie.h"

class TopTrendMovies {
private:
    static bool compareByTrendScore(const Movie& movie1, const Movie& movie2);

    std::vector<Movie> movieVector;

public:
    TopTrendMovies(const std::vector<Movie>& movies);

    void printTopTrendMovies() const;
};

#endif // TOPTRENDMOVIES_H 
