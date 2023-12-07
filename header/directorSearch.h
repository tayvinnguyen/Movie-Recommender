#ifndef DIRECTOR_SEARCH_H
#define DIRECTOR_SEARCH_H

#include "../header/movieParse.h"
#include "../header/Movie.h"
#include <vector>
#include <string>

class DirectorSearch {
public:
    DirectorSearch(const std::vector<Movie>& movieVector);

    void searchAndPrint(const std::string& directorName) const;

private:
    const std::vector<Movie>& movieVector;
};

#endif  // DIRECTOR_SEARCH_H