# include<random>
# include"math.hpp"

int Math::toss()
{
    int result = 0;
    for(int i = 0; i < k; i++)
    {
        result += Math::make_random();

        if (result < 0)
        {
            result = 0;
            break;
        }
    }

    return result;
}

int Math::make_random()
{
    std::random_device rnd;
    if(rnd() % 2 == 0)
        return -Math::n;
    return Math::m;
}
