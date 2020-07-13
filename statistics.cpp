# include<sstream>
# include<vector>
# include<string>
# include"statistics.hpp"

template<class T>
using vector = std::vector<T>;
using string = std::string;

Statistics::Statistics(ITrial& trial, int num_samples)
    : trial(trial), num_samples(num_samples)
{
    auto predicts = getPredicts();
    average = getAverage(predicts);
    dispersion = getDispersion(predicts);
}

string Statistics::operator()()
{
    std::stringstream result;
    result << "average:    " << "     " << average    << std::endl;
    result << "dispersion: " << "     " << dispersion << std::endl;
    return result.str();
}

vector<double> Statistics::getPredicts()
{
    vector<double> predicts;
    for (int i = 0; i < num_samples; i++)
        predicts.push_back(this->trial());

    return predicts;
}

double Statistics::getAverage(vector<double> predicts)
{
    double sum = 0;
    for (auto predict : predicts)
         sum += predict;

    return sum / predicts.size();
}

double Statistics::getDispersion(vector<double> predicts)
{
    double sum = 0;
    double average = getAverage(predicts);
    for (auto predict : predicts)
         sum += (predict - average) * (predict - average);

    return sum / predicts.size();
}
