//
// Created by Dawid on 2022-04-23.
//

#ifndef ZOO_MONKEYPLAYER_H
#define ZOO_MONKEYPLAYER_H
#include "Player.h"

class MonkeyPlayer : public Player{
public:
    MonkeyPlayer(const std::string &n);
    int choose();
};


#endif //ZOO_MONKEYPLAYER_H
