#include <iostream>
#include <string>
#include <fstream>
#include "Students.h"


using namespace std;

int main()
{
    ifstream InputFile;
    int num_stud, num_of_test;
    cout<<"How many student are in the list: ";
    cin >> num_stud;

    cout<<"How manu test were graded: ";
    cin >> num_of_test;
    string file_name = "student_list.txt";
    string output_file_name = "final_grade.txt";
    Students cop3330(InputFile,file_name,num_stud,num_of_test);

   // cop3330.compute_all_final_grade(output_file_name);

    // double **array;
    // array = new double*[3];
    // for(int i=0; i<3; i++)
    // {
    //     array[i] = new double[2];
    // }

    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<2; j++)
    //     {
    //         array[i][j] = (i+1)*j;
    //         cout<<array[i][j]<<endl;
    //     }
    // }
    
}