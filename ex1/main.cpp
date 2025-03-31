#include <iostream>
#include "helpers.hpp"
#include <tuple>
#include <vector>
#include "InSort.hpp"
#include "QuickSort.hpp"


int main(int, char**){
    std::tuple<int, std::vector<int>> tup;
    tup = read_input();
    int len;
    std::vector<int> list;
    len = std::get<0>(tup);
    list = std::get<1>(tup);
    std::cout << "len: " << len << std::endl;
    std::cout << "list: ";
    for (const auto& elem : list)
        std::cout << elem << " ";
    std::cout << std::endl;

    mine_insertion_sort(&list);
    std::cout << "After sorting insertion sort: " << std::endl;
    for (const auto& elem : list)
        std::cout << elem << " ";
    std::cout << std::endl;

    std::vector<int> test_vec = {8,1,9,0,4,1,4,6,10,15,3,2,20};
    int test_length = 13;

    std::cout << "list2: ";
    for (const auto& elem : test_vec)
        std::cout << elem << " ";
    std::cout << std::endl;

    qs(&test_vec, 0, test_length - 1);
    std::cout << "After sorting quick sort: " << std::endl;
    for (const auto& elem : test_vec)
        std::cout << elem << " ";
    std::cout << std::endl;
}
