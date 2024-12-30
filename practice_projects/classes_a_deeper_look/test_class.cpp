#include <iostream>
using namespace std;

class Test
{
public:
    explicit Test(int);
    void print() const;

private:
    int x{0};
};

Test::Test(int value) : x{value}
{

} // initialize x to value

void Test::print() const
{
    // implicitly use the this pointer to access the member x
    cout << "           x = " << x;
    // explicitly use the this pointer and the arrow operator
    // access the member x
    cout << " \n   this->x = " << this->x;
    // explicitly use the the deferenced this pointer and the dot operator
    // access the member x
    cout << " \n(*this).x = " << (*this).x << endl;
}

int main()
{
    Test testObj{12};
    testObj.print();
}