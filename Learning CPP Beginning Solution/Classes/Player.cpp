#include "Player.h"


// how to define a protoyped function outside the class
// initialization instead of assignment (more efficient)
Player::Player()
    : name("None"), health(0), xp(0) { // these are intialized in the order in which they appear in the class, not in the order here
    // typical constructor code goes here
}

// copy constructor
// this will be called when copying the object, this will also happen when passing by value to functions
// by default it is memberwise copy meaning it is a shallow copy by default and therefore adjustments to its raw pointers can have knock-on affects
Player::Player(const Player& source)
    : name(source.name), health(source.health), xp(source.xp) {
    cout << "Copy constructor made a copy of " << source.name << endl;
}

// decontructors are called automatically when an object is deleted, such as when it goes out of scope
Player::~Player() {
    cout << "Deconstructor called" << endl;
}