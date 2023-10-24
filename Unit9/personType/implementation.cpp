#include "PersonType.h"
#include <iostream>

PersonType::PersonType(string fName, string lName, string mName)
{
    first_name = fName;
    last_name = lName;
    middle_name = mName;
}

PersonType::~PersonType(){}

void PersonType::set_firstName(string fName)
{
    first_name = fName;
}

void PersonType::set_lastName(string lName)
{
    last_name = lName;
}

void PersonType::set_MidName(string Mname)
{
    middle_name = Mname;
}

bool PersonType::comparering_firstName(string fName)
{
    bool value = false;

        if(fName == first_name)
        {
            value = true;
        }

    return value;    
}

bool PersonType::comparering_lastName(string lName)
{
    bool value = false;
        if(lName == last_name)
        {
            value = true;
        }

    return value;   
}

void PersonType::print()
{
    cout<<"First name: "<< first_name<<endl;
    cout<<"Last name: "<<last_name<<endl;
    cout<<"Middle name: "<<middle_name<<endl;
}