#include <iostream>
#include "Move.h"

Move::Move(int d) {
	data = new int;
	*data = d;

	std::cout << "Constructor for: " << d << std::endl;
}

Move::Move(const Move& source)
	: Move{ *source.data } {
	std::cout << "Copy Constructor - deep copy for: " << data << std::endl;
}


Move::Move(Move&& source) noexcept
	: data{ source.data } {
	
	source.data = nullptr;
	std::cout << "Move constructor - moving resource: " << *data << std::endl;
}

Move::~Move() {
	if (data != nullptr) {
		std::cout << "Destructor freeing data for: " << *data << std::endl;
	}
	else {
		std::cout << "Destructor freeing data for nullptr " << std::endl;
	}

	delete data;
}