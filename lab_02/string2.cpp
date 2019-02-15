#include <iostream>
#include <cstring>
#include "string2.h"
#include "memtrace.h"
#include "string2.h"


using std::cout;
using std::endl;


void createString(String &s0) {
    s0.pData = nullptr;
    s0.len = 0;
}


void disposeString(String& s0) {
    delete[] s0.pData;
}


const char* StringC_str(const String &s0) {
    return s0.pData;
}


unsigned int StringLen(const String &s0) {
    return s0.len;
}


void printStringDbg(const String &s0) {
    #ifdef DEBUG
        cout << '[' << s0.len << "], " << s0.pData << '|' << endl;
    #endif
}


void createString(String& s0, char ch) {
    s0.len = 1;
    s0.pData = new char[s0.len+1];
    s0.pData[0] = ch;
    s0.pData[1] = '\0';
}


void createString(String& strObj, const char* rawStr){
    unsigned charCounter;
    for(charCounter=0; rawStr[charCounter]!='\0'; ++charCounter);
    strObj.len = charCounter;
    strObj.pData = new char[charCounter+1];
    unsigned index = 0;
    for(unsigned i=0; i<charCounter; ++i){
        strObj.pData[index++] = rawStr[i];
    }
    strObj.pData[index] = '\0';

}


void createString(String& strObj1, const String& strObj2){
    strObj1.len = strObj2.len;
    strObj1.pData = new char[strObj1.len+1];
    for(unsigned i=0; i<strObj1.len; ++i){
        strObj1.pData[i] = strObj2.pData[i];
    }
}


char charAtString(const String& strObj, unsigned int idx){
    if(idx >= strObj.len) throw "Kheci Pasztmek!";
    return strObj.pData[idx];
}


String addString(const String& strObj1, const String& strObj2){
    String result{nullptr,0};
    result.len = strObj1.len + strObj2.len;
    result.pData = new char[result.len+1];
    unsigned index = 0;
    for(auto i=0;i<strObj1.len;++i){
        result.pData[index++] = strObj1.pData[i];
    }
    for(unsigned i=0;i<strObj2.len;++i){
        result.pData[index++] = strObj2.pData[i];
    }
    result.pData[index] = '\0';
    return result;
}


String addString(const String& strObj1, char chr){
    String result{nullptr,0};
    result.len = strObj1.len+1;
    result.pData = new char[strObj1.len+2];
    unsigned index = 0;
    for(unsigned i=0; i<strObj1.len; ++i){
        result.pData[index++] = strObj1.pData[i];
    }
    result.pData[index++] = chr;
    result.pData[index] = '\0';
    return result;
}

