/*Write a program that
 reads in five integers and determines and prints the largest and
 the smallest integers in the group. Use only the programming
 techniques you learned in this chapter
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    cout << "your 5 numbers:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    if (a > b && a > c && a > d && a > e)
    {
        cout << a << "is the largest number" << endl;
    }
    if (b > a && b > c && b > d && b > e)
    {
        cout << b << "is the largest number" << endl;
    }
    if (c > a && c > b && c > d && c > e)
    {
        cout << c << "is the largest number" << endl;
    }
    if (d > a && d > b && d > c && d > e)
    {
        cout << d << "is the largest number " << endl;
    }
    if (e > a && e > b && e > c && e > d)
    {
        cout << e << "is the largest number" << endl;
    }
    if (a < b && a < c && a < d && a < e)
    {
        cout << a << "is the smallest number" << endl;
    }
    if (b < a && b < c && b < d && b < e)
    {
        cout << b << "is the smallest number" << endl;
    }
    if (c < a && c < b && c < d && c < e)
    {
        cout << c << "is the smallest number" << endl;
    }
    if (d < a && d < b && d < c && d < e)
    {
        cout << d << "is the smallest number" << endl;
    }
    if (e < a && e < b && e < c && e < d)
    {
        cout << e << "is the smallest number" << endl;
    }
}
