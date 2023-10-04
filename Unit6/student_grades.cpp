#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;


void find_student(ifstream &InputFile);
void compute_final_grade(ifstream &InputFile);
void compute_all_final_grade(ifstream &InputFile, string name_OutputFile);
int menu();

int main()
{
    int option;
    ifstream InputFile;
    string name_OutputFile;
    InputFile.open("student_list.txt");
    string resp;

    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }

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
            cout<<"Provide the output file name: ";
            cin >> name_OutputFile;
            compute_all_final_grade(InputFile, name_OutputFile);    
            break;    
        default:
            break;
        } 

            cout<<"Do you want select any other option: ";
            cin >> resp;  
    }    
    while(resp == "yes");
    
}

/*******************************************************************
*                       User-Defined Functions
*******************************************************************/

void find_student(ifstream &InputFile)
{
    bool flag;
    string student_name;
    flag = false;
    double test1, test2, test3;
    string student_list;

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
}

void compute_final_grade(ifstream &InputFile)
{
    bool flag;
    string student_name;
    flag = false;
    double test1, test2, test3;
    string student_list;
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

}

void compute_all_final_grade(ifstream &InputFile, string name_OutputFile)
{

    double test1, test2, test3;
    string student_list;


    ofstream OutputFile;
    OutputFile.open(name_OutputFile);


    while (!InputFile.eof())
    {
    InputFile >> student_list;
    InputFile >> test1 >> test2 >> test3;

    OutputFile<<"Student's name: "<<student_list<<" ";
    OutputFile<<"Final grade: "<<(test1+test2+test3)/3<<endl;    
    }
    cout<<"All grades were computed"<<endl;
}

int menu()
{
    int option;
    cout<<right<<setfill('*')<<setw(25)<< " Menu " <<setfill('*')<<setw(20)<<"."<<endl;
    cout<<"1. Find a student in the list."<<endl;
    cout<<"2. Compute the final grade of one student."<<endl;
    cout<<"3. Compute the final grade of all the students."<<endl;
    cout<<setfill('*')<<setw(45)<<"."<<endl;
    cout<<"Please select an option> ";
    cin >> option;

    return option;
}