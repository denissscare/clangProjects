
class MyArray{
    private:
    double * arr_;
    int size_{};
    int capacity_{};

    public:
    MyArray();
    bool isEmpty() const{return size_ == 0;};
    int size() const {return size_;};
    int capacity() const {return capacity_;}
    double find(int index){return arr_[index];};

    void reSize();
    void addElement(const double& elem);
    void removeElement(int index);
    void printm();

    double max();
    double min();

    double& operator[](int index){return arr_[index];}

    ~MyArray(){delete[] arr_; }
    

};
