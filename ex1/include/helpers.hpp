#include <vector>
#include <tuple>


#if !defined(HELPERS_HPP)
#define HELPERS_HPP

std::tuple<int, std::vector<int>> read_input();

void generate_random_input(int length, int max_val);

void generate_sorted_input(int length, int max_val, bool ascending);

void print_array(std::vector<int>* array);

bool less_than(int a, int b);

bool greater_than(int a, int b);


void assign_val(int &destination, int value);

void swap_vals(int &a, int &b);

int get_comparisons();

int get_moves();
#endif // HELPERS_HPP