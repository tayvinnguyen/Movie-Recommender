#include <iostream>
#include "../header/trendingMovies.h"
#include "../header/Movie.h"
#include <string>
#include <vector>
using namespace std;

TrendingMovies::~TrendingMovies() {
    delete[] trendingMovieList;
}

void TrendingMovies::addTrendingMovie(Movie m) {
    trendingMovieList.push_back(m);
}