#include "../header/movieRecSystem.h"
#include "loginDatabase.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

void movieRecSystem::accountValidation() {
    int userChoice = 0;

    loginDatabase loginDBO;
    while (userChoice != 3){ 
        std::cout << "\nWelcome to the Movie Recommendation System !\n\n";
        std::cout << "1. Create an account .\n";
        std::cout << "2. Log into an account .\n";
        std::cout << "3. Exit .\n";

        std::cout << "Enter a number: ";
        std::cin >> userChoice;

        inputValidation();

        if (userChoice == 1)
            continue;

        else if (userChoice == 2)
            continue;

        else if (userChoice == 3)
            return;

        else
            std::cout << "Please enter a valid option .\n\n";
    }
}

void movieRecSystem::inputValidation() {
    
}