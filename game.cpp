#include <iostream>
#include <time.h>
#include "functions.h"

int computer_choice_generator() {
    srand(time(0));
    int computer_choice = (rand() % (3-1+1))+1;
    return computer_choice;
}

// Draw: 1 UserWins: 2 ComputerWins: 3
int scoreboard_generator() {
    extern int user_choice;
    extern int computer_choice;
    extern int user_score;
    extern int computer_score;
    if(user_choice == 1) {
        if(computer_choice == 1) {
            return 1;
        }
        else if(computer_choice == 2) {
            computer_score++;
            return 3;
        }
        else if(computer_choice == 3) {
            user_score++;
            return 2;
        }
    }
    else if(user_choice == 2) {
        if(computer_choice == 1) {
            user_score++;
            return 2;
        }
        else if(computer_choice == 2) {
            return 1;
        }
        else if(computer_choice == 3) {
            computer_score++;
            return 3;
        }
    }
    else if(user_choice == 3) {
        if(computer_choice == 1) {
            computer_score++;
            return 3;
        }
        else if(computer_choice == 2) {
            user_score++;
            return 2;
        }
        else if(computer_choice == 3) {
            return 1;
        }
    }
    return 0;
}
