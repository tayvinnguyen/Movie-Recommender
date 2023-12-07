#ifndef ACTOR_SEARCH_H
#define ACTOR_SEARCH_H

#include "../header/movieParse.h"
#include "../header/Movie.h"
#include <vector>
#include <string>

class ActorSearch {
public:
    ActorSearch(const std::vector<Movie>& movieVector);

    void searchAndPrint(const std::string& actorName) const;

private:
    const std::vector<Movie>& movieVector;
};

#endif  // ACTOR_SEARCH_H