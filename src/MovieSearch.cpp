#include "MovieSearch.h"
#include <iostream>
#include <algorithm>
#include <cctype> 


MovieSearch::MovieSearch() {
    // Default Constructor
}

void MovieSearch::addMovie(const std::string& name) {
    movies.push_back(name);
}

std::string toLowerCase(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), 
                   [](unsigned char c){ return std::tolower(c); });
    return lowerStr;
}

std::string MovieSearch::searchMovie(const std::string& name) const {
    std::string lowerName = toLowerCase(name);
    auto it = std::find_if(movies.begin(), movies.end(), [&lowerName](const std::string& movie) {
        return toLowerCase(movie) == lowerName;
    });
    if (it != movies.end()) {
        return *it;
    } else {
        return "Movie not found";
    }
}
void MovieSearch::displayAllMovies() const {
    for (const auto& movie : movies) {
        std::cout << movie << std::endl;
    }
}
