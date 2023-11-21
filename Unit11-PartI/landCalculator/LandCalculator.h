class LandCalculator
{
    private:
        int num_land;
        double *length;
        double *width;

    public:
        LandCalculator(){};
        ~LandCalculator();
        LandCalculator(int num_land);
        LandCalculator(const LandCalculator& Obj);
        int getNumLand();
        double* get_length() const;
        double* get_width() const;
        void setNumLand(int num);
        void set_length(const double array_length[]);
        void set_width(const double array_width[]);
        void compute_price(int land, double price_per_feet);
        void print_inf();
};