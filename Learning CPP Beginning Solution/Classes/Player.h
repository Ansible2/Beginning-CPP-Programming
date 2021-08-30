#pragma once
#include <iostream>

class Player {
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    std::string get_name() {
        return name;
    }

    // overloading constructors
    // assignment of variables, not initialization (inefficient)
/*
    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }
*/
    Player(); // prototype function
    Player(const Player&);
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);



    // deconstructor prototype
    ~Player();
};


