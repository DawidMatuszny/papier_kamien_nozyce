//
// Created by Dawid on 2022-04-23.
//

#include "DonkeyPlayer.h"

DonkeyPlayer::DonkeyPlayer(const std::string &n) : Player(n){}

void DonkeyPlayer::choose() {
    setChosen(1);
}