#include "../header/Movie.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>



using namespace std;

class CSVParser {
public:
    vector<Movie> parse(const string& filename) {
        //initialize vector
        vector<Movie> movies;
        //open csv file
        ifstream file(filename);

        //error handling if open
        if (!file.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return movies;
        }

        //skip the first line
        string header;
        getline(file, header);

        //parse csv file line by line
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string token;
            vector<string> tokens;

            // split the line into tokens
            while (getline(ss, token, ',')) {
                tokens.push_back(token);
            }

            // add movie objects to movie vector 
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
};

int main() {
    CSVParser csvParser;
    vector<Movie> movies = csvParser.parse("movieDatabase.csv");

    for (const auto& movie : movies) {
        cout << movie.getTitle() << endl;
    }

    return 0;
}