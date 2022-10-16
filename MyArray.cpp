#include"MyArray.h"
#include<iostream>


MyArray::MyArray(){
    arr_ = new double[1];
    capacity_ = 1;
}


void MyArray::reSize(){
    capacity_ *= 2;
          double* tmp = arr_;
          arr_ = new double[capacity_];
          for(int i = 0; i < size_; ++i) 
              arr_[i] = tmp[i];
          delete[] tmp; 
}

void MyArray::addElement(const double& elem){
    if(size_ >= capacity_) reSize();
    arr_[size_++] = elem;
}

void MyArray::removeElement(int index){
    for(int i = index + 1; i < size_; ++i){
        arr_[i - 1] = arr_[i]; 
    }
    --size_; 
}

void MyArray::printm(){
    for(int i = 0; i < size_; i++){   
        std::cout << arr_[i] << " ";
    }
    std::cout << std::endl;
}

double MyArray::max(){
    double max = arr_[0];
    for(int i = 0; i < size_; ++i){
        if(arr_[i] > max){
            max = arr_[i];
        }
    }
    return max;
}

double MyArray::min(){
    double min = arr_[0];
        for(int i = 0; i < size_; ++i){
            if(arr_[i] < min){
                min = arr_[i];
            }
        }
    return min;
}