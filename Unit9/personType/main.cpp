#include <iostream>
#include "PersonType.h"

using namespace std;

int main()
{
  string  fName, lName, mName;

  cout<<"Please provide the first name: ";
  cin >> fName;

  cout<<"Please provide the last name: ";
  cin >> lName;

  PersonType professor1;

  string  name = "Carlos"; 
  string last = "Theran";
  string middle = "Andres";
  PersonType professor2(name, last, middle);

  if(professor2.comparering_firstName(fName))
  {
    cout<<"The fist names are the same."<<endl;
  }
  else
  {
    cout<<"The fist names are not the same."<<endl;
  }

  
  professor1.set_firstName(fName);
  professor1.set_lastName(lName);
  professor1.print();



}