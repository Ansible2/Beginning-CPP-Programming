#include "Movies.h"
#include <iostream>

using std::cout;
using std::endl;


Movies::Movies() 
	: collection{ new std::unordered_map<string,Movie*> } {
}

Movies::Movies(const Movies& source) 
	: collection{ source.collection } {
}

Movies::Movies(Movies&& source) noexcept
	: collection{ source.collection } {

	source.collection = nullptr;
}

Movies::~Movies() {
	if (!collection->empty()) {
		for (const auto& key_value : *collection) {
			delete key_value.second;
		}
	}
		
	delete collection;
}


bool Movies::add_movie(string&& nameOfMovie) {
	if (this->contains(nameOfMovie)) {
		cout << "The movie collection already contains " + nameOfMovie << endl;
		return false;
	}
	else {
		cout << "Created and added the movie " + nameOfMovie + " to the collection" << endl;
		Movie* createdMovie = new Movie{ nameOfMovie };
		return collection->emplace(nameOfMovie, createdMovie).second;
	}
}
bool Movies::add_movie(string&& nameOfMovie, int numberOfTimesWatched) {
	if (this->contains(nameOfMovie)) {
		cout << "The movie collection already contains " + nameOfMovie << endl;
		return false;
	}
	else {
		cout << "Created and added the movie " + nameOfMovie + " to the collection" << endl;
		Movie* createdMovie = new Movie{ nameOfMovie,numberOfTimesWatched };
		return collection->emplace(nameOfMovie, createdMovie).second;
	}
}
bool Movies::add_movie(string&& nameOfMovie, int numberOfTimesWatched, movieRating ratingOfMovie) {
	if (this->contains(nameOfMovie)) {
		cout << "The movie collection already contains " + nameOfMovie << endl;
		return false;
	}
	else {
		cout << "Created and added the movie " + nameOfMovie + " to the collection" << endl;
		Movie* createdMovie = new Movie{ nameOfMovie,numberOfTimesWatched,ratingOfMovie };
		return collection->emplace(nameOfMovie, createdMovie).second;
	}
}


void Movies::adjust_watch(string title,int incriment) {
	if (this->contains(title)) {
		Movie* movie{ collection->at(title) };
		int timesWatched{ movie->get_times_watched() };
		timesWatched += incriment;
		movie->set_times_watched(timesWatched);

		timesWatched = movie->get_times_watched();
		cout << "Set number of times watched movie: " + title + " to: " + char(timesWatched) << endl;
	}
	else {
		cout << title + " was not found inside this collection" << endl;
	}
}


void Movies::erase(string&& nameOfMovie) {
	cout << "Removed " + nameOfMovie + " from the collection" << endl;
	collection->erase(nameOfMovie);
}
void Movies::erase(string& nameOfMovie) {
	cout << "Removed " + nameOfMovie + " from the collection" << endl;
	collection->erase(nameOfMovie);
}

bool Movies::contains(string& nameOfMovie) {
	return collection->count(nameOfMovie);
}

string enum_to_string(movieRating rating);

void Movies::print_movies() {
	cout << endl;
	cout << "==============================" << endl;

	if (collection->empty()) {
		cout << "Movie List is empty" << endl;
	}
	else {
		cout << "Movie List:" << endl;

		for (const auto& key_value : *collection) {
			Movie* movie{ key_value.second };
			cout << movie->get_movie_name() + ", " + enum_to_string(movie->get_movie_rating()) + ", " + char(movie->get_times_watched()) << endl;
		}
	}
	
	cout << "==============================" << endl;
	cout << endl;
}