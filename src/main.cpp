#include "../header/UserAccount.h"

using namespace std;

int main() {
    MovieParse csvParser;
    vector<Movie> movies = csvParser.parse("movieDatabase.csv");

    UserAccount userAccount(movies);
    userAccount.startUserSession();

    return 0;
}