#pragma once
#include <iostream>

class ConstPlayer {
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    std::string get_name() const { // how to allow a function to work even if the variable is const
        return name;
    }

    ConstPlayer(); // prototype function
    ConstPlayer(const ConstPlayer&);
    ConstPlayer(std::string name_val);
    ConstPlayer(std::string name_val, int health_val, int xp_val);



    // deconstructor prototype
    ~ConstPlayer();
};


