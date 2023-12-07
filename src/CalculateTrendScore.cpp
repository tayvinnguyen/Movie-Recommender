#include "../header/CalculateTrendScore.h"
#include "../header/Movie.h"
#include <vector>
using namespace std;

int CalculateTrendScore::calcYearScore(Movie movie) {
    if (movie.getYear() == 2023) { return 10; }
    else if (movie.getYear() == 2022) { return 8; }
    else if (movie.getYear() == 2021) { return 6; }
    else if (movie.getYear() == 2020) { return 4; }
    else if (movie.getYear() < 2020) { return 2; }
    else { return 0; }
}

int CalculateTrendScore::calcRatingScore(Movie movie) {
    if (movie.getRating() >= 8.7 && movie.getRating() < 10) { return 5; }
    else if (movie.getRating() < 8.7 && movie.getRating() >= 7.5) { return 4; }
    else if (movie.getRating() < 7.5 && movie.getRating() >= 6.5) { return 3; }
    else if (movie.getRating() < 6.5 && movie.getRating() >= 5.3) { return 2; }
    else if (movie.getRating() < 5.3) { return 1; }
    else { return 0; }
}

int CalculateTrendScore::calcTrendScore(Movie movie) {
    return calcYearScore(movie) * calcRatingScore(movie);
}
