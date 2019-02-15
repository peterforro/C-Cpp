#ifndef STRING1_H
#define STRING1_H


#define ELKESZULT    5
/**
 * Az ELKESZULT makró értékét annak megfelelően állítsa
 * 0,1,2,3,4 vagy 5 értékűre, hogy hol tart a feladat megoldásában!
 * Ha folyamatosan halad, akkor a kód mindig fordítható és futtatható lesz.
 * Így az egyes részek a teljes feladat befejezése nélkül is kipróbálhatók.
 *
 * ELKESZULT lehetséges értékei:
 *   0 - Nem egészített ki egyetlen hiányos függvényt sem.
 *   1 - Elkészítette a createString(String&, const char*) függvényt.
 *   2 - Elkészítette a createString(String&, const String&) függvényt.
 *   3 - Elkészítette a charAtString(const String& s0, unsigned int idx) függvényt
 *   4 - Elkészítette az addString(cont String&, char) függvényt.
 *   5   ELkészítette az addString(const String&, const String& b) függvényt
 */

struct String {
    char *pData;
    unsigned int len;
};

void createString(String &s0);


void disposeString(String& s0);


const char* StringC_str(const String &s0);


unsigned int StringLen(const String &s0);



void printStringDbg(const String &s0);


void createString(String &s0, char ch);


void createString(String& s0, const char *p);


void createString(String& s0, const String& s1);


char charAtString(const String& strObj, unsigned int idx);


String addString(const String& s0, const String& s1);


String addString(const String& s0, char ch);


#endif
