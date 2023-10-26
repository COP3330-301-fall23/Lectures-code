#include "QuadraticEq.h"
#include <iostream>

using namespace  std;

int main()
{
    double sol1, sol2;
    double av = 2;
    double bv = 15;
    double cv = 4;

    QuadraticEq Eq1;  
    QuadraticEq Eq2(av, bv, cv);

    Eq2.find_roots(sol1,sol2);
    cout<<"Print value a: "<<Eq2.get_a()<<endl;
    cout<<"Print value b: "<<Eq2.get_b()<<endl;
    cout<<"Print value c: "<<Eq2.get_c()<<endl;
    cout<<"Solution1: "<<sol1<<endl;
    cout<<"Solution2: "<<sol2<<endl;

    cout<<"Working with Eq1 "<<endl;
    double eq1_a = 7;
    double eq1_b = 20;
    double eq1_c = 1;
    Eq1.set_a(eq1_a);
    Eq1.set_b(eq1_b);
    Eq1.set_c(eq1_c);

    Eq1.find_roots(sol1,sol2);
    cout<<"Solution1: "<<sol1<<endl;
    cout<<"Solution2: "<<sol2<<endl;

    
}
