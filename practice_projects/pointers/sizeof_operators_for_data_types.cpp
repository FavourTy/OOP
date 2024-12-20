#include <iostream>
using namespace std;

int main()
{
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20];
    int *ptr{array};

    cout << "SizeOf c = " << sizeof c
         << "\tSizeOf(char) = " << sizeof(char)
         << "\nSizeOf s = " << sizeof s
         << "\tSizeOf(short) = " << sizeof(short)
         << "\nSizeOf i = " << sizeof i
         << "\tSizeOf(int) = " << sizeof(int)
         << "\nSizeOf l = " << sizeof l
         << "\tSizeOf(long) = " << sizeof(long)
         << "\nSizeOf ll = " << sizeof ll
         << "\tSizeOf(long long) = " << sizeof(long long)
         << "\nSizeOf f = " << sizeof f
         << "\tSizeOf(float) = " << sizeof(float)
         << "\nSizeOf d = " << sizeof d
         << "\tSizeOf(double) = " << sizeof(double)
         << "\nSizeOf ld = " << sizeof ld
         << "\tSizeOf(long double) = " << sizeof(long double)
         << "\nSizeOf array = " << sizeof array
         << "\nSizeOf ptr = " << sizeof ptr << endl;
}
//  openweathermap.org
