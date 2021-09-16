#include "Movie.h"

Movie::Movie(string& nameOfMovie) 
	: name{ nameOfMovie }, rating{ movieRating::unrated }, numberOfTimesWatched{ 0 } {
}

Movie::Movie(string& nameOfMovie, movieRating ratingofMovie)
	: name{ nameOfMovie }, rating{ ratingofMovie }, numberOfTimesWatched{ 0 } {
}

Movie::Movie(string& nameOfMovie, int timesWatched)
	: name{ nameOfMovie }, rating{ movieRating::unrated }, numberOfTimesWatched{ timesWatched } {
}

Movie::Movie(string& nameOfMovie, int timesWatched, movieRating ratingofMovie)
	: name{ nameOfMovie }, numberOfTimesWatched{ timesWatched }, rating{ ratingofMovie } {
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
	if (numberOfTimes < 0)
	{
		numberOfTimes = 0;
	}
		
	numberOfTimesWatched = numberOfTimes;
}
int Movie::get_times_watched() {
	return numberOfTimesWatched;
}


