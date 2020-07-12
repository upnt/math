# pragma once
# include"trial.hpp"

class CoinToss : public ITrial
{
    public:
        double operator()();
    private:
        double getMovement();

};
