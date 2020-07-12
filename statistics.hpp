# include"trial.hpp"

class Statistics
{
    public:
        Statistics(ITrial&);
        double average(int num);

    private:
        ITrial& trial;
};
