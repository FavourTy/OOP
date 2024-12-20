#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned int randomNum();

int main()
{

    enum class GameStatus
    {
        TRYAGAIN,
        END,
        TOOLOW
    };

    GameStatus status;
    srand(static_cast<unsigned int>(time(0)));
    unsigned int randomN{randomNum()};
    char num;
    cout << "i have a num (1-100)\n"
         << "can you type your first guess ?" << endl;
    cout << "Type your first guess: ";
    int guessNo;
    cin >> guessNo;
    if (guessNo == randomN)
    {
        cout << "correct" << endl;
    }
    else
    {
        cout << "You are wrong, the number i have is " << randomN << endl;
        cout << "Would you like to continue: y/n?";
        cin >> num;
        if (num == 'y')
        {
            status == GameStatus::TRYAGAIN;
        }
        else if (num == 'n')
        {
            status == GameStatus::END;
        }
    }
    if (GameStatus::TRYAGAIN == status)
    {
        while (guessNo != randomN)
        {
            cout << "Type a number ";
            cin >> guessNo;
            if (guessNo == randomN)
            {
                cout << "correct";
            }
            if (guessNo < randomN)
            {
                cout << "Too low Try again" << endl;
            }
            if (guessNo > randomN)
            {
                cout << "To high Try again" << endl;
            }
        }
    }
    else if (GameStatus::END == status)
    {
        cout << "end";
    }
}

unsigned int randomNum()
{

    int randNum = 1 + rand() % 100;
    return randNum;
}