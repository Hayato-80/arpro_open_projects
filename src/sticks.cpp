#include <iostream>
#include <ctime>
#include <cstdlib>

void display(int sticks) {
    std::cout << "Sticks left: " << sticks << std::endl;
}

int main()
{

    int sticks = 21;

//    std::cout << "Put number of sticks:" << std::endl;
//    std::cin >> sticks;

    srand(time(0));

    while(sticks > 0){
        int opp = rand()%3+1;
        int select;
        display(sticks);
        std::cout << "Select number of sticks from 1 - 3: " << std::endl;

        std::cin >> select;
        while((select < 1)||(select > 3)||(select > sticks)){
            std::cout << "Select number of sticks from 1 - 3: " << std::endl;
            std::cin >> select;
        }
        sticks -= select;

        if(sticks < 0){
            std::cout << "You lose" << std::endl;
            break;
        }

        std::cout << "Your opponent picked: " << opp << " sticks" << std::endl;
        sticks -= opp;

        if(sticks < 0){
            std::cout << "You win" << std::endl;
            break;
        }
    }
    return 0;
}
