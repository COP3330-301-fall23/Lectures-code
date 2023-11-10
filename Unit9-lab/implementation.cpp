#include "Students.h"
#include <fstream>
#include <iostream>

Students::Students(const Students& object)
{
    num_of_stud = object.num_of_stud;
    num_of_test = object.num_of_test;
    name = new string[object.num_of_stud];
    grades = new double*[num_of_stud];

    for(int j=0;j<num_of_test;j++)
    {
        grades[j] = new double[num_of_test];
    }

    for(int i =0; i< num_of_stud; i++)
    {
        name[i] = object.name[i];
        for(int j=0;j<num_of_test;j++)
        {
            grades[i][j] = object.grades[i][j];
        }
    }
}

Students::~Students()
{
    delete []name;

    for(int i=0; i<num_of_test; i++)
    {
        delete []grades[i];
    }
    delete []grades;
}


Students::Students(ifstream &InputFile, string file_name, int num_test, int num_of_students)
{
    //Defining dynamically arrays
    double var_grade;
    num_of_stud = num_of_students;
    num_of_test = num_test;
    name = new string[num_of_students];
    grades = new double *[num_of_students];

    for(int i=0; i<num_of_students; i++)
    {
        grades[i] = nullptr;
    }

    for(int i=0; i<num_of_students; i++)
    {
        grades[i] = new double[num_test];
        for(int j=0; j<num_test; j++)
        {
            grades[i][j]= j;
        }
    }

    

    int index = 0;
    InputFile.open(file_name);

    if(!InputFile)
    {
        cout<<"Error: the path or file does not exist";
        exit(1);
    }

    while(!InputFile.eof())
    {
        InputFile >> name[index];
        InputFile.ignore(100,'\n');
        // InputFile >> *(grades[index]) >> *(grades[index]+1) >> *(grades[index]+2);
        // for(int i=0; i<num_test; i++){
        //     InputFile >> var_grade;
        //     grades[index][i]= var_grade;} 
        // index++;
        cout<<index<<endl;
    }
    cout<<"at this point."<<endl;
    InputFile.close();
}

void Students::compute_all_final_grade(string name_OutputFile)
{

    ofstream OutputFile;
    OutputFile.open(name_OutputFile);

    for(int i=0; i< num_of_stud; i++)
    {
        OutputFile<<"Student's name: "<<name[i]<<" ";
        OutputFile<<"Final grade: "<<(grades[i][0]+grades[i][1]+grades[i][2])/3<<endl;   
    }
    cout<<"All grades were computed"<<endl;
    OutputFile.close();
}

