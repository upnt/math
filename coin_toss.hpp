# pragma once
# include"trial.hpp"

class CoinToss : public ITrial
{
    public:
        static constexpr auto AVERAGE    = 0.685;
        static constexpr auto DISPERSION = 1.5898;
        double operator()();
    private:
        double getMovement();

};
