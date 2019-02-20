#include <iostream>
#include <iomanip>
#include <cmath>

#include "komplex.h"


Komplex::Komplex(double r, double im) {
    re = r;
    this->im = im;
}


double Komplex::abs() const {
    return sqrt(re*re + im*im);
}


double Komplex::getRe() const {
    return re;
}


double Komplex::getIm() const {
    return im;
}


void Komplex::setIm(double im) {
    this->im = im;
}


void Komplex::setRe(double re) {
    this->re = re;
}


#if ELKESZULT >= 3
    bool Komplex::operator!=(const Komplex& rhs_k) const {
        return this->re != rhs_k.re && this->im != rhs_k.im;
    }

    bool Komplex::operator==(const Komplex& rhs_k) const {
        return this->re == rhs_k.re && this->im == rhs_k.im;
}
#endif


Komplex Komplex::operator+(const Komplex &rhs_k) const {
    return {this->re+rhs_k.re,this->im+rhs_k.im};
}


Komplex Komplex::operator+(double rhs_d) const {
    return {this->re+rhs_d,this->im};
}


Komplex operator+(double lhs_d, const Komplex& rhs_k){
    return {rhs_k.getRe()+lhs_d,rhs_k.getIm()};
}


#if ELKESZULT >= 6
    Komplex& Komplex::operator+=(double rhs_d) {
        re += rhs_d;
        return *this;
    }
#endif


Komplex& Komplex::operator+=(const Komplex& rhs_k){
    re += rhs_k.re;
    im += rhs_k.im;
    return *this;
}

