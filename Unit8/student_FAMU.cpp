#include <iostream>
#include <string>


using namespace std;

struct student_FAMU
{
    string firstname;
    string lastname;
    string ID;
    string major;
    string Bday;
    string classif;
};

void print_student_info(student_FAMU student);


int main()
{
   student_FAMU student;

   cout<<"Provide student's firstname: ";
   cin >> student.firstname;
   
   cout<<"Provide student's lastname: ";
   cin >> student.lastname;

   cout<<"Provide student's ID: ";
   cin >> student.ID;

   cout<<"Provide student's major: ";
   cin >> student.major;

   cout<<"Provide student's Birthday: ";
   cin >> student.Bday;

   cout<<"Provide student's classification: ";
   cin >>student.classif;

  print_student_info(student);
}

/****************************************************************************
                            USER_DEFINED FUNCTIONS
*****************************************************************************/

void print_student_info(student_FAMU student)
{

   cout<<"********Printing student's Information********"<<endl;
   cout<<"Provide student's firstname: ";
   cout <<student.firstname<<endl;
   
   cout<<"Provide student's lastname: ";
   cout << student.lastname<<endl;

   cout<<"Provide student's ID: ";
   cout << student.ID<<endl;

   cout<<"Provide student's major: ";
   cout<< student.major<<endl;

   cout<<"Provide student's Birthday: ";
   cout<< student.Bday<<endl;

   cout<<"Provide student's classification: ";
   cout<<student.classif<<endl;

}



