#include <iostream>
#include "resistor.h"

using std::cout;
using std::endl;
using std::cin;

int main(){
    cout.setf(std::ios::fixed);
    cout.precision(0);
    Resistor r;
    cout << r.getR() << endl;
    cout << Resistor(130).getR() << endl;
    cout.precision(0);
    Resistor r1(1000), r2(3000), r3(6000);
    cout << (r1 + r2).getR() << endl
         << (r1 % r1).getR() << endl
         << (2 * r1).getR() << endl
         << (2*r1 + r2).getR() << endl
         << (2 * (r1+r2)).getR() << endl
         << (2 * (r2%r3)).getR() << endl;
    #ifndef NO_STATIC
        Resistor::setDef(2);
    #endif
        Resistor rt[10];
        cout << rt[5].getR() << endl;
    try {
        int n;
        while (cin >> n) {
            cout << (n * r1).getR() << endl;
        }
        cout << "Építsünk örökmozgót!" << endl;
    }
    catch (const char *s) {
        cout << s << endl;
    }
    return 0;
}
