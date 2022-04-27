//
// Created by Dawid on 2022-04-23.
//

#include "GameManager.h"
#include <iostream>

GameManager::GameManager(Player &p1, Player &p2) : playerOne(p1), playerTwo(p2){}

void GameManager::play() {
    playerOne.choose();
    playerTwo.choose();
    std::cout << "W grze bierze udzial " << playerOne.getName() << " i " << playerTwo.getName() << std::endl;
    std::cout << playerOne.getName() << " wybral " << playerOne.getChosen() << std::endl;
    std::cout << playerTwo.getName() << " wybral " << playerTwo.getChosen() << std::endl;
    if (playerOne.getChosen() == playerTwo.getChosen())
        std::cout << "Gra konczy sie remisem!" << std::endl << std::endl;
    else
        std::cout << "Gra konczy sie zwyciestwem " << showWhoWon() << "!" << std::endl << std::endl;
}

std::string GameManager::showWhoWon() {
    if (playerOne.getChosen() == "papier"){
        if (playerTwo.getChosen() == "kamien")
            return playerOne.getName();
        else
            return playerTwo.getName();
    }
    if (playerOne.getChosen() == "kamien"){
        if (playerTwo.getChosen() == "nozyce")
            return playerOne.getName();
        else
            return playerTwo.getName();
    }
    if (playerOne.getChosen() == "nozyce"){
        if (playerTwo.getChosen() == "papier")
            return playerOne.getName();
        else
            return playerTwo.getName();
    }
    else
        return "";
}