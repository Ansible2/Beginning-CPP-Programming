#include "Movie.h"

Movie::Movie(string& nameOfMovie) 
	: name{ nameOfMovie }, rating{ movieRating::unrated }, numberOfTimesWatched{ 0 } {
}

Movie::Movie(string& nameOfMovie, movieRating ratingofMovie)
	: name{ nameOfMovie }, rating{ ratingofMovie }, numberOfTimesWatched{ 0 } {
}

Movie::Movie(string& nameOfMovie, movieRating ratingofMovie, int timesWatched)
	: name{ nameOfMovie }, rating{ ratingofMovie }, numberOfTimesWatched{ timesWatched } {
}



void Movie::set_movie_name(string&& nameOfMovie) {
	name = nameOfMovie;
}
string& Movie::get_movie_name() {
	return name;
}


void Movie::set_movie_rating(movieRating ratingOfMovie) {
	rating = ratingOfMovie;
}
movieRating Movie::get_movie_rating() {
	return rating;
}

void Movie::set_times_watched(int numberOfTimes) {
	numberOfTimesWatched = numberOfTimes;
}
int Movie::get_times_watched() {
	return numberOfTimesWatched;
}