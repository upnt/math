# include<iostream>
# include<vector>
# include"math.hpp"

int main()
{
    Math math;
    std::vector<double> predicts;

    int num = 0;

    std::cout << "num: ";
    std::cin >> num;

    for (int i = 0; i < num; i++)
        predicts.push_back((double)math.toss());

    double sum = 0;

    for(const auto& predict : predicts)
    {
	std::cout << predict << std::endl;
        sum += predict;
    }

    std::cout << 11.0 / 16.0 << std::endl;
    std::cout << sum / predicts.size() << std::endl;

}
