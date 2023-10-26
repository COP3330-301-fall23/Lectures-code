class QuadraticEq
{
    private:
        double a;
        double b;
        double c;

    public:
        QuadraticEq(){};
        QuadraticEq(double a_value, double b_value, double c_value);
        double get_a();
        double get_b();
        double get_c();
        void set_a(double a_v);
        void set_b(double b_v);
        void set_c(double c_c);
        void find_roots(double & sol1, double & sol2);
};