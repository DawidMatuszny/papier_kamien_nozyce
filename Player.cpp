//
// Created by Dawid on 2022-04-23.
//

#include "Player.h"

Player::Player(const std::string &n) : name(n) {}

std::string Player::getName() {
    return name;
}

int Player::choose() {
    return 0;
}