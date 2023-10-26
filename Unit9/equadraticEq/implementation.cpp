#include "QuadraticEq.h"
#include <cmath>
#include <iostream>

using namespace std;

QuadraticEq::QuadraticEq(double a_value, double b_value, double c_value)
{
    a = a_value;
    b = b_value;
    c = c_value;
}

double QuadraticEq::get_a()
{
    return a;
}

double QuadraticEq::get_b()
{
    return b;
}

double QuadraticEq::get_c()
{
    return c;
}

void QuadraticEq::set_a(double a_v)
{
    a = a_v;
}

void QuadraticEq::set_b(double b_v)
{
    b = b_v;
}

void QuadraticEq::set_c(double c_v)
{
   c = c_v; 
}

void QuadraticEq::find_roots(double & sol1, double & sol2)
{
    double disc = pow(b,2)- 4*a*c;

    if(disc >= 0)
    {
        sol1 = (-b - sqrt(disc))/(2*a);
        sol2 = (-b + sqrt(disc))/(2*a);
    }
    else
    {
        cout<<"The equaiton does not have real-solution."<<endl;
    }
}