#include "gtest/gtest.h"
#include "../header/actorSearch.h"



TEST(ActorSearchTest, FindCorrectMoviesForActor) {
    vector<Movie> expectedMovies = { movieVector[0], movieVector[2] }; // Expected movies for Actor1
    vector<Movie> foundMovies = actorSearch->findMoviesByActor("Actor1");

    ASSERT_EQ(foundMovies.size(), expectedMovies.size());
    for (size_t i = 0; i < expectedMovies.size(); i++) {
        EXPECT_EQ(foundMovies[i].getTitle(), expectedMovies[i].getTitle());
    }
}



