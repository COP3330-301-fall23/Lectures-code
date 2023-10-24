#include "Students.h";
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
        InputFile.ignore(100,' ');
        for(int j=0; j<3; j++)
        {
            InputFile >> grades[index][j];
        }
        index++;
    }
    InputFile.close();
}