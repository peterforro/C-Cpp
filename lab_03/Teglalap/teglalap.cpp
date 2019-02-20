#include <iostream>
using std::cout;
using std::endl;


#define ELKESZULT 2


class Teglalap {
    private:
        double a, b;
    public:
        Teglalap(double, double);
        Teglalap();
        void kiir() const;
        double kerulet() const;
        double terulet() const;
};


Teglalap::Teglalap(double a, double b) {
    this->a = a;
    this->b = b;
}


Teglalap::Teglalap() {
    this->a = 0;
    this->b = 0;
}


void Teglalap::kiir() const {
    cout << "a:" << a << " b:" << b << endl;
}


double Teglalap::terulet() const {
    return a*b;
}


double Teglalap::kerulet() const {
    return (a+b)*2;
}


int main() {
    Teglalap ta(1,4);
    cout << "ta: ";
    ta.kiir();
    Teglalap tb(3,8);
    cout << "tb: ";
    tb.kiir();
#if ELKESZULT >= 1
    cout << "ta kerulete:" << ta.kerulet() << endl;
    cout << "tb kerulete:" << tb.kerulet() << endl;
    cout << "ta terulete:" << ta.terulet() << endl;
    cout << "tb terulete:" << tb.terulet() << endl;
#endif

#if ELKESZULT >= 2
    const int N = 5;
    Teglalap teglak[N];
    for (int i = 0; i < N; i++) {
        cout << "teglak[" << i << "]: ";
        teglak[i].kiir();
    }
#endif
    return 0;
}
