#ifndef MOVIEPARSE_H
#define MOVIEPARSE_H

#include "../header/Movie.h"
#include <vector>
#include <string>

class MovieParse {
private:
    std::vector<Movie> movies;

public:
    std::vector<Movie> parse(const std::string& filename);
    const std::vector<Movie>& getMovies() const; 

    ~MovieParse();
};

#endif  //MOVIEPARSE_H