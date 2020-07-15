# include<vector>
# include<string>
# include"trial.hpp"

template<class T>
using vector = std::vector<T>;
using string = std::string;

template<int num_samples=1000>
class Sample
{
    public:
        Sample(ITrial&);
        vector<double> operator()();

    private:
        double average;
        double dispersion;
        
        static vector<double> calcPredicts(ITrial&);
        static double calcAverage(vector<double>);
        static double calcDispersion(vector<double>);
};

template<int num_samples>
Sample<num_samples>::Sample(ITrial& trial)
{
    auto predicts = calcPredicts(trial);

    this->average     = calcAverage(predicts);
    this->dispersion  = calcDispersion(predicts);
}

template<int num_samples>
vector<double> Sample<num_samples>::operator()()
{
    vector<double> result;

    result.push_back(average);
    result.push_back(dispersion);

    return result;
}

template<int num_samples>
vector<double> Sample<num_samples>::calcPredicts(ITrial& trial)
{
    vector<double> predicts;
    for (int i = 0; i < num_samples; i++)
        predicts.push_back(trial());

    return predicts;
}

template<int num_samples>
double Sample<num_samples>::calcAverage(vector<double> predicts)
{
    double sum = 0;
    for (auto predict : predicts)
         sum += predict;

    return sum / predicts.size();
}

template<int num_samples>
double Sample<num_samples>::calcDispersion(vector<double> predicts)
{
    double sum = 0;
    double average = calcAverage(predicts);
    for (auto predict : predicts)
         sum += (predict - average) * (predict - average);

    return sum / predicts.size();
}
