# include<vector>
# include<string>
# include"trial.hpp"

template<class T>
using vector = std::vector<T>;
using string = std::string;

class Statistics
{
    public:
        Statistics(ITrial&, int num);
        string operator()();
        static double getAverage(vector<double>);
        static double getDispersion(vector<double>);

    private:
        ITrial& trial;
        int num_samples;
        double average;
        double dispersion;
        vector<double> getPredicts();
        
};
