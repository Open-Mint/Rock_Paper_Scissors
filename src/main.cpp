#include <iostream>
#include <random>

class Player
{
public:
    int choice;
private:
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_int_distribution<int> dist;
public:
    Player()
    : gen(rd()), dist(0, 2)
    {
        choice = dist(gen);
    }
};
int main()
{
    std::cout << "\"Rock Paper Scissors\"\n_______________________________\n";
    std::cout << "Choose a number:\nRock: 0  Paper: 1  Scissors: 2\n";

    int choice = 0;
    std::cin >> choice;    
    
    if(choice > 2 || choice < 0)
    {
        std::cout << "Please try again and choose a number between 0 and 2.\n";
        return 1;
    }

    std::cout << "_______________________________\n";

    Player computer;

    std::string options[3] = {"Rock", "Paper", "Scissors"};

    std::cout << "You chose : " << options[choice] << '\n';
    std::cout << "Computer chose: " << options[computer.choice] << '\n';

    if(computer.choice == choice)
    {
        std::cout << "Draw. Try again\n";
    }
    else
    if((choice == 0 && computer.choice == 1) || (choice == 1 && computer.choice == 2)
       || (choice == 2 && computer.choice == 0))
    {
        std::cout << "You lost\n";
    }
    else
    {
        std::cout << "You won\n";
    }

    std::cout << "_______________________________\n";

    return 0;
}