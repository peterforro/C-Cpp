﻿#ifndef NEM_OO_H
#define NEM_OO_H

#include <cmath>
#include <iostream>

namespace sajat {


/**
 * Saját atoi.
 * Számjegyeket tartalmazó karaktersorozat átalakítása int-re.
 * Helyes számjegysorozat végét white space, vagy sztring vége ('\0') jelzi.
 *   Ha a számjegysorozatban olyan számjegy, vagy betű fordul elő,
 *   ami nem érvényes az adott számrendszerben, az hiba.
 *   Pl. hármas számrendszerben nem fordulhat elő a 3-as számjegy, de az A betű sem.
 * Hiba esetén egy const char* típusú kivételt kell dobni, melynek értéke
 * az Ön neptun azonosítója!
 * @param p    - pointer a sztringre
 * @param base - számrendszer alapja (0-10)
 * @return     - base számrendszerben értelmezett szám
 */
int atoi(const char *p, int base = 10);


/**
 * Sajat strcat.
 * Két C stílusú sztring (nullával lezárt karaktersorozat) összefűzése
 * A függvény dinamikusan foglal helyet az eredménynek.
 * @param p1   - pointer az első sztringre
 * @param p2   - pointer az másik sztringre
 * @return     - dinamikusan foglalt terület címe, ahova az eredmény kerül (hívónak kell felszabadítania)
 */
char *strcat(const char *p1, const char *p2);


/**
 * unique
 * A paraméterként kapott két pointer közötti karaktersorozatból kihagyja az egymás után ismétlődő
 * karaktereket (char). A sorozatot az eredeti helyén hagyja!
 * @param first - pointer az adatok kezdetére
 * @param last  - pointer, ami az utolsó adat után mutat
 * @return      - pointer, ami az új sorozat utolsó adata után mutat (a kihagyással rövidült a sorozat)
 */
char *unique(char *first, char *last);




struct Komplex {
    double re;
    double im;
};



inline double absKomplex(const Komplex& k) {
    return sqrt(k.re*k.re + k.im*k.im);
}


inline std::ostream& operator<<(std::ostream& os, const Komplex& k) {
    os << "(" << k.re << "," << k.im << "j)";
    return os;
}


}

#endif
