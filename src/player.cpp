#include <player.h>
#include <iostream>
#include <vector>
#include <tuple>
#include <ctime>
#include <cstdlib>

int randMax(int n){
    //srand(time(0));
    return (rand() % n);
}

Player::Player()
{

    std::vector<std::pair<Boat,int>> fleet{
        {Boat::Carrier, 5},
        {Boat::Cruiser, 4},
        {Boat::Destroyer, 3},
        {Boat::Submarine, 3},
        {Boat::Minesweeper, 2},
    };

    for(auto &[boat, length]: fleet){
        bool empty(false);
        int row, col, orientation;

        // gen random coord
        while(not empty){

            orientation = randMax(2);
            row = randMax(10);
            col = randMax(11-length);
            if(orientation == 1){
                std::swap(row, col);
            }
            // check if the cell is empty
            empty = true;
            for(int _ = 0; _ < length; ++_){
                if(grid[row][col].boat != Boat::None)
                    empty = false;
                //grid[row][col].boat = boat;
                if(orientation == 0)
                    col++;
                else
                    row++;
            }
            if(orientation == 0)
                col -= length;
            else
                row -= length;
        }


        // gen boat
        for(int _ = 0; _ < length; ++_){
//            if(grid[row][col].boat != Boat::None)
//                empty = false;
            grid[row][col].boat = boat;
            if(orientation == 0)
                col++;
            else
                row++;
        }
    }

    std::cout << "Creating players..." << std::endl;
}

void Player::target(Player other){

}

void Player::display(){
    for(const auto& row: grid){
        for(auto& cell: row){
            std::cout << cell.print() << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

bool Player::stillAlive(){

    // TODO
    return true;
}
