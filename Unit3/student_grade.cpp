#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string student1_name;
    string student2_name;
    double student1_grade1;
    double student1_grade2;
    double student1_grade3;
    double student2_grade1;
    double student2_grade2;
    double student2_grade3;
    double aver_grade_st1;
    double aver_grade_st2;

    ifstream InputFile;
    ofstream OutputFile;

    InputFile.open("student_grades.txt");

    if(!InputFile)
    {
        cout<<"Error: path file or file does not exits.";
        exit(1);
    }

    InputFile >> student1_name;
    InputFile >> student1_grade1 >> student1_grade2 >> student1_grade3;

    InputFile >> student2_name;
    InputFile >> student2_grade1 >> student2_grade2 >> student2_grade3;

    InputFile.close();

    aver_grade_st1 = (student1_grade1 + student1_grade2 + student1_grade3)/3;
    aver_grade_st2 = (student2_grade1 + student2_grade2 + student2_grade3)/3;

    OutputFile.open("student_average.txt");

    OutputFile << student1_name <<" Final Grade: "<<aver_grade_st1<<endl;
    OutputFile << student2_name <<" Final Grade: "<<aver_grade_st2<<endl;
    OutputFile.close();
    // cout<<"Student Name: "<<student1_name<< "Grades: "<< student1_grade1<< "," <<student1_grade2<<", "<<student1_grade3;


}