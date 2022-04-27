//
// Created by Dawid on 2022-04-23.
//

#include "HumanPlayer.h"
#include <iostream>

HumanPlayer::HumanPlayer(const std::string &n) : Player(n) {}

void HumanPlayer::choose() {
    int select;
    std::cout << "Wybierz swoj ruch:\n1 - papier\n2 - kamien\n3 - nozyce\n";
    std::cin >> select;
    setChosen(select-1);
}