// INSERTION SORT


#include <iostream>
#include "helpers.hpp"
#include <tuple>
#include <vector>
#include "InSort.hpp"
#include "QuickSort.hpp"


int main(int, char**){
    bool print = false;


    std::tuple<int, std::vector<int>> tup;
    tup = read_input();
    int len;
    std::vector<int> list;
    len = std::get<0>(tup);
    list = std::get<1>(tup);
    std::vector<int>cpy = list;
    std::cout << "len: " << len << std::endl;
    std::cout << "original list: ";
    for (const auto& elem : list)
        std::cout << elem << " ";
    std::cout << std::endl;

    if (len > 40) {
        print = true;
    }

    mine_insertion_sort(&list, print);

    std::cout << "Tablica wejściowa: " << std::endl;
    print_array(&cpy);

    std::cout << "Tablica po sortowaniu: " << std::endl;
    print_array(&cpy);
    std::cout << "Liczba porównań: " << get_comparisons() << std::endl;
    std::cout << "Liczba przestawień: " << get_moves() << std::endl;

    return 0;
}
