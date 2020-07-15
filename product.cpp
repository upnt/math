# include<random>
# include"product.hpp"

Product::Product(int num_left, int num_right) :
    num_left(num_left), num_right(num_right), 
    average(calcAverage(this->num_left, this->num_right)),
    dispersion(calcDispersion(this->num_left, this->num_right, this->average))
{

}

double Product::operator()() const
{
    std::random_device rnd;
    auto right = rnd() % num_right + 1;
    auto left  = rnd() % num_left  + 1;

    return (double)( right * left );
}

double Product::calcAverage(int num_left, int num_right)
{
    return (num_left + 1) * (num_right + 1) / 4.0;
}

double Product::calcDispersion(int num_left, int num_right, double average)
{
    auto result = 0.0;
    for(int i = 0; i < num_left; i++)
        for(int j = 0; j < num_right; j++)
            result += (i * j - average) * (i * j - average);

    return result / (num_left * num_right);
}
