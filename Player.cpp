//
// Created by Dawid on 2022-04-23.
//

#include "Player.h"

Player::Player(const std::string &n) : name(n) {
    choice[0] = "papier";
    choice[1] = "kamien";
    choice[2] = "nozyce";
}

std::string Player::getName() const {
    return name;
}

void Player::choose() {}

void Player::setChosen(int index) {
    chosen = choice[index];
}

std::string Player::getChosen() const {
    return chosen;
}