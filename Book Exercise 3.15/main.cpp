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
    randgen = rand() % 300;
    cout << "randgen value: " << randgen << endl;
    
    if (randgen > 0 && randgen <= 100) {
        computer_pick = 1;
    } else if (randgen > 101 && randgen <= 200) {
        computer_pick = 2;
    } else if (randgen > 201 && randgen <= 300) {
        computer_pick = 3;
    } else {
        // randgen went wacky
        cout << "randgen value: " << "ERR" << endl;
    }
    
    // O
    if (user_pick == computer_pick) {
        cout << "It's a draw!" << endl;
    } else if (user_pick == 1 && computer_pick == 2) {
        // user rock v computer paper
        cout << "Computer Paper wraps user Rock! Computer Wins!" << endl;
    } else if (user_pick == 1 && computer_pick == 3) {
        // user rock v computer scissors
        cout << "User Rock crushes Computer Scissors! User Wins!" << endl;
    } else if (user_pick == 2 && computer_pick == 1) {
        // user paper v computer rock
        cout << "User Paper wraps Computer Rock! User Wins!" << endl;
    } else if (user_pick == 2 && computer_pick == 3) {
        // user paper v computer scissors
        cout << "User Paper is sliced by Computer Scissors! Computer Wins!" << endl;
    } else if (user_pick == 3 && computer_pick == 1) {
        // user  scissors v computer rock
        cout << "User Scissors is crushed by Computer Rock! Computer Wins!" << endl;
    } else if (user_pick == 3 && computer_pick == 2) {
        // user scissors v computer paper
        cout << "User Scissors cuts up Computer Paper! User Wins!" << endl;
    }
    
    return 0;
}
