//
// Created by Dawid on 2022-04-23.
//

#include "DonkeyPlayer.h"

DonkeyPlayer::DonkeyPlayer(const std::string &n) : Player(n){}

int DonkeyPlayer::choose() {
    return 1;
}