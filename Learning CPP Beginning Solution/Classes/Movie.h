#pragma once


#include <string>


using std::string;

enum class movieRating {
	unrated, G, PG, PG13, R
};


class Movie
{
private:
	string name;
	movieRating rating;
	int numberOfTimesWatched;

public:
	Movie(string& nameOfMovie);
	Movie(string& nameOfMovie, movieRating ratingofMovie);
	Movie(string& nameOfMovie, movieRating ratingofMovie, int numberOfTimesWatched);

	void set_movie_name(string&& nameOfMovie);
	string& get_movie_name();

	void set_movie_rating(movieRating ratingOfMovie);
	movieRating get_movie_rating();

	void set_times_watched(int numberOfTimes);
	int get_times_watched();
};