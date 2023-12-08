CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(final_project)


ADD_SUBDIRECTORY(googletest)



ADD_EXECUTABLE(test

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
)

TARGET_LINK_LIBRARIES(test gtest gtest_main)