#include "Students.h"
#include <fstream>
#include <iostream>

Students::Students(ifstream &InputFile, string file_name)
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
        InputFile >> name[index];
        InputFile >> grades[index][0]>> grades[index][1]>> grades[index][2];   
        index++;
    }

    InputFile.close();
}

void Students::compute_all_final_grade(string name_OutputFile)
{

    ofstream OutputFile;
    OutputFile.open(name_OutputFile);

    for(int i=0; i< size_array; i++)
    {
        OutputFile<<"Student's name: "<<name[i]<<" ";
        OutputFile<<"Final grade: "<<(grades[i][0]+grades[i][1]+grades[i][2])/3<<endl;   
    }
    cout<<"All grades were computed"<<endl;
    OutputFile.close();
}

