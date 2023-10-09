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
    
    Player computer;

    return 0;
}