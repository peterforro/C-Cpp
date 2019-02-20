#ifndef _MAX_HPP
#define _MAX_HPP
#include "nem_oo.h"


namespace sajat{

    template <typename T>
    T max(T param1, T param2){
        return (param1 > param2) ? param1 : param2;
    }

    template<>
    Komplex max(Komplex param1, Komplex param2);
}


#endif //

