#include <iostream>
#include <string>
#include <fstream>
#include "Students.h"


using namespace std;

int main()
{
    ifstream InputFile;
    string file_name = "student_list.txt";
    string output_file_name = "final_grade.txt";
    Students cop3330(InputFile,file_name);

    cop3330.compute_all_final_grade(output_file_name);
}