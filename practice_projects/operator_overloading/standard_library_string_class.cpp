#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s1{"happy"};
    string s2{"birthday"};
    string s3;
    /*outputing the three objects using cout*/
    cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2
         << "\"; s3 is \"" << s3 << '\"'

         << "\n\nThe results of comparing s2 and s1:" << boolalpha
         << "\ns2 == s1 yields " << (s2 == s1)
         << "\ns2 != s1 yields " << (s2 != s1)
         << "\ns2 > s1 yields " << (s2 > s1)
         << "\ns2 < s1 yields " << (s2 < s1)
         << "\ns2 >= s1 yields " << (s2 >= s1)
         << "\ns2 <= s1 yields " << (s2 <= s1);

    cout << "\n\nTesting s3.empty():\n";
    if (s3.empty())
    {
        cout << "s3 is empty; assigning s1 to s3;\n";
        s3 = s1;
        cout << "s3 is \"" << s3 << "\"";
    }
    // test overloaded string concatenation assinment operator
    cout << "\n\ns1 += s2 yields s1 = ";
    s1 += s2; // test overloaded concatenation
    cout << s1;

    // test overloaded string concatenation with a C string
    cout << "\n\ns1 += \" to you\" yields\n";
    s1 += "to you";
    cout << "s1 = " << s1;

    // test overloaded string concatenation with a C++14 string-object literal
    cout << "\n\ns1 += \" have a great day\" yields\n";
    s1 += ", have a great day!"s; // s after "for string object literal
    cout << "s1 = " << s1 << "\n\n";

    // test string member function substr
    cout << "The substring of s1 starting at location 0 for\n"
         << "14 characters, s1.substr(0, 14), is:\n"
         << s1.substr(0, 14) << "\n\n";

    // test subtr "t0-end-of-string" option
    cout << "The substring of s1 starting at\n"
         << "location 15, s1.substr(15), is:\n"
         << s1.substr(15) << "\n";

    // test copy constructor
    string s4{s1};
    cout << "\ns4 = " << s4 << "\n\n";

    // test overloaded copy assignment (=) operator with self-assignment
    cout << "assigning s4 to s4\n";
    s4 = s4;
    cout << "s4 = " << s4;

    s1[0] = 'H';
    s1[5] = 'B';

    cout << "\n\ns1 after s1[0] = 'H' and s1[6] = 'B' is:\n"
         << s1 << "\n\n";

    try
    {
        cout << "Attempt to assign 'd' to s1.at(100) yields:\n";
        s1.at(100) = 'd';
    }
    catch (out_of_range &ex)
    {
        cout << "An exception occured: " << ex.what() << endl;
    }
}