#include <iostream>
#include <iomanip>
using namespace std;
void hanoiTower(int noOfDiskP, int peg1, int peg2, int peg3);
int main()
{
    int n;
    cout << "How many disks do you want to move : ";
    cin >> n;
    cout << "Hanoi Tor: ";
    hanoiTower(n, 1, 2, 3);
    cout
        << endl;
}
void hanoiTower(int noOfDiskP, int peg1, int peg2, int peg3)
{
    if (noOfDiskP == 1)
    {
        cout << "move block 1 from " << peg1 << "---> " << peg3 << endl;
        return;
    }
    hanoiTower(noOfDiskP - 1, peg1, peg3, peg2);
    cout << "move block " << noOfDiskP << " from " << peg1 << "---> " << peg3 << endl;
    hanoiTower(noOfDiskP - 1, peg2, peg1, peg3);
}