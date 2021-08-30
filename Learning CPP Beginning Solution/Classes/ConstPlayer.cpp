#include "ConstPlayer.h"

using std::cout;
using std::endl;

// how to define a protoyped function outside the class
// initialization instead of assignment (more efficient)
ConstPlayer::ConstPlayer()
    : name("None"), health(0), xp(0) { // these are intialized in the order in which they appear in the class, not in the order here
    // typical constructor code goes here
}

ConstPlayer::ConstPlayer(std::string name_val, int health_val, int xp_val)
    : name(name_val), health(health_val), xp(xp_val) {
}

ConstPlayer::ConstPlayer(std::string name_val)
    : ConstPlayer{ name_val,0,0 } {
}

// copy constructor
// this will be called when copying the object, this will also happen when passing by value to functions
// by default it is memberwise copy meaning it is a shallow copy by default and therefore adjustments to its raw pointers can have knock-on affects
ConstPlayer::ConstPlayer(const ConstPlayer& source)
    : name(source.name), health(source.health), xp(source.xp) {
    cout << "Copy constructor made a copy of " << source.name << endl;
}

// decontructors are called automatically when an object is deleted, such as when it goes out of scope
ConstPlayer::~ConstPlayer() {
    cout << "Deconstructor called" << endl;
}