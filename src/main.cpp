#include <iostream>
#include <ctime>
#include <cstdlib>
#include <player.h>

int main()
{
    //std::random_device dev;
    srand(time(0));
    Player p1, p2;
    p1.display();


//    while(1){
//        // Player 1
//        p1.display();
//        p1.target(p2);
//        if(p2.stillAlive())
//            break;

//        // Player 2
//        p2.display();
//        p2.target(p1);
//        if(p1.stillAlive())
//            break;
//    }
    return 0;
}
