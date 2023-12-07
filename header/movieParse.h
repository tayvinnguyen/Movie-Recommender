#ifndef MOVIEPARSE_H
#define MOVIEPARSE_H

#include <vector>
#include <string>

class MovieParse {
private:
    std::vector<Movie> movies;

public:
    std::vector<Movie> parse(const std::string& filename);

    ~MovieParse();
};

#endif  //MOVIEPARSE_H