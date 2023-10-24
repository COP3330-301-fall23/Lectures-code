#include <string>

using namespace std;

class PersonType
{
    private:
        string first_name;
        string last_name;
        string middle_name;
    public:
        PersonType(){};
        PersonType(string fName, string lName, string mName);
        ~PersonType();
        void set_firstName(string fName);
        void set_lastName(string lName);
        void set_MidName(string mName);
        bool comparering_firstName(string fName);
        bool comparering_lastName(string lName);
        void print();
};