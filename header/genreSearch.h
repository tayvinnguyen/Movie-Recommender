#ifndef GENRESEARCH_H
#define GENRESEARCH_H

#include "../header/movieParse.h"
#include "../header/Movie.h"
#include <vector>
#include <string>

using namespace std;

class GenreSearch {
private:
    const vector<Movie>& movieVector;

public:
    GenreSearch(const vector<Movie>& movieVector);

    void searchAndPrint(const string& genreOrSubgenre) const;
};

#endif //GENRESEARCH_H