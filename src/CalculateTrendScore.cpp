#include "../header/CalculateTrendScore.h"
#include "../header/Movie.h"
#include <vector>
using namespace std;

int CalculateTrendScore::calcYearScore(int year) {
    if (year == 2023) { return 10; }
    else if (year == 2022) { return 8; }
    else if (year == 2021) { return 6; }
    else if (year == 2020) { return 4; }
    else if (year < 2020) { return 2; }
    else { return 0; }
}

int CalculateTrendScore::calcRatingScore(double rating) {
    if (rating >= 8.7 && rating < 10) { return 5; }
    else if (rating < 8.7 && rating >= 7.5) { return 4; }
    else if (rating < 7.5 && rating >= 6.5) { return 3; }
    else if (rating < 6.5 && rating >= 5.3) { return 2; }
    else if (rating < 5.3) { return 1; }
    else { return 0; }
}

int CalculateTrendScore::calcTrendScore(int currYear, double currRating) {
    return calcYearScore(currYear) * calcRatingScore(currRating);
}
