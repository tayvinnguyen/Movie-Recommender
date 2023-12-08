#include "../header/UserAccount.h"
#include "../header/topTrendMovies.h"
#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

UserAccount::UserAccount(const vector<Movie>& movieVector)
    : movieVector(movieVector) {}

void UserAccount::startUserSession() {
    char userChoice;

    //keeps asking for user input until they log out
    do {
        displayMenu();
        userChoice = getUserChoice();
        executeUserChoice(userChoice);
    } while (userChoice != '7');
}

//displays all the choices for user
void UserAccount::displayMenu() const {
    cout << "User Menu:" << endl;
    cout << "1. List Trending Movies" << endl;
    cout << "2. Search by Release Date" << endl;
    cout << "3. Search by Director" << endl;
    cout << "4. Search by Actor" << endl;
    cout << "5. Search by Genre" << endl;
    cout << "6. View Top Rated Movies" << endl;
    cout << "7. Logout" << endl;
    cout << "Choose an option (1-7): ";
}

//takes in the user's choice
char UserAccount::getUserChoice() const {
    char choice;
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  //clear the input buffer
    return choice;
}

void UserAccount::executeUserChoice(char choice) {
    switch (choice) {
        case '1':
            {
                TopTrendMovies topTrendMovies(movieVector);
                topTrendMovies.printTopTrendMovies();
            }
            break;
        case '2':
            {
                // Search by Release Date
                string decade;
                do {
                    cout << "Enter the decade (1920-2020): ";
                    cin >> decade;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    if (decade.size() != 4 || stoi(decade) < 1920 || stoi(decade) > 2020) {
                        cerr << "Invalid input. Please enter a valid decade." << endl;
                    }
                } while (decade.size() != 4 || stoi(decade) < 1920 || stoi(decade) > 2020);

                YearSearch yearSearch(movieVector);
                yearSearch.searchAndPrint(decade);
            }
            break;
        case '3':
            {
                // Search by Director
                string directorName;
                do {
                    cout << "Enter the director's name: ";
                    getline(cin, directorName);

                    if (directorName.empty()) {
                        cerr << "Invalid input. Director's name cannot be empty." << endl;
                    }
                } while (directorName.empty());

                DirectorSearch directorSearch(movieVector);
                directorSearch.searchAndPrint(directorName);
            }
            break;
        case '4':
            {
                // Search by Actor
                string actorName;
                do {
                    cout << "Enter the actor's name: ";
                    getline(cin, actorName);

                    if (actorName.empty()) {
                        cerr << "Invalid input. Actor's name cannot be empty." << endl;
                    }
                } while (actorName.empty());

                ActorSearch actorSearch(movieVector);
                actorSearch.searchAndPrint(actorName);
            }
            break;
        case '5':
            {
                // Search by Genre
                int genreNumber;
                cout << "Choose a genre:" << endl;
                cout << "1. Drama" << endl;
                cout << "2. Comedy" << endl;
                cout << "3. Action" << endl;
                cout << "4. Romance" << endl;
                cout << "5. Sci-Fi" << endl;
                cout << "6. Mystery" << endl;
                cout << "7. Horror" << endl;
                cout << "8. Adventure" << endl;
                cout << "9. Animation" << endl;
                cout << "10. History" << endl;
                cout << "11. Music" << endl;
                cout << "12. Crime" << endl;

                cout << "Enter the genre number (1-12): ";

                while (true) {
                    // Check if the input is a valid integer
                    if (cin >> genreNumber) {
                        // Clear the input buffer
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        // Ensure genreNumber is within the valid range
                        if (genreNumber >= 1 && genreNumber <= 12) {
                            Genre genre = static_cast<Genre>(genreNumber - 1);

                            // Convert the genre to a string directly within the search case
                            string genreString;
                            switch (genre) {
                                case Genre::DRAMA: genreString = "DRAMA"; break;
                                case Genre::COMEDY: genreString = "COMEDY"; break;
                                case Genre::ACTION: genreString = "ACTION"; break;
                                case Genre::ROMANCE: genreString = "ROMANCE"; break;
                                case Genre::SCIFI: genreString = "SCIFI"; break;
                                case Genre::MYSTERY: genreString = "MYSTERY"; break;
                                case Genre::HORROR: genreString = "HORROR"; break;
                                case Genre::ADVENTURE: genreString = "ADVENTURE"; break;
                                case Genre::ANIMATION: genreString = "ANIMATION"; break;
                                case Genre::HISTORY: genreString = "HISTORY"; break;
                                case Genre::MUSIC: genreString = "MUSIC"; break;
                                case Genre::CRIME: genreString = "CRIME"; break;
                                default: genreString = "UNKNOWN";
                            }

                            GenreSearch genreSearch(movieVector);
                            genreSearch.searchAndPrint(genreString);
                            break;  // Exit the loop if everything is successful
                        } else {
                            cerr << "Invalid input. Please enter a valid genre number (1-12): ";
                        }
                    } else {
                        // Clear the error flag and ignore invalid input
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cerr << "Invalid input. Please enter a valid genre number (1-12): ";
                    }
                }
            }
            break;
        case '6':
            {
                RatingSort topRatedMovies(movieVector);
                topRatedMovies.printRatingMovies();
            }
            break;
        case '7':
            cout << "Logging out..." << endl;
            break;
        default:
            cerr << "Invalid choice. Please choose again." << endl;
    }
}