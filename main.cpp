#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MonkeyPlayer.h"
#include "ElephantPlayer.h"
#include "DonkeyPlayer.h"
#include "HumanPlayer.h"
#include "GameManager.h"

int main() {
    srand(time(nullptr));
    MonkeyPlayer monkey("Odi");
    MonkeyPlayer monkey2("Tosia");
    DonkeyPlayer donkey("osiol");
    ElephantPlayer elephant("slon");
    HumanPlayer czlowiek("Dawid");
    GameManager game(monkey, monkey2);
    game.play();
    GameManager game2(donkey, monkey2);
    game2.play();
    GameManager game3(elephant, donkey);
    game3.play();
    GameManager game4(monkey, elephant);
    game4.play();
    GameManager game5(elephant, czlowiek);
    game5.play();
    return 0;
}
