#ifndef CALCULATETRENDSCORE_HPP
#define CALCULATETRENDSCORE_HPP

class Movie;

class CalculateTrendScore {
    public:
        int calcYearScore(Movie movie);
        int calcRatingScore(Movie movie);
        int calcTrendScore(Movie movie);
};

#endif