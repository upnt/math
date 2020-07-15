# include<random>
# include"coin_toss.hpp"

CoinToss::CoinToss() :
    average(0.685), dispersion(1.598)
{

}

double CoinToss::operator()() const
{
    int place = 0;
    for(int i = 0; i < 5; i++)
    {
        place += CoinToss::getMovement();

        if (place < 0)
        {
            place = 0;
            break;
        }
    }
    return place;
}

double CoinToss::getMovement() const
{

    constexpr int MINUS = -1;
    constexpr int PLUS = 1;
    std::random_device rnd;

    if(rnd() % 2 == 0)
        return MINUS;
    return PLUS;
}
