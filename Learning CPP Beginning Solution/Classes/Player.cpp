#include "Player.h"

using std::cout;
using std::endl;

// how to define a protoyped function outside the class
// initialization instead of assignment (more efficient)
Player::Player()
    : name("None"), health(0), xp(0) { // these are intialized in the order in which they appear in the class, not in the order here
    // typical constructor code goes here
}

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name(name_val), health(health_val), xp(xp_val) {
}

Player::Player(std::string name_val) 
    : Player{ name_val,0,0 } {
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