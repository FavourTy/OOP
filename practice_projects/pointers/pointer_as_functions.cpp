#include <iostream>
using namespace std;
int getmax(int num[], int size);
int getmin(int num[], int size);
void getminAndmax(int num[], int size, int *max, int *min);

int main()
{
    int mynum[5]{1, 4, 6, 7, 8};
    cout << "max is " << getmax(mynum, 5);
    cout << "min is " << getmin(mynum, 5);
    int max = mynum[0];
    int min = mynum[0];
    getminAndmax(mynum, 5, &max, &min);
    cout << "min is " << min << "\n"
         << "max is " << max << endl;
}

int getmax(int num[], int size)
{
    int max = num[0];
    for (int i = 1; i < size; ++i)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getmin(int num[], int size)
{
    int min = num[0];
    for (int i = 1; i < size; ++i)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

// pointers as functions

void getminAndmax(int num[], int size, int *max, int *min)
{
    for (int i = 1; i < size; ++i)
    {
        if (num[i] < *min)
        {
            *min = num[i];
        }
        if (num[i] > *max)
        {
            *max = num[i];
        }
    }
}