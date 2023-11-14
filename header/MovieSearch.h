#ifndef MOVIESEARCH_H
#define MOVIESEARCH_H



#include <string>
#include <vector>


//Movie Search Header File



class MovieSearch{
private:
    std::vector<std::string> movies;


public: 
    MovieSearch();
    void addMovie(const std::string& name);                     //add movie method
    void displayAllMovies() const;                              //display movie method
    std::string searchMovie(const std::string& name) const;     //search movie method
    std::string toLowerCase(const std::string& str);







};













#endif