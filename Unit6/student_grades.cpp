#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void find_student(ifstream &InputFile)
{
    string student_name, student_list; 
    bool flag;  
    double test1, test2, test3;
    cout<<"Write the student's name: ";
    cin >> student_name;
    flag = true;

    InputFile.open("student_list.txt"); 
    while(!InputFile.eof())
    {
        InputFile >> student_list;
        InputFile >> test1 >> test2 >> test3;

        if(student_list == student_name)
        {
            flag = false; 
            cout<<"Student's name: "<<student_list<<endl;
            cout<<"Grades :"<< test1 <<", "<<test2<<", "<<test3;
            break; 
        }
    }
    if(flag)
    {
        cout<<"The student is not in the list."<<endl; 
    }
    InputFile.close();
}

void compute_final_grade(ifstream &InputFile)
{
    string student_name, student_list; 
    bool flag;  
    double test1, test2, test3;
    cout<<"Write the student's name: ";
    cin >> student_name;
    flag = true;

    InputFile.open("student_list.txt"); 
    while(!InputFile.eof())
    {
        InputFile >> student_list;
        InputFile >> test1 >> test2 >> test3;

        if(student_list == student_name)
        {
           flag = false; 
           cout<<"Student's name: "<<student_list<<endl;
           cout<<"Grades :"<< test1 <<", "<<test2<<", "<<test3<<endl;
           cout<<"Final grade: "<<(test1+test2+test3)/3<<endl;
           break; 
        }
    }
    if(flag)
    {
       cout<<"The student is not in the list."<<endl; 
    }
    InputFile.close();
}

int menu()
{
    int option;
      cout<<right<<setfill('*')<<setw(25)<<" Menu "<<setfill('*')<<setw(20)<<"."<<endl;
 cout<<"1. Find a student in the list. "<<endl;
 cout<<"2. Compute the student's final grade. "<<endl;
 cout<<"3. Compute all students' final grade. "<<endl;
 cout<<right<<setfill('*')<<setw(45)<<"."<<endl;
 cout<<"Select an option: "; 
 cin >> option;
  return option;
}

void compute_all_grades(ifstream &InputFile, string name_outputFile)
{
    string student_list; 
    double test1, test2, test3;

    ofstream OutputFile;
    OutputFile.open(name_outputFile);

    InputFile.open("student_list.txt"); 
    while(!InputFile.eof())
    {
        InputFile >> student_list;
        InputFile >> test1 >> test2 >> test3;
        OutputFile << student_list <<"-->";
        OutputFile << "Final grade: "<<(test1+test2+test3)/3<<endl;
    }   
    InputFile.close();
}


int main()
{
  ifstream InputFile;
  int option;
  string name_outputFile, resp;


//   if(!InputFile)
//   {
//     cout<<"Error: The path or the file does not exist."<<endl;
//     exit(1);
//   }

do{
    option = menu();

    switch (option)
    {
    case 1:
        find_student(InputFile);
        break;
    case 2:
        compute_final_grade(InputFile);
        break;
    case 3:
        cout<<"Write output file name: ";
        cin >> name_outputFile;
        compute_all_grades(InputFile,name_outputFile);  
        break;  
    default:
        break;
    }
    cout<<"Do you want to select other option: ";
    cin >> resp; 
}while(resp == "yes");
}