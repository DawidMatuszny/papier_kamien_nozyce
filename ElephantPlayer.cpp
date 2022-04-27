//
// Created by Dawid on 2022-04-23.
//

#include "ElephantPlayer.h"

ElephantPlayer::ElephantPlayer(const std::string &n) : Player(n){}

int ElephantPlayer::choose() {
    int random = rand() % 5;
    if (random == 0)
        return 1;
    if (random == 1 || random == 2)
        return 0;
    if (random == 3 || random == 4)
        return 2;
}