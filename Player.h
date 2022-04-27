//
// Created by Dawid on 2022-04-23.
//

#ifndef ZOO_PLAYER_H
#define ZOO_PLAYER_H
#include <string>

class Player {
std::string name, chosen;
std::string choice[3];
public:
    Player(const std::string &n);
    std::string getName() const;
    virtual void choose();
    void setChosen(int index);
    std::string getChosen() const;
};


#endif //ZOO_PLAYER_H
