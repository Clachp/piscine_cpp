#include "PmergeMe.hpp"



std::vector<int> & mergeVector (std::vector<int> & vec_a, std::vector<int> & vec_b) {
    std::vector<int> vec_c;

    while(vec_a.begin() != vec_a.end() && vec_b.begin() != vec_b.end())
    {
        
        if (vec_a[0] > vec_b[0]) {
            vec_c.push_back(vec_b[0]);
            vec_b.erase(vec_b.begin());
        }
        else {
            vec_c.push_back(vec_a[0]);
            vec_a.erase(vec_a.begin());
        }
    }

    while (vec_a.begin() != vec_a.end()) {
        vec_c.push_back(vec_a[0]);
        vec_a.erase(vec_a.begin());
    }

     while (vec_b.begin() != vec_b.end()) {
        vec_c.push_back(vec_b[0]);
        vec_b.erase(vec_b.begin());
    }

    return vec_c;
}

std::vector<int> & mergeSortVetor(std::vector<int> & vec) {
    if (vec.size() == 1)
        return vec;
        
    std::vector<int> vec_a = mergeSortVetor(vec_a);
    std::vector<int> vec_b = mergeSortVetor(vec_b);

    return mergeVector(vec_a, vec_b);
}