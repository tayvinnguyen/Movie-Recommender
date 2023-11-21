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

void Movie::setRating(float newRating){
    this->rating = newRating;
}




std::string Movie::getTitle() const{
    return this->title;
}

int Movie::getYear(){
    return this->year;
}

std::string Movie::getGenre() const{
    return this->genre;
}

std::string Movie::getSubGenre() const{
    return this->subGenre;
}

std::string Movie::getCast() const{
    return this->cast;
}

std::string Movie::getDirector() const{
    return this->director;
}

float Movie::getRating() const{
    return this->rating;
}