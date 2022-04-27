//
// Created by Dawid on 2022-04-23.
//

#ifndef ZOO_GAMEMANAGER_H
#define ZOO_GAMEMANAGER_H
#include "Player.h"

class GameManager {
    Player &playerOne;
    Player &playerTwo;
public:
    GameManager(Player &p1, Player &p2);
    void play();
    std::string showWhoWon();
};


#endif //ZOO_GAMEMANAGER_H
