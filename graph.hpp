# pragma once
# include"statistics.hpp"
# include<vector>

template<class T>
using vector = std::vector<T>;

class Graph
{

    private:
        vector<double> freq_table;
        double max(vector<double>);

};
