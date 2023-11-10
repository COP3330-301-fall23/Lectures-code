#include <string>

using namespace std;
class Students
{
    private:
        string* name;
        double **grades;
        int num_of_stud;
        int num_of_test;

    public:
        Students(const Students& object); //Copy constructor
        Students(){}; //Default Contructor
        Students(ifstream &InputFile, string file_name, int num_test, int array_size); //overload contstructor
        ~Students(); //Destructor
    void compute_all_final_grade(string name_OutputFile);
    void find_student(ifstream &InputFile, string file_name);
    // void compute_final_grade(ifstream &InputFile, string file_name);   
    // void load_student_name(ifstream &InputFile, string name[], string file_name);
    // void load_grades(ifstream &InputFile, string file_name, double grade[][3]);
};