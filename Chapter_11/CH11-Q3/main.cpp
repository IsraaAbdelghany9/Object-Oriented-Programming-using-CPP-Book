#include <iostream>

using namespace std;

class Array
{
    int* ptr;
    int size_;
public:
    Array(int s)
    {
        size_ = s;
        ptr = new int[s];
    }
    ~Array()
    {
        delete[] ptr;
    }
    int& operator [] (int j)
    {
        return *(ptr+j);
    }
    Array operator = (Array &a)
    {
        size_ = a.size_;
        ptr[size_];
        for(int j=0; j<size_; j++)
            ptr[j] = a.ptr[j];
    }
};

int main()
{
    const int ASIZE = 10;
    Array arr(ASIZE);
    Array arr2(3);
    for(int j=0; j<ASIZE; j++)
        arr[j] = j*j;

    for(int j=0; j<ASIZE; j++)
        cout << arr[j] << ' ';
    cout << endl;

    arr2 = arr;
    for(int j=0; j<ASIZE; j++)
        cout << arr2[j] << ' ';
    cout << endl;
    return 0;
}