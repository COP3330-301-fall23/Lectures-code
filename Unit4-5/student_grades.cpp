#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;

int main()
{
    string student_name;
    string student_list;
    double test1, test2, test3;
    int option;
    bool flag;
    ifstream InputFile;

    InputFile.open("student_list.txt");

    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }


    cout<<right<<setfill('*')<<setw(25)<< " Menu " <<setfill('*')<<setw(20)<<"."<<endl;
    cout<<"1. Find a student in the list."<<endl;
    cout<<"2. Compute the final grade of one student."<<endl;
    cout<<"3. Compute the final grade of all the students."<<endl;
    cout<<setfill('*')<<setw(45)<<"."<<endl;
    cout<<"Please select an option> ";
    cin >> option;

    switch (option)
    {
    case 1:
         flag = false;
         cout<<"Write the student's name: ";
         cin >> student_name;
         while (!InputFile.eof())
         {
            InputFile >> student_list;
            InputFile >> test1 >> test2 >> test3;

            if(student_name == student_list)
            {
                flag =true;
                cout<<"Student's name: "<<student_name<<endl;
                cout<<"Grades: "<< test1<<", "<<test2<<", "<<test3<<endl;
                break;
            }
          
         }
         if (!flag)
        {
            cout<<"The student is not in the list."<<endl;
        }  
         
        /* code */
        break;
    case 2:
        flag = false;
         cout<<"Write the student's name: ";
         cin >> student_name;
         while (!InputFile.eof())
         {
            InputFile >> student_list;
            InputFile >> test1 >> test2 >> test3;

            if(student_name == student_list)
            {
                flag =true;
                cout<<"Student's name: "<<student_name<<endl;
                cout<<"Grades: "<< test1<<", "<<test2<<", "<<test3<<endl;
                cout<<"Final grade: "<<(test1+test2+test3)/3<<endl;
                break;
            }
          
         }
         if (!flag)
        {
            cout<<"The student is not in the list."<<endl;
        }  
         
        /* code */
        break;
        
    default:
        break;
    }
}