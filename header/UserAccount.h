#ifndef USER_ACCOUNT_H
#define USER_ACCOUNT_H

#include "../header/Movie.h"
#include "../header/movieParse.h"
#include "../header/yearSearch.h"
#include "../header/genreSearch.h"
#include "../header/actorSearch.h"
#include "../header/directorSearch.h"
#include "../header/genre.hpp"
#include <iostream>

class UserAccount {
private:
    const std::vector<Movie>& movieVector;
    
    void displayMenu() const;
    char getUserChoice() const;
    void executeUserChoice(char choice);

public:
    UserAccount(const std::vector<Movie>& movieVector);

    void startUserSession();
};

#endif  // USER_ACCOUNT_H
