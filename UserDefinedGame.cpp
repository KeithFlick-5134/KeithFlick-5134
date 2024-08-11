#include <iostream>

void guessthenumber();

int main()
{
    int select;
    std::cout << "Wanna play a game ??\n";
    std::cout << "   1. Yes  2.NO \n";
    std::cin >> select;

    if(select == 1){
        guessthenumber();
    }
    else if(select == 2){
        std::cout << "Too scared huh!!\n";
    }
    else{
        std::cout << "not a desired input\n";
    }
    return 0;
}

void guessthenumber()
{
    int num;
    int tries;
    int guess;
    
    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout <<"******NUMBER GUESSING GAME******\n";

    do{
        std::cout << "Enter a guess between (1-100)";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "too high!\n";
        }
        else if(guess < num){
            std::cout << "too low!\n";
        }
        else{
            std::cout << "CORRECT!! # of tries: "<< tries << '\n';
        }

    }while(guess != num); 

    std::cout << "********************************\n";
}
