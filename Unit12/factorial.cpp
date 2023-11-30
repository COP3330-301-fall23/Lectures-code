#include <iostream>

using namespace std;

int fact(int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }
    else{return n*fact(n-1);}
}

int main()
{
   cout<<fact(4)<<endl;
   cout<<fact(6)<<endl;
}