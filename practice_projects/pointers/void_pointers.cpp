#include <iostream>
using namespace std;
void printNumber(int *);
void printLetter(char *);
void sumNumbers(int *, int *);
void print(void *ptr, char type);

int main()
{
    int n = 5;
    char l = 'f';
    int first = 3;
    int second = 5;
    printNumber(&n);
    printLetter(&l);
    sumNumbers(&first, &second);
    // int fav;
    // cout << "Enter an integer: ";
    // cin >> fav;
    // print(&fav, 'i');
    std::string salv{"favour"};
    print(&salv, 's');
}

void printNumber(int *number)
{
    cout << "number = " << *number << endl;
}
void printLetter(char *letter)
{
    cout << "letter = " << *letter << endl;
}
void sumNumbers(int *sumA, int *sumB)
{
    cout << "Sum = " << *sumA + *sumB << endl;
}

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    case 'd':
        cout << *((double *)ptr) << endl;
        break;
    case 's':
        cout << *((std::string *)ptr) << endl;
        break;
    }
}