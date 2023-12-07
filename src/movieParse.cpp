#include "../header/Movie.h"
#include "../header/movieParse.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

const std::vector<Movie>& MovieParse::getMovies() const {
    return movies;
}


vector<Movie> MovieParse::parse(const string& filename) {
    movies.clear();  

    //open the file
    ifstream file(filename);

    //error handling
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return movies;
    }

    //skip first line for column headers
    string header;
    getline(file, header);

    //parsing csv file
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        vector<string> tokens;

        //separate each column into tokens for each movie attribute
        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        //set each movie attribute
        if (tokens.size() == 7) {
            Movie movie(tokens[0], stoi(tokens[1]), tokens[2], tokens[3], tokens[4], tokens[5], stod(tokens[6]));
            movies.push_back(movie);
        } else {
            cerr << "Invalid number of columns in line: " << line << endl;
        }
    }

    file.close();
    return movies;
}

//destructor
MovieParse::~MovieParse() {
    movies.clear();
}
