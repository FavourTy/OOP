#include <string>
#ifndef STATICCLASS_H
#define STATICCLASS_H

class Staticclass
{
public:
    Staticclass(const std::string &, const std::string &);
    ~Staticclass();
    std::string getFirstName() const;
    std::string getLastName() const;

    // static member function
    static unsigned int getCount();

private:
    std::string firstName;
    std::string lastName;
    // static data
    static unsigned int count; // number of objects instantiated
};
#endif
