//
// Created by Dawid on 2022-04-23.
//

#include "MonkeyPlayer.h"
#include <cstdlib>

MonkeyPlayer::MonkeyPlayer(const std::string &n) : Player(n) {}

int MonkeyPlayer::choose(){
    return rand() % 3;
}