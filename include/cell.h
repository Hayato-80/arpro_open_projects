#ifndef CELL_H
#define CELL_H

enum Boat{
    Carrier,
    Cruiser,
    Destroyer,
    Submarine,
    Minesweeper,
    None,
};

struct Cell{
    Boat boat{Boat::None};
    bool hit{false};

    char print() const
    {

        if(hit)
            return 'x';

        switch(boat) {
            case Boat::Carrier:
                return 'A';
            case Boat::Cruiser:
                return 'C';
            case Boat::Destroyer:
                return 'D';
            case Boat::Submarine:
                return 'S';
            case Boat::Minesweeper:
                return 'M';
            case Boat::None:
                return '.';
        }
    }
};

#endif // CELL_H
