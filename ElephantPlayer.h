//
// Created by Dawid on 2022-04-23.
//

#ifndef ZOO_ELEPHANTPLAYER_H
#define ZOO_ELEPHANTPLAYER_H
#include "Player.h"

class ElephantPlayer : public Player {
public:
    ElephantPlayer(const std::string &n);
    int choose();
};


#endif //ZOO_ELEPHANTPLAYER_H
