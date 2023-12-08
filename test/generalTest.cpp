#include "gtest/gtest.h"
#include "../header/Movie.h"
#include "../header/movieParse.h"
#include "../header/genreSearch.h"
#include "../header/yearSearch.h"
#include "../header/UserAccount.h"
#include "../header/topTrendMovies.h"
#include <sstream>

//Movie database for testing
MovieParse csvParser;
vector<Movie> movies = csvParser.parse("movieDatabase.csv");

//Tests for genreSearch
TEST(GenreTests, testValidGenre) {
    string genre = "MUSIC";
    GenreSearch genreSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    genreSearch.searchAndPrint(genre);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "Title: Whiplash, Genre: DRAMA, Subgenre: MUSIC\n");
}

TEST(GenreTests, testInvalidGenre) {
    string genre = "InvalidName";
    GenreSearch genreSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    genreSearch.searchAndPrint(genre);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "");
}

//Tests for yearSearch
TEST(YearTests, testValidYear) {
    string year = "1920";
    YearSearch yearSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    yearSearch.searchAndPrint(year);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "Title: The Kid, Year: 1921\n");
}

TEST(YearTests, testInvalidYear) {
    string year = "1792";
    YearSearch yearSearch(movies);
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    yearSearch.searchAndPrint(year);
    std::cout.rdbuf(oldCout);
    std::string output = buffer.str();
    EXPECT_EQ(output, "");
}


//tests for movieParse
TEST(ParseTests, testValidFile) {
    string fileName = "movieDatabase.csv";
    MovieParse testParser;
    vector<Movie> movies = testParser.parse(fileName);
    EXPECT_EQ(movies[0].getTitle(), "Five Nights at Freddy's");
}

TEST(ParseTests, testInvalidFile) {
    string fileName = "invalidFileName";
    MovieParse testParser2;
    vector<Movie> movies = testParser2.parse(fileName);
    EXPECT_TRUE(movies.empty());
}

