#include <vector>
#include <tuple>
#include <iostream>
#include <string>
#include <sstream>
#include "helpers.hpp"
#include <random>
#include <algorithm>
#include <functional>

int COMPARISONS = 0;
int MOVES = 0;


std::tuple<int, std::vector<int>> read_input() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream stream(input);

    int len = 0;
    std::vector<int> list;

    int i = 0;
    while(1) {
        int n;
        stream >> n;
        if(!stream)
            break;
        if (i == 0 ) {
            len = n;
            i++;
        }
        else {
            list.push_back(n);
        }
    }
    return {len, list};
}

void generate_random_input(int length, int max_val) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, max_val);

    std::vector<int> numbers(length);
    for (int& num : numbers) {
        num = dist(gen);
    }

    std::ostringstream oss;
    oss << length;
    oss << " ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) oss << " ";
        oss << numbers[i];
    }

    std::string out = oss.str();

    std::cout << out << std::endl;
}

void generate_sorted_input(int length, int max_val, bool desc = false) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, max_val);

    std::vector<int> numbers(length);
    for (int& num : numbers) {
        num = dist(gen);
    }


    if (desc) {
        std::sort(numbers.begin(), numbers.end(), std::greater<>());
    }
    else {
        std::sort(numbers.begin(), numbers.end());
    }


    std::ostringstream oss;
    oss << length;
    oss << " ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) oss << " ";
        oss << numbers[i];
    }

    std::string out = oss.str();

    std::cout << out << std::endl;
}


void print_array(const std::vector<int>& arr) {
    for (const auto& elem : arr)
        std::cout << elem << " ";
    std::cout << std::endl;
}


bool less_than(int a, int b) {
    COMPARISONS++;
    return a < b;
}
bool greater_than(int a, int b) {
    COMPARISONS++;
    return a > b;
}
void assign_val(int &destination, int value) {
    MOVES++;
    destination = value;
}
void swap_vals(int &a, int &b) {
    int temp = a;
    assign_val(a, b);
    assign_val(b, temp);
}

int get_comparisons() {
    return COMPARISONS;
}

int get_moves() {
    return MOVES;
}
