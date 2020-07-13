# include<iostream>
# include<vector>
# include"coin_toss.hpp"
# include"statistics.hpp"

int main()
{
    int num = 0;
    std::cout << "num: ";
    std::cin >> num;

    CoinToss trial;
    Statistics statistics(trial, num);

    std::cout << "real average:    " << trial.AVERAGE    << std::endl;
    std::cout << "real dispersion: " << trial.DISPERSION << std::endl;
    std::cout << statistics() << std::endl;
}
