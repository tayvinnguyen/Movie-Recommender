CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(final_project)


ADD_SUBDIRECTORY(googletest)



ADD_EXECUTABLE(movieRecTest

    src/actorSearch.cpp
    src/CalculateTrendScore.cpp
    src/directorSearch.cpp
    src/genreSearch.cpp
    src/loginDatabase.cpp
    src/main.cpp
    src/Movie.cpp
    src/movieParse.cpp
    src/movieRecSystem.cpp
    src/topTrendMovies.cpp
    src/UserAccount.cpp
    src/yearSearch.cpp
    src/RatingSort.cpp
)

ADD_EXECUTABLE(unitTest

    test/TayvinN_tests.cpp
    src/genreSearch.cpp
    src/Movie.cpp
    src/movieParse.cpp
    src/CalculateTrendScore.cpp
    src/yearSearch.cpp
    src/topTrendMovies.cpp
)

TARGET_LINK_LIBRARIES(movieRecTest gtest gtest_main)
TARGET_LINK_LIBRARIES(unitTest gtest gtest_main)

