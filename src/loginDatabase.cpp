#include "../header/loginDatabase.h"
#include "../header/movieParse.h"
#include "../header/UserAccount.h"
#include <iostream>
#include <fstream>
#include <string>

void loginDatabase::loginExistingUser() {
    std::string existingUsername;
    std::string existingPassword;

    std::cout << "Enter a Username: ";
    std::cin >> existingUsername;
    std::cout << "Enter a Password: ";
    std::cin >> existingPassword;

    std::ifstream infile("userProfiles.txt");

    // still needs a not found condition
    if (infile.is_open()) {
        int accountFlag = 0;
        while(!infile.eof()) {
            std::string fileUsername, filePassword;
            infile >> fileUsername >> filePassword;
            if (fileUsername == existingUsername && filePassword == existingPassword) {
                std::cout << "\nAccount found !\n";
                accountFlag = 1;
                // go into user account
                MovieParse csvParser;
                vector<Movie> movies = csvParser.parse("movieDatabase.csv");
                UserAccount currentUser(movies);
                currentUser.startUserSession();
            }
        }
        if (accountFlag == 0) {
                std::cout << "\nAccount not found .\n";
        }
    } else {
        std::cout << "File failed to open ." << std::endl;
        return;
    }
}

void loginDatabase::createUserAccount() {
    std::string newUsername;
    std::string newPassword;

    // user input username

    std::cout << "Enter a new Username: ";
    std::cin >> newUsername;

    // writing account to file
    std::ofstream outfile("userProfiles.txt", std::ios::app);

    // checking for repeat usernames
    std::ifstream infile("userProfiles.txt");

    if (infile.is_open()) {
        while(!infile.eof()) {
            std::string fileUsername, filePassword;
            infile >> fileUsername >> filePassword;
            if (fileUsername == newUsername) {
                std::cout << "Username already exists .\n\n";
                std::cout << "Enter a new Username: ";
                std::cin >> newUsername;
                infile.clear();
                infile.seekg(0, std::ios::beg);
            }
        }
    } else {
        std::cout << "File failed to open ." << std::endl;
        return;
    }

    // user input password

    std::cout << "Enter a new Password: ";
    std::cin >> newPassword;

    if (outfile.is_open()) {
        outfile << newUsername << " " << newPassword << std::endl;
        outfile.close();
        std::cout << "\nAccount successfully created !\n";
    } else {
        std::cout << "System failed to write to file ." << std::endl;
        return;
    }
}