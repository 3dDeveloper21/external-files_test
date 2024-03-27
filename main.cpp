#include <iostream>

#include "./utils/greet.hpp"
#include "./utils/addNumbers.cpp"

using messaging::greet;
using calculations::addNumbers;
using std::cout;

int main() {
    cout << addNumbers(3, 4);
    greet("harp");

    return 0;
}
