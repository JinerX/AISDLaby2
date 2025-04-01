// QUICKSORT
#include <iostream>
#include "helpers.hpp"
#include "QuickSort.hpp"
#include <vector>
#include <tuple>


int main() {
    bool print = false;


    std::tuple<int, std::vector<int>> tup;
    tup = read_input();
    int len;
    std::vector<int> list;
    len = std::get<0>(tup);
    list = std::get<1>(tup);
    std::vector<int>cpy = list;
    std::cout << "original list: ";
    for (const auto& elem : list)
        std::cout << elem << " ";
    std::cout << std::endl;

    if (len < 40) {
        print = true;
    }

    qs(&list, 0, len - 1, print);

    std::cout << "Tablica wejściowa: " << std::endl;
    print_array(&cpy);

    std::cout << "Tablica po sortowaniu: " << std::endl;
    print_array(&list);
    std::cout << "Liczba porównań: " << get_comparisons() << std::endl;
    std::cout << "Liczba przestawień: " << get_moves() << std::endl;

    return 0;
}