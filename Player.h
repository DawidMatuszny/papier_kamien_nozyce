//
// Created by Dawid on 2022-04-23.
//

#ifndef ZOO_PLAYER_H
#define ZOO_PLAYER_H
#include <string>

class Player {
std::string name;
public:
    Player(const std::string &n);
    std::string getName();
    virtual int choose();
};


#endif //ZOO_PLAYER_H
