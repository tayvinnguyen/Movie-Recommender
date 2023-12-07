#ifndef YEAR_SEARCH_H
#define YEAR_SEARCH_H

#include "../header/movieParse.h"
#include "../header/Movie.h"
#include <vector>
#include <string>

class YearSearch {
private:
    const std::vector<Movie>& movieVector;

public:
    YearSearch(const std::vector<Movie>& movieVector);

    void searchAndPrint(const std::string& decade) const;
};

#endif  // YEAR_SEARCH_H