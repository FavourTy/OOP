#include <iostream>
using namespace std;

// count class definition

class Count
{
    friend void setX(Count &, int);

public:
    int getX() const
    {
        return x;
    }

private:
    int x{0};
};

void setX(Count &c, int val)
{
    c.x = val;
}

// function setX can modify private data of count
//  because setX is declared as a friend of count(setX)

int main()
{
    Count counter;
    cout << "counter.x after instantiation: " << counter.getX() << endl;
    setX(counter, 8);
    cout << "counter.x after call to setX friend function: " << counter.getX() << endl;
}