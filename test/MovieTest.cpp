#include "gtest/gtest.h"
#include "../header/Movie.h"



TEST(MovieTests, testConstrutor){
    Movie movie("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    EXPECT_EQ(movie.getRating(), 8.3);

}


TEST(MovieTests, setMovieRating){
    double newRating = 11.0;
    Movie movie("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    movie.setRating(newRating);
    EXPECT_EQ(movie.getRating(), 11.0);

}


TEST(MovieTests, setMovieYear){
    double newYear = 2010;
    Movie movie("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    movie.setYear(newYear);
    EXPECT_EQ(movie.getYear(), 2010);

}


TEST(MovieTests, setMovieGenre){
    std::string newGenre = "ANIMATION";
    Movie movie("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    movie.setGenre(newGenre);
    EXPECT_EQ(movie.getGenre(), "ANIMATION");

}


