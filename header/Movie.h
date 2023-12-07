#ifndef MOVIE_H
#define MOVIE_H


#include <string>

class Movie{
private:
    std::string title;
    std::string genre;
    std::string subGenre;
    std::string cast;
    std::string director;
    double rating;
    int year;
    int trendScore;


public:
    Movie(std::string title, int year, std::string genre, std::string subGenre, std::string cast, std::string director, double rating, int trendScore);

    //Setters
    void setTitle(const std::string& newTitle);
    void setYear(int newYear);
    void setGenre(const std::string& newGenre);
    void setSubGenre(const std::string& newSubGenre);
    void setCast(const std::string& newCast);
    void setDirector(const std::string& newDirector);
    void setTrendScore(int trendScore);
    void setRating(double newRating);


    //Getters
    std::string getTitle() const;
    int getYear() const;
    std::string getGenre() const;
    std::string getSubGenre() const;
    std::string getCast() const;
    std::string getDirector() const;
    int getTrendScore() const;
    double getRating() const;




};





#endif
