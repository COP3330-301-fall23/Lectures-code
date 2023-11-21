#include <iostream>
#include "LandCalculator.h"
using namespace std;


int main()
{
    int num_l, land;
    double price;

    cout<<"Do the number of selling land: ";
    cin >> num_l;
    LandCalculator Landlord_1(num_l);

    cout<<"Type the number of land to quote: ";
    cin>>land;
    cout<<"Provide the prive per feet: ";
    cin>> price;
    Landlord_1.compute_price(land, price);


    double *width;
    width = Landlord_1.get_width();

    for(int i=0; i<num_l; i++)
    {
        cout<< *(width+i)<< " "; 
    }
    cout<<endl;

    *width = 120;

    double *width2;
    width2 = Landlord_1.get_width();

    for(int i=0; i<num_l; i++)
    {
        cout<< *(width2+i)<< " "; 
    }
    cout<<endl;

}