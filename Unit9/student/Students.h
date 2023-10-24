#include <string>

using namespace std;
class Students
{
    private:
        string name[6];
        double grades[6][3];
        int size_array;

    public:
    Students(){};
    Students(ifstream &InputFile, string file_name);
    ~Students(){};
    void find_student(ifstream &InputFile, string file_name);
    void compute_final_grade(ifstream &InputFile, string file_name); 
    void compute_all_final_grade(ifstream &InputFile, string name_OutputFile, string file_name);
    void load_student_name(ifstream &InputFile, string name[], string file_name);
    void load_grades(ifstream &InputFile, string file_name, double grade[][3]);
};