#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <array>
#include <cell.h>

class Player{
    // grid?
    std::array<std::array<Cell, 10>, 10> grid;

public:
    Player();

    void target(Player other);

    void display();

    bool stillAlive();
};

#endif // PLAYER_H
