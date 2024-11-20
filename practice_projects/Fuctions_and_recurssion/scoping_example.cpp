#include <iostream>
using namespace std;
void useLocal();       // function prototype
void useStaticLocal(); // function prototype
void useGlobal();      // function prototype
int x{2};              // global variable
int main()
{
    cout << "Global x in main is " << x << endl;
    int x{5}; // local variable to main
    cout << "local x in main's outer scope is " << x << endl;
    {
        int x{7};
        cout << "local x in main's inner scope is " << x << endl;
    }
    cout << "local x in main's outer scope is " << x << endl;

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();
    useGlobal();

    cout << "\n local x in main is " << x << endl;
}
void useLocal()
{
    int x{25};
    cout << "\n local x  is " << x << " on entering useLocal" << endl;
    ++x;
    cout << "\n local x  is " << x << " on exiting useLocal" << endl;
}
// seStaticLocal initializes static local variable x only the
// first time the function is called;valuee of x is saved
// btwn calls to this fxn
void useStaticLocal()
{
    static int x{50};
    cout << "\nlocal static  x  is " << x << " on entering useStaticLocal" << endl;
    ++x;
    cout << "\n local static  x  is " << x << " on exiting useStaticLocal" << endl;
}
// useGlobal modifies global variable x during each call
void useGlobal()
{
    cout << "\n global x  is " << x << " on entering useGloba" << endl;
    x *= 10;
    cout << "\n global x  is " << x << " on exiting useGlobal" << endl;
}