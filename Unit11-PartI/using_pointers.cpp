#include <iostream>

using namespace std;

int main()
{
 
 int x = 25;
 int *ptr; 

 ptr = &x;

 cout<<"Memory allocation: "<<ptr<<endl;
 cout<<"Value pointed: "<<*ptr<<endl;

 *ptr = 75;

 cout<<"value of x: "<<x<<endl;


}