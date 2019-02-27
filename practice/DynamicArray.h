#ifndef PRACTICE_ARRAYLIST_H
#define PRACTICE_ARRAYLIST_H
#include <iostream>



template<typename T>
class DynamicArray {
private:
    T* pData;
    unsigned size;

public:
    DynamicArray(){
        pData = nullptr;
        size = 0;
    }


    DynamicArray(const T* initArray, unsigned size){
        this->size = size;
        pData = new T[size];
        for(int i=0; i<size; ++i){
            pData[i] = initArray[i];
        }
    }


    ~DynamicArray(){
        delete[] pData;
    }


    unsigned getSize(){
        return size;
    }


    void add(T element){
        T* tmp = new T[++size];
        for(auto i=0; i<size-1; ++i){
            tmp[i] = pData[i];
        }
        tmp[size-1] = element;
        delete[] pData;
        pData = tmp;
    }


    void stdOut()const{
        for(auto i=0; i<size; ++i){
            std::cout << pData[i] << std::endl;
        }
    }


    void clear(){
        delete[] pData;
        pData = nullptr;
        size = 0;
    }


    T operator[](unsigned idx)const{
        if(idx>size-1) throw "Error";
        return pData[idx];
    }


    void insert(T element, unsigned idx){
        if(idx>size-1) throw "Error";
        T *tmp = new T[++size];
        unsigned index = 0;
        for(auto i=0; i<size; ++i){
            if(i==idx){
                tmp[index++]=element;
                tmp[index++]=pData[i];
            } else {
                tmp[index++]=pData[i];
            }
        }
        delete[] pData;
        pData = tmp;
    }


    void operator+=(const DynamicArray<T>& rhs){
        unsigned newSize = size + rhs.size;
        T *tmp = new T[newSize];
        unsigned index = 0;
        for(auto i=0; i<size; ++i){
            tmp[index++] = pData[i];
        }
        for(auto i=0; i<rhs.size; ++i){
            tmp[index++] = rhs.pData[i];
        }
        delete[] pData;
        pData = tmp;
        size = newSize;
    }


    void remove(unsigned idx){
        if(idx>size-1) throw "Error!";
        auto tmp = new T[size-1];
        unsigned index = 0;
        for(auto i=0; i<size; ++i){
            if(idx == i) continue;
            tmp[index++] = pData[i];
        }
        delete[] pData;
        pData = tmp;
        --size;
    }
};


#endif //PRACTICE_ARRAYLIST_H
