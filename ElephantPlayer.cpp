//
// Created by Dawid on 2022-04-23.
//

#include "ElephantPlayer.h"

ElephantPlayer::ElephantPlayer(const std::string &n) : Player(n){}

void ElephantPlayer::choose() {
    int random = rand() % 5;
    if (random == 0 || random == 1)
        setChosen(0);
    if (random == 2)
        setChosen(1);
    if (random == 3 || random == 4)
        setChosen(2);
}