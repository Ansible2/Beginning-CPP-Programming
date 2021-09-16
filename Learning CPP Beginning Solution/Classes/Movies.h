#pragma once

#include <unordered_map>

#include "Movie.h"


class Movies
{
private:
	std::unordered_map<string,Movie*>* collection;

public:
	Movies();
	
	bool add_movie(string&& nameOfMovie);
	bool add_movie(string&& nameOfMovie, int numberOfTimesWatched);
	bool add_movie(string&& nameOfMovie, int numberOfTimesWatched, movieRating ratingOfMovie);

	void erase(string&& nameOfMovie);
	void erase(string& nameOfMovie);
	bool contains(string& nameOfMovie);
	void print_movies();
	void adjust_watch(string title, int incriment);
	
	Movies(const Movies& source);
	Movies(Movies&& source) noexcept;

	~Movies();
};

