#include <iostream>

using namespace std;


int main()
{
    const int SIZE_ARRAY = 5;
    int *ptr;
    int i;

    int my_array[]={4,10,25,7,9};

    ptr = my_array;


    for(i=0; i<SIZE_ARRAY; i++)
    {
        cout<<my_array[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<SIZE_ARRAY; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<SIZE_ARRAY; i++)
    {
        cout<<*(ptr+i)<<" ";
    }

}