#include "Array.h"
#include <iostream>

using namespace std;

Array::Array()
{
    ptr = nullptr;
    array_size = 0;
}

Array::Array(int size)
{
    array_size = size;
    ptr = new double[array_size];

    for(int i =0; i<array_size; i++)
    {
        cout<<"provide the elements "<< i+1 << "of your array: ";
        cin >> ptr[i];
    }
}

Array::~Array()
{
    if(ptr != nullptr)
    {
        delete ptr;
        ptr = nullptr;
    }
}

void Array::setArray_size(int size)
{
    array_size = size;
}

void Array::setArray(const double values[])
{
    if(ptr == nullptr)
    {   
        ptr = new double[array_size];
        for(int i=0; i< array_size; i++)
        {
            ptr[i] = values[i];
        }
    }
}

double* Array::getArray() const
{
    return this->ptr;
}

int Array::getArray_size() const
{
    return this->array_size;
}

const Array& Array::operator=(const Array& Obj)
{
    if(this != &Obj)
    {
        delete [] ptr;
    }
    array_size = Obj.array_size;

    ptr = new double[array_size];
    for(int i=0; i< array_size; i++)
    {
        ptr[i] = Obj.ptr[i];
    }
    return *this;
}

ostream& operator<<(ostream& os, const Array& Obj)
{
    for(int i=0; i< Obj.array_size; i++)
    {
        os << Obj.ptr[i]<<" ";
    }
    return os;
}

Array Array::operator+(const Array& Obj1 ) const
{
       Array result;
       result.array_size = Obj1.array_size;
       result.ptr = new double[array_size];

       for(int i=0; i<array_size; i++)
       {
         result.ptr[i] = ptr[i] + Obj1.ptr[i]; 
       } 
       return result;
}

