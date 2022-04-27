//
// Created by Dawid on 2022-04-23.
//

#ifndef ZOO_DONKEYPLAYER_H
#define ZOO_DONKEYPLAYER_H

#include "Player.h"

class DonkeyPlayer : public Player {
public:
    DonkeyPlayer(const std::string &n);
    void choose();
};


#endif //ZOO_DONKEYPLAYER_H
