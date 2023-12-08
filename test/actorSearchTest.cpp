#include "gtest/gtest.h"
#include "../header/actorSearch.h"



TEST(ActorTests, testValidActor) {
    std::string director = "Todd Phillips";
    DirectorSearch directorSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    directorSearch.searchAndPrint(director);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "Title: Joker, Directors: Todd Phillips\n");
}


