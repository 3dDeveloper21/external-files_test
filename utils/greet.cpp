#include <string>
#include <iostream>

using std::cout, std::string;

namespace messaging
{
    void greet(string name)
    {
        cout << "Hello " << name;
    }
}