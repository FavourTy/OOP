#include <iostream>
using namespace std;
int main()
{
    // postfix increment operator
    unsigned int c{5};
    cout << " c before post increment : " << c << endl;
    cout << "        post increment c : " << c++ << endl;
    cout << "      c after posincremt : " << c << endl;
    cout << endl;
    c = 5;
    cout << " c before pre increment : " << c << endl;
    cout << "      preincrementing c : " << ++c << endl;
    cout << "     c after preincremt : " << c << endl;
}