#include <iostream>
#include <ctime>
#include <cstdlib>


int main()
{
    int hand;
    srand(time(0));
//    int opp = rand()%3+1;
//    std::cout << "Rock - 1, Paper - 2, Scissors - 3" << std::endl << "Put number: ";
//    std::cin >> hand;

    while(1){
        std::cout << "Rock - 1, Paper - 2, Scissors - 3" << std::endl << "Put number: ";
        std::cin >> hand;
        int opp = rand()%3+1;
        if((hand==1 && opp == 3)||(hand==2 && opp == 1)||(hand==3 && opp == 2)){
            std::cout << "You win: " << hand << "vs" << opp << std::endl;
            break;
        }
        else if((opp==1 && hand == 3)||(opp==2 && hand == 1)||(opp==3 && hand == 2)){
            std::cout << "You lose: " << hand << "vs" << opp << std::endl;
            break;
        }
        else if((hand==1 && opp == 1)||(hand==2 && opp == 2)||(hand==3 && opp == 3)){
            std::cout << "Tie: " << hand << "vs" << opp << std::endl;
        }
    }

    return 0;
}
