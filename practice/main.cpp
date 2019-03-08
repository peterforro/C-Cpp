#include <iostream>
#include "DynamicArray.h"

int main() {

    DynamicArray<double> collection;
    collection.add(10.69);
    collection.add(11.345);
    collection.stdOut();


    return 0;
}