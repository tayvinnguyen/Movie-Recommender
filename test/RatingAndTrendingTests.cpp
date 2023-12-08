#include <iostream>
#include "../header/Movie.h"
#include "../header/CalculateTrendScore.h"
#include "../header/topTrendMovies.h"
#include "../header/RatingSort.h"
#include "gtest/gtest.h"
using namespace std;


TEST(CalcTrendScoreTests, testScore) {
    CalculateTrendScore c;
    EXPECT_EQ (c.calcTrendScore(2023, 8.7), 50);
}

TEST(CalcTrendScoreTest, testScore2) {
    CalculateTrendScore c;
    EXPECT_EQ (c.calcTrendScore(2015, 7.5), 8);
}

TEST(RatingSortTests, testCompareByScore) {
    Movie m("Spider-Man", 2023, "ANIMATION", "ACTION", "Shameik Moore", "Joaquim Dos Santos", 8.7, 40);
    Movie m2("Transformers", 2015, "ACTION", "ADVENTURE", "Michael Bay", "Michael Bay", 7.5, 8);
    vector<Movie> movies;
    movies.push_back(m);
    movies.push_back(m2);
    RatingSort R(movies);
    bool condition = R.compareByScore(m, m2);
    ASSERT_TRUE(condition);
}
