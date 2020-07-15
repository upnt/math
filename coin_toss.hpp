# pragma once
# include"trial.hpp"

class CoinToss : public ITrial
{
    public:
        CoinToss();
        double operator()() const;
        const double average;
        const double dispersion;

    private:
        double getMovement() const;

};
