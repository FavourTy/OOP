#include <iostream>
#include <cstdlib> // contains prototypes for fxn rand and srand
#include <ctime>   // contains prototypes for fxn  time
using namespace std;

unsigned int rollDice();
int main()
{
    // SCOPE enumeration with constants that represents the game status
    enum class Status
    {
        CONTINUE,
        WON,
        LOST
    };

    // randomize random num generator using current time
    srand(static_cast<unsigned int>(time(0)));
    unsigned int myPoint{0};            // point if no win or loss on first roll
    Status gameStatus;                  // can be continue, won or lost
    unsigned int sumOfDice{rollDice()}; // first roll of the dice

    // determine game status and points if needed based on the first roll
    switch (sumOfDice)
    {
    case 7:  // wins with 7 on first roll
    case 11: // wins with 11 on first roll
        gameStatus = Status::WON;
        break;
    case 2:  // lose with 2 on first roll
    case 3:  // lose with 3 on first roll
    case 12: // lose with 12 on first roll
        gameStatus = Status::LOST;
        break;
    default:                           // did not win or lose, so remember point
        gameStatus = Status::CONTINUE; // game is not over
        myPoint = sumOfDice;           // remember the point
        cout << "Point is " << myPoint << endl;
        break; // optional at end of switch
    }
    while (Status::CONTINUE == gameStatus)
    {                           // not WON OR LOST
        sumOfDice = rollDice(); // roll dice again

        // determine game status
        if (sumOfDice == myPoint)
        { // win by making a point
            gameStatus = Status::WON;
        }
        if (sumOfDice == 7)
        { // lose by rolling 7 before point
            gameStatus == Status::LOST;
        }
    }
    // display won or lost msg
    if (Status::WON == gameStatus)
    {
        cout << "Player wins" << endl;
    }
    else
    {
        cout << "player losses" << endl;
    }
}

unsigned int rollDice()
{
    int die1{1 + rand() % 6};
    int die2{1 + rand() % 6};
    int sum{die1 + die2};
    cout << "player rolled " << die1 << " + " << die2
         << " = " << sum << endl;
    return sum;
}
