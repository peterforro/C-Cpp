#include <iostream>
#include "DynamicArray.h"

int main() {

    int numbers1[] = {1,2,3,4,5,6,7,8,9,10};
    int numbers2[] = {11,12,13,14,15,16};
    auto list1 = new DynamicArray<int>(numbers1,10);
    auto list2 = new DynamicArray<int>(numbers2,6);

    (*list1).insert(69696969,3);
    (*list1).remove(3);
    (*list1) += (*list2);0
    list1->stdOut();
    std::cout << list1->getSize() << std::endl;
    return 0;
}