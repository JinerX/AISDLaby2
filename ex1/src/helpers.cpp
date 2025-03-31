#include <vector>
#include <tuple>
#include <iostream>
#include <string>
#include <sstream>
#include "helpers.hpp"

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
