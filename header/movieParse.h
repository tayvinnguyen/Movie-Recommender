#ifndef MOVIEPARSE_H
#define MOVIEPARSE_H

#include <vector>
#include <string>

class MovieParse {
public:
    std::vector<Movie> parse(const std::string& filename);

    ~MovieParse();

private:
    std::vector<Movie> movies;
};

#endif  //MOVIEPARSE_H