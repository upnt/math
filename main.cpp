# include<iostream>
# include<vector>
# include"coin_toss.hpp"

double get_average(ITrial&, int);

int main()
{
    CoinToss trial;
    int num = 0;
    std::cout << "num: ";
    std::cin >> num;

    std::cout << 11.0 / 16.0 << std::endl;
    std::cout << get_average(trial, num) << std::endl;
}

double get_average(ITrial& trial, int num)
{
    double sum = 0;

    for (int i = 0; i < num; i++)
        sum += trial();

    return sum / num;
}
