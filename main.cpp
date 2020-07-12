# include<iostream>
# include<vector>
# include"coin_toss.hpp"
# include"statistics.hpp"

int main()
{
    CoinToss trial;
    Statistics statistics = trial;

    int num = 0;
    std::cout << "num: ";
    std::cin >> num;

    std::cout << 11.0 / 16.0 << std::endl;
    std::cout << statistics.average(num) << std::endl;
}
