#include "Movies.h"
#include <iostream>

using std::cout;
using std::endl;


Movies::Movies() 
	: collection{ new std::unordered_map<string,Movie> } {
}

Movies::Movies(const Movies& source) 
	: collection{ source.collection } {
}

Movies::Movies(Movies&& source) noexcept
	: collection{ source.collection } {

	source.collection = nullptr;
}

Movies::~Movies() {
	delete collection;
}


bool Movies::add_movie(string&& nameOfMovie) {
	if (this->contains(nameOfMovie)) {
		cout << "The movie collection already contains " + nameOfMovie << endl;
		return false;
	}
	else {
		cout << "Created and added the movie " + nameOfMovie + " to the collection" << endl;
		Movie createdMovie{ nameOfMovie };
		return collection->emplace(nameOfMovie, createdMovie).second;;
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