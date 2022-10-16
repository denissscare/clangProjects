#include <iostream>
#include "MyArray.h"


int main() {
    
    MyArray my_array;

    for(double i = 0; i < 10; i++){
        my_array.addElement(i);
    }

    my_array.printm();

    std::cout << my_array.max() << std::endl;
    std::cout << my_array.min() << std::endl;


    return 0;
}
