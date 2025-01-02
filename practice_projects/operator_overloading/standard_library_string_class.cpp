#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s1{"happy"};
    string s2{"birthday"};
    string s3;
    cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2
         << "\";s3 is \"" << s3 << '\"'
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
}