#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;


void find_student(ifstream &InputFile, string file_name);
void compute_final_grade(ifstream &InputFile, string file_name);
void compute_all_final_grade(ifstream &InputFile, string name_OutputFile, string file_name);
void load_student_name(ifstream &InputFile, string name[], string file_name);
void load_grades(ifstream &InputFile, string file_name, double grade[][3]);
int menu();

int main()
{
    int option;
    ifstream InputFile;
    string name_OutputFile;
    string resp;
    string file_name = "student_list.txt";
    string name[6];
    double grade[6][3];
    int len_list = 6;

    do{
        option = menu();
        switch (option)
        {
        case 1:
            find_student(InputFile,file_name);
            break;
        case 2:
            compute_final_grade(InputFile,file_name);
            break;  
        case 3:
            cout<<"Provide the output file name: ";
            cin >> name_OutputFile;
            compute_all_final_grade(InputFile, name_OutputFile, file_name);  
        case 4:
            load_student_name(InputFile, name, file_name);  
            for(int index=0; index< 6; index++){cout<<name[index]<<endl;}
            break;  
        case 5:
            load_grades(InputFile, file_name, grade);   
            for(int i =0; i<6; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cout<<grade[i][j]<<" ";
                }
                cout<<endl;
            }   
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

void find_student(ifstream &InputFile, string file_name)
{
    bool flag;
    string student_name;
    flag = false;
    double test1, test2, test3;
    string student_list;
    InputFile.open(file_name);
    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }

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
    InputFile.close(); 
}

void compute_final_grade(ifstream &InputFile, string file_name)
{
    bool flag;
    string student_name;
    flag = false;
    double test1, test2, test3;
    string student_list;
    flag = false;

    InputFile.open(file_name);
    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }

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

    InputFile.close();

}

void compute_all_final_grade(ifstream &InputFile, string name_OutputFile, string file_name)
{

    double test1, test2, test3;
    string student_list;

    InputFile.open(file_name);
    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }

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
    InputFile.close();
}

int menu()
{
    int option;
    cout<<right<<setfill('*')<<setw(25)<< " Menu " <<setfill('*')<<setw(20)<<"."<<endl;
    cout<<"1. Find a student in the list."<<endl;
    cout<<"2. Compute the final grade of one student."<<endl;
    cout<<"3. Compute the final grade of all the students."<<endl;
    cout<<"4. Load infomation."<<endl;
    cout<<"5. Load grades."<<endl;
    cout<<setfill('*')<<setw(45)<<"."<<endl;
    cout<<"Please select an option> ";
    cin >> option;

    return option;
}

void load_student_name(ifstream &InputFile, string name[], string file_name)
{
    int index = 0;
    InputFile.open(file_name);
    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }


    while (!InputFile.eof())
    {
        InputFile >> name[index];
        InputFile.ignore(1000,'\n');
        index++;
    }
    InputFile.close();
}

void load_grades(ifstream &InputFile, string file_name, double grade[][3])
{
    int index = 0;
    InputFile.open(file_name);

    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }

    while(!InputFile.eof())
    {
        InputFile.ignore(100,' ');
        for(int j=0; j<3; j++)
        {
            InputFile >> grade[index][j];
        }
        index++;
    }
    InputFile.close();

}

void edit_student_name(string name[],int len_list)
{
    string old_name;
    string new_name;
    cout<<"Write student's full name to modify: ";
    cin >> old_name;

    cout<<endl<<"Write new name: ";
    cin >> new_name;

    for(int index=0; index<len_list; index++)
    {
        if(old_name == name[index])
        {
            name[index] = new_name;
            break;
        }
    }
}