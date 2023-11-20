#include "../header/Movie.h"

#include <string>




Movie::Movie(std::string title, int year, std::string genre, std::string subGenre, std::string cast, std::string director, float rating){
    this->title = title;
    this->year = year;
    this->genre = genre;
    this->subGenre = subGenre;
    this->cast = cast;
    this->director = director;
    this->rating = rating;
}

void Movie::setTitle(const std::string& newTitle){
    this->title = newTitle;
}

void Movie::setYear(int newYear){
    this->year = newYear;
}

void Movie::setGenre(const std::string& newGenre){
    this->genre = newGenre;
}

void Movie::setSubGenre(const std::string& newSubGenre){
    this->subGenre = newSubGenre;
}

void Movie::setCast(const std::string& newCast){
    this->cast = newCast;
}

void Movie::setDirector(const std::string& newDirector){
    this->director = newDirector;
}








