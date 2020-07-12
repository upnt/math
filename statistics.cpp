# include"statistics.hpp"

Statistics::Statistics(ITrial& trial)
    : trial(trial)
{
}

double Statistics::average(int num)
{
    double sum = 0;

    for (int i = 0; i < num; i++)
        sum += this->trial();

    return sum / num;
}
