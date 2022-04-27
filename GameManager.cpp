//
// Created by Dawid on 2022-04-23.
//

#include "GameManager.h"
#include <iostream>

GameManager::GameManager(Player &p1, Player &p2) : playerOne(p1), playerTwo(p2){
    choice[0] = "papier";
    choice[1] = "kamien";
    choice[2] = "nozyce";
}

void GameManager::play() {
    std::cout << "W grze bierze udzial " << playerOne.getName() << " i " << playerTwo.getName() << std::endl;
    std::cout << playerOne.getName() << " wybral " << choice[playerOne.choose()] << std::endl;
    std::cout << playerTwo.getName() << " wybral " << choice[playerTwo.choose()] << std::endl;
    std::cout << "Gra konczy sie zwyciestwem " << showWhoWon() << std::endl;
}

std::string GameManager::showWhoWon() {
    if (playerOne.choose() == playerTwo.choose())
        return "remis";
    if (playerOne.choose()+1 == playerTwo.choose())
        return playerOne.getName();
    else
        return playerTwo.getName();
}