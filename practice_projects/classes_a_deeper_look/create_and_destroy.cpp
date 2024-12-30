#include <iostream>
#include "create_and_destroy.h"
using namespace std;

CreateAndDestroy::CreateAndDestroy(int ID, std::string msgString) : objectID{ID}, msg{msgString}
{
    cout << "object " << objectID << "   constructors runs   "
         << msg << endl;
}

// destructor
CreateAndDestroy::~CreateAndDestroy()
{
    cout << (objectID == 1 || objectID == 6 ? "\n" : "");
    cout << "object " << objectID << "   destructors runs   "
         << msg << endl;
}