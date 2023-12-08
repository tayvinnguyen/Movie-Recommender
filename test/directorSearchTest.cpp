#include <gtest/gtest.h>
#include "../header/directorSearch.h"
#include "../header/Movie.h"  
#include "../header/movieParse.h"    

#include <vector>
#include <string>



//Movie database for testing
MovieParse csvParser;
std::vector<Movie> movies = csvParser.parse("movieDatabase.csv");



TEST(DirectorTests, testEmptyActor) {
    std::string director = "";
    DirectorSearch directorSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    directorSearch.searchAndPrint(director);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "");
}

TEST(DirectorTests, testValidActor) {
    std::string director = "Todd Phillips";
    DirectorSearch directorSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    directorSearch.searchAndPrint(director);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "Title: Joker, Directors: Todd Phillips\n");
}