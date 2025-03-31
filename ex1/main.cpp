#include <iostream>
#include "helpers.hpp"
#include <tuple>
#include <vector>
#include "InSort.hpp"


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
    std::cout << "After sorting: " << std::endl;
    for (const auto& elem : list)
        std::cout << elem << " ";
    std::cout << std::endl;
}
