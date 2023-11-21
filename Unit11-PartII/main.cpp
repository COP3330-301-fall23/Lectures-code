#include "Array.h"
#include <iostream>

using namespace std;

int main()
{
    int array_length;

    cout<<"Please set the size of your array: ";
    cin >> array_length;

    Array array_1(array_length);

    Array array_2;

    array_2 = array_1; //my overloaded assigment operator;

    cout<<"Printing the elements of my array_2: ";
    cout<<array_2; //my insertion overload operator;

    cout<<"\n printing the information of my result array: ";
    Array array_result = array_2 + array_1; // my addition overload operator

    cout<<array_result;

}