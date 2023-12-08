#include "gtest/gtest.h"
#include "../header/actorSearch.h"


//Movie database for testing
MovieParse csvParser;
std::vector<Movie> movies = csvParser.parse("movieDatabase.csv");


TEST(ActorTests, testEmptyActor) {
    std::string actor = "";
    ActorSearch actorSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    actorSearch.searchAndPrint(actor);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "");

}

TEST(ActorTests, testValidActor) {
    std::string actor = "Ben Burtt";
    ActorSearch actorSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    actorSearch.searchAndPrint(actor);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "Title: WALL-E, Cast: Ben Burtt;Elissa Knight;Jeff Garlin\n");
}


