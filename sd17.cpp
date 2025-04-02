/* sd17.cpp source file for sd17.
 * Description:
 * Experiment with concepts found in Chapter 17 of, Dmitrovic, Slobldan,
 * C++ for Absolute Beginners 2nd. ed., Apress, 2024, New York, New York.
 *
 * 17. Constants -- Want to have a read-only object in the current scope?
 * Make it a constant using the const type qualifier.
 *
 *
*/


#include <iostream>

int main() {

    const int c1 = 123;
    const double d = 456.789;
    const std::string s = "Hello, World!";
    const int c2 = c1;

    std::cout << "Constant integer c1 value: " << c1 << '\n';
    std::cout << "Constant double d value: " << d << '\n';
    std::cout << "Constant std::string s value: " << s << '\n';
    std::cout << "Constant integer c2 value: " << c2 << '\n';

}
