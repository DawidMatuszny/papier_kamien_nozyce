//
// Created by Dawid on 2022-04-23.
//

#ifndef ZOO_HUMANPLAYER_H
#define ZOO_HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player{

public:
    HumanPlayer(const std::string &n);
    void choose();
};


#endif //ZOO_HUMANPLAYER_H
