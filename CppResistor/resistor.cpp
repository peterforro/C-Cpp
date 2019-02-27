#include "resistor.h"

double Resistor::defR = 69;


void Resistor::setDef(double r) {
    Resistor::defR = r;
}


Resistor::Resistor() {
    R = Resistor::defR;
}

Resistor::Resistor(double r) {
    R = r;
}


Resistor Resistor::operator+(const Resistor &r) const {
    return Resistor(R + r.R);
}


Resistor Resistor::operator%(const Resistor &r) const {
    return Resistor(1/((1/R)+(1/r.R)));
}


Resistor operator*(int n, const Resistor& r){
    if(n<=0) throw "FK211B";
    return Resistor(n*r.getR());
}

double Resistor::getR() const {
    return R;
}