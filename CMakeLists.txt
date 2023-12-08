CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(final_project)


ADD_SUBDIRECTORY(googletest)



ADD_EXECUTABLE(test
    src/
)

TARGET_LINK_LIBRARIES(test gtest gtest_main)