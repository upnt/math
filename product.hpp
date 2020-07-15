# include"trial.hpp"

class Product : public ITrial
{
    public:
        Product(int, int);

        const int num_left;
        const int num_right;

        const double average;
        const double dispersion;

        double operator()() const;

    private:
        static double calcAverage(int, int);
        static double calcDispersion(int, int, double);
};
