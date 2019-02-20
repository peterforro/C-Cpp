
#ifndef KOMPLEX_H
#define KOMPLEX_H

#include "elkeszult.h"


class Komplex {
    private:
        double re, im;
    public:
        Komplex(double re = 0, double im = 0);
        double getRe() { return re; }
        double abs() const;


        #if ELKESZULT >= 1
            double getRe() const;
            double getIm() const;
        #endif


        #if ELKESZULT >= 2
            void setRe(double re);
            void setIm(double im);
        #endif


        #if ELKESZULT >= 3
            bool operator==(const Komplex& rhs_k) const;
            bool operator!=(const Komplex& rhs_k) const;
        #endif


        #if ELKESZULT >= 4
            Komplex operator+(const Komplex& rhs_k) const;
            Komplex operator+(double rhs_d) const;
        #endif


        #if ELKESZULT >= 6
            Komplex& operator+=(const Komplex& rhs_k);
            Komplex& operator+=(double rhs_d);
        #endif

#if ELKESZULT >= 7
    /// Kiírás egy ostream-re.
    /// Ez is csak globális függvénnyel valósítható meg.
    /// A bal oldal osztály ugyan, de nincs a kezünkben, nem módosítható.
    /// Ld. az osztály deklarációja után!
#endif

#if ELKESZULT >= 8
    /// komplex konjugált
    /// ~Komplex
    /// @return egy új adat, amiben a konjugált érték van
    Komplex operator~() const;
#endif

#if ELKESZULT >= 9
    // szorzás, a * nem módosítja önmagát ezért konstans fv.
    /// Komplex * Komplex
    /// @param rhs_k - jobb oldali operandus (Komplex)
    /// @return egy új komplex adat - a két komplex adat szorzata
    Komplex operator*(const Komplex& rhs_k) const;

    /// Komplex * double
    /// @param rhs_d - jobb oldali operandus (double)
    /// @return egy új komplex adat - a két adat szorzata
    Komplex operator*(double rhs_d) const;

    /// double * Komplex csak globális függvénnyel valósítható meg,
    /// mivel a bal oldal nem osztály
    /// Ld. az osztály deklarációja után!

    // a *= művelet viszont módosítja önmagát!
    /// Komplex * Komplex
    /// @param rhs_k - jobb oldali operandus (Komplex)
    /// @return eredeti (bal oldali) objektum ref., amit megszorosztunk
    Komplex& operator*=(const Komplex& rhs_k);

    /// Komplex + double
    /// @param rhs_d - jobb oldali operandus (double)
    /// @return eredeti (bal oldali) objektum ref., amit megszoroztunk
    Komplex& operator*=(double rhs_d);
#endif
};



#if ELKESZULT >= 5
        Komplex operator+(double lhs_d, const Komplex& rhs_k);
#endif

#if ELKESZULT >= 7
// cout << Komplex is csak globális függvénnyel valósítható meg, mivel
// az baloldali osztály (ostream) nincs a kezünkben, nem módosítható
/// Kiírás egy ostream-re
/// @param os - bal oldali operandus (ostream)
/// @param rhs_k - jobb oldali operandus (Komplex)
/// @return ostream&, hogy fűzhető legyen
std::ostream& operator<<(std::ostream& os, const Komplex& rhs_k);

/// Beolvasás egy istream-ről
/// @param is - bal oldali operandus (istream)
/// @param rhs_k - jobb oldali operandus (Komplex)
/// @return istream&, hogy fűzhető legyen
std::istream& operator>>(std::istream& is, Komplex& rhs_k);
#endif

#if ELKESZULT >= 9
// double * Komplex csak globális függvénnyel valósítható meg,
// mivel a bal oldal nem osztály
/// double * Komplex
/// @param lhs_d - bal oldali operandus (double)
/// @param rhs_k - jobb oldali operandus (Komplex)
/// @return egy új komplex adat - a két adat szorzata
Komplex operator*(double lhs_d, const Komplex& rhs_k);
#endif

#endif  // KOMPLEX_H
