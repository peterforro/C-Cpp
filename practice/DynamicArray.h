#ifndef PRACTICE_ARRAYLIST_H
#define PRACTICE_ARRAYLIST_H
#include <iostream>


template <typename T>
class DynamicArray{
    private:
        T* pData;
        unsigned size;

    public:
        DynamicArray(){
            this->size = 0;
            pData = new T[size];
        }

        ~DynamicArray(){
            delete[] pData;
        }

        void add(T element){
            T *tmp = new T[++size];
            for(int i=0; i<size-1; ++i){
                tmp[i] = pData[i];
            }
            tmp[size-1] = element;
            delete[] pData;
//            pData = tmp;
        }


        void stdOut(){
            for(int i=0; i<size; ++i){
                std::cout << pData[i] << std::endl;
            }
        }

//        int *p = new int();
//         delete p;
//         delete p;


};


#endif
