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


ADD_EXECUTABLE(actorSearchTest
    test/actorSearchTest.cpp
    src/actorSearch.cpp
    src/Movie.cpp
    src/movieParse.cpp
    src/CalculateTrendScore.cpp
)

ADD_EXECUTABLE(directorSearchTest
    test/directorSearchTest.cpp
    src/directorSearch.cpp
    src/Movie.cpp
    src/movieParse.cpp
    src/CalculateTrendScore.cpp
    
)


ADD_EXECUTABLE(MovieTest
    test/MovieTest.cpp
    src/Movie.cpp
   
  
    
)

TARGET_LINK_LIBRARIES(movieRecTest gtest gtest_main)
TARGET_LINK_LIBRARIES(actorSearchTest gtest gtest_main)
TARGET_LINK_LIBRARIES(directorSearchTest gtest gtest_main)
TARGET_LINK_LIBRARIES(MovieTest gtest gtest_main)