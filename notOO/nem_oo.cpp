#include <cstring>
#include <cctype>
#include "nem_oo.h"
#include "max.hpp"


template<>
sajat::Komplex sajat::max(sajat::Komplex param1, sajat::Komplex param2) {
    double abs1 = absKomplex(param1), abs2 = absKomplex(param2);
    return abs1 > abs2 ? param1 : param2;
}


int sajat::atoi(const char *p, int base) {
    int i = 0;
    int result = 0;
    while (p[i] != ' ' && p[i] != '\0') {
        int digit = p[i] - '0';
        if (!isdigit(digit) && digit >= base) {
            throw "FK211B";
        } else {
            result *= base;
            result += digit;
        }
        p++;
    }
    return result;
}



char *sajat::strcat(const char *p1, const char *p2) {
    std::string param1 = p1, param2 = p2;
    param1 += param2;
    char *tmp = new char[param1.length()+2];
    strcpy(tmp, param1.c_str());
    tmp[param1.length()] = '\0';
    return tmp;
}


char *sajat::unique(char *first, char *last) {
    const int length = (int)(last - first + 1);
    char* tmp = new char[length];
    for(int i=0;first+i<=last;++i){
        tmp[i] = first[i];
    }
    first[0] = tmp[0];
    size_t index = 0;
    for(int i=1;tmp+i<=tmp+length;++i){
        if(first[index] != tmp[i]){
            first[++index] = tmp[i];
        }
    }
    delete[] tmp;
    return first+index;
}


