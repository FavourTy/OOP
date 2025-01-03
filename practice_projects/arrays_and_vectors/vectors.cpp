#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int> &);

int main()
{
    vector<int> integers1(7);  // 7 element vectors <int>
    vector<int> integers2(10); // 10 element vectors <int>

    // print int1 size and contents
    cout << "size of vector integers1 is " << integers1.size()
         << "\nvector after initialzation:";
    outputVector(integers1);

    // print int1 size and contents
    cout << "size of vector integers2 is " << integers2.size()
         << "\nvector after initialzation:";
    outputVector(integers2);

    // input and print int1 and int2
    cout << "Enter 17 integers:" << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, the vectors contain:\n"
         << "integers1:";
    outputVector(integers1);
    cout << "integers2:";
    outputVector(integers2);

    // use inequality (!=) operator with vector objects
    cout << "\nEvaluating: integers1 != integers2" << endl;
    if (integers1 != integers2)
    {
        cout << "Integers1 and Integers2 are not equal" << endl;
    }

    // create vector integers3 using int1 as an
    //  imitializer; print size and contents
    vector<int> integers3{integers1}; // copy constructors

    cout << "size of vector integers3 is " << integers3.size()
         << "\nvector after initialzation:";
    outputVector(integers3);

    // use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;
    // assign integers2 to int1

    cout << "Integers1: ";
    outputVector(integers1);
    cout << "Integers2: ";
    outputVector(integers2);

    // use equality (==) operator with vector objects
    cout << "\nEvaluating: integers1 == integers2" << endl;
    if (integers1 == integers2)
    {
        cout << "Integers1 and integers2 are equal" << endl;
    }
    cout << "\nIntegers1[5] is " << integers1[5];

    // use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1: ";
    outputVector(integers1);

    try
    {
        cout << "Attempt to display integers1.at[5]" << endl;
        cout << integers1.at(15) << endl; // ERROR : Out of range
    }
    catch (out_of_range &ex)
    {
        cerr << "An expection occured: " << ex.what() << endl;
    }
    // changing the size of a vector
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000); // add 1000 to the end of the vector
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: ";
    outputVector(integers3);
}
void outputVector(const vector<int> &items)
{

    for (size_t count{0}; count < items.size(); ++count)
    {
        cout << items[count] << " ";
    }
    cout << endl;
    // for (int item : items)
    // {
    //     cout << item << " ";
    // }
    // cout << endl;
}

void inputVector(vector<int> &items)
{
    for (int &item : items)
    {
        cin >> item;
    }
}