//
//  main.cpp
//  Book Exercise 3.15
//
//  Created by ax on 8/31/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Rock, Paper, Scissors
//

#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main() {
    
    cout << "Let's Play Rock, Paper, Scissors \n";
    
    // D
    int user_pick = 0;
    int computer_pick = 0;
    int randgen = 0;
    srand(time(0)); // seed random
    cout << RAND_MAX << endl;
    
    
    // I
    cout << "Enter your pick: (1)-rock, (2)-paper, (3)-scissors: ";
    cin >> user_pick;
    
    // P
    randgen = rand() % 3;
    cout << randgen << endl;
    
    // O
    
    return 0;
}
