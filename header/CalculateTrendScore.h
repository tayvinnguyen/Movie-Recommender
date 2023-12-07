#ifndef CALCULATETRENDSCORE_HPP
#define CALCULATETRENDSCORE_HPP

class Movie;

class CalculateTrendScore {
    public:
        int calcYearScore(int year);
        int calcRatingScore(double rating);
        int calcTrendScore(int currYear, double currRating);
};

#endif