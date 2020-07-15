# include<iostream>
# include<vector>
# include"coin_toss.hpp"
# include"product.hpp"
# include"sample.hpp"

int main()
{
    std::vector<ITrial*> trials;

    int right, left;

    std::cout << "right: ";
    std::cin >> right;
    std::cout << "left: ";
    std::cin >> left;

    auto product = new Product(left, right);
//  trials.push_back(new CoinToss());
    trials.push_back(product);

    std::cout << product->average    << std::endl;
    std::cout << product->dispersion << std::endl;

    for (const auto trial : trials)
    {
        auto sample    = new Sample<>(*trial);
        for(auto predict : (*sample)())
            std::cout << predict << std::endl;
    }

}
