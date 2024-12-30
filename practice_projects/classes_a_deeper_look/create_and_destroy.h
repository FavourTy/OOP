#include <string>
#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
public:
    CreateAndDestroy(int, std::string);
    ~CreateAndDestroy(); // Destructor
private:
    int objectID;
    std::string msg;
};
#endif