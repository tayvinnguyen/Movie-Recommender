#include <iostream>
#include "../header/printTrendingMovies.h"
#include "../header/Movie.h"
#include <vector>
#include <string>
using namespace std;

void printTrendingMovies::printTrendingMovieList(vector<Movie> v) {
    for (auto movie = v.begin(); movie != v.end(); movie++) {
        cout << movie << endl;
    }
}