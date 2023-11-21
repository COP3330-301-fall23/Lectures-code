#include <iostream>
using namespace std;

class Array
{
  private:
    double *ptr;
    int array_size;

  public:
    Array();
    Array(int size);
    ~Array();
    void setArray_size(int);
    void setArray(const double values[]);
    double* getArray() const;
    int getArray_size() const;

    // overloading operators
    const Array& operator=(const Array& Obj);
    friend ostream& operator<<(ostream&, const Array&);
    Array operator+(const Array& Obj1 ) const;

};