#include "gtest/gtest.h"
#include "../header/Movie.h"



TEST(MovieTests, testConstrutor){
    Movieobject object("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    EXPECT_EQ(object.getRating(), 8.3);

}


TEST(MovieTests, setMovieRating){
    double newRating = 11.0;
    Movieobject object("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    object.setRating(newRating);
    EXPECT_EQ(object.getRating(), 11.0);

}


TEST(MovieTests, setMovieYear){
    double newYear = 2010;
    Movieobject object("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    object.setYear(newYear);
    EXPECT_EQ(object.getYear(), 2010);

}


TEST(MovieTests, setMovieGenre){
    std::string newGenre = "ANIMATION";
    Movieobject object("Up", 2009, "ANIMATION", "ADVENTURE", "Edward", "Jordan", 8.3, 10);
    object.setGenre(newGenre);
    EXPECT_EQ(object.getGenre(), "ANIMATION");

}
