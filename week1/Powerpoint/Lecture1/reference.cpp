#include <iostream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int& ref = x;

    cout << "x = " << x << endl;       // Prints: x = 10
    cout << "ref = " << ref << endl;   // Prints: ref = 10

    ref = 20;  // Modifies x through ref
    cout << "x = " << x << endl;       // Prints: x = 20

    x = 30;    // Modifies ref through x
    cout << "ref = " << ref << endl;   // Prints: ref = 30

    return 0;
}
