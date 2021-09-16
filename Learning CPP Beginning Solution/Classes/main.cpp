#include <iostream>
#include <vector>

#include "Account.h"
#include "Player.h"
#include "Shallow.h"
#include "Deep.h"
#include "Move.h"
#include "ConstPlayer.h"

#include "Movies.h"


using std::cout;
using std::endl;

void display_object(Deep source) {
    cout << source.get_data_value() << endl;
}
void display_object(Shallow source) {
    cout << source.get_data_value() << endl;
}


// structs are the same as classes functionally. However, the members of classes are private by default whereas in structs they are public
// structs are fine for passive public data; classes should be used for specific objects with getter & setter methods (these are general guidlines)

int main()
{
    // account class
/*
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) {
        cout << "Deposit OK" << endl;
    }
    else {
        cout << "Deposit Not Allowed" << endl;
    }



    if (frank_account.withdraw(500.0)) {
        cout << "Withrawal OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }



    if (frank_account.withdraw(1500.0)) {
        cout << "Withrawal OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }
*/


    // Player 1
/*
    Player frank;
    frank.set_name("Frank");
    Player frank{ "Frank",100,13 };    
    cout << frank.get_name() << endl;
*/


    // Player 2
/*
    Player empty{ "empty",100,5 };
    Player myCopyPlayer{ empty };
*/


    // shallow copy
/*
    Shallow shallow_object_1{ 100 };
    display_object(shallow_object_1);

    Shallow shallow_object_2{ shallow_object_1 };
    shallow_object_2.set_data_value(1000);

    // shallow_object_1 goes out of scope and deletes pointer
    // shallow_object_2 goes out of scope and attempts to delete pointer, but shallow_object_1's deconstructor already did so
*/


    // Deep copy
/*
    Deep deep_object_1{ 100 };
    display_object(deep_object_1);

    Deep deep_object_2{ deep_object_1 };
    deep_object_2.set_data_value(1000);
*/


    // Move
/*
    std::vector<Move> moveVector;
    // pushing back temporary r-value to vector
    // if we do not have a r-value move constructor but a copy constructor, this will create temporary value calling the contructor for Move.
    // it will then copy the value into the vector using the copy contructor (which delegates to the normal Move contructor) so we basically create the variable twice.
    moveVector.push_back(Move(10));

    // without an r-value move constructor, when the vector resizes to fit new elements, it has to deep-copy every preceeding element 
    moveVector.push_back(Move(20));
    moveVector.push_back(Move(30));
    moveVector.push_back(Move(40));
    moveVector.push_back(Move(50));
    moveVector.push_back(Move(60));
    moveVector.push_back(Move(70));
    moveVector.push_back(Move(80));
*/


    // constants
/*
    const ConstPlayer villain{ "Villain",100,55 };
    ConstPlayer hero{ "Hero",100,15 };

    villain.get_name();
*/



    // section challenge
    Movie missionImpossibleMovie{ "Mission Impossible", movieRating::R, 1 };
    Movies missionImpossibleMovieCollection{};
    auto inserted = missionImpossibleMovieCollection.emplace(missionImpossibleMovie);
    
    cout << std::boolalpha;
    cout << missionImpossibleMovieCollection.contains(missionImpossibleMovie);
    


    return 0;
}

