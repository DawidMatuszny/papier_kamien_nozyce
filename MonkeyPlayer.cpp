//
// Created by Dawid on 2022-04-23.
//

#include "MonkeyPlayer.h"
#include <cstdlib>

MonkeyPlayer::MonkeyPlayer(const std::string &n) : Player(n) {}

void MonkeyPlayer::choose(){
    int random = rand() % 3;
    setChosen(random);
}