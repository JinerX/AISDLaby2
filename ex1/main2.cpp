// Data generation

#include "helpers.hpp"
#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::string mode = argv[1];
        if (mode == "gen_random") {
            if (argc < 3) {
                std::cerr << "Usage: " << argv[0] << " gen_random n" << std::endl;
                return 1;
            }
            int n = std::stoi(argv[2]);
            int max_val = 2 * n - 1;
            generate_random_input(n, max_val);
            return 0;
        } else if (mode == "gen_sorted") {
            if (argc < 3) {
                std::cerr << "Usage: " << argv[0] << " gen_sorted n" << std::endl;
                return 1;
            }
            int n = std::stoi(argv[2]);
            int max_val = 2 * n - 1;
            generate_sorted_input(n, max_val, false);
            return 0;
        } else if (mode == "gen_desc") {
            if (argc < 3) {
                std::cerr << "Usage: " << argv[0] << " gen_desc n" << std::endl;
                return 1;
            }
            int n = std::stoi(argv[2]);
            int max_val = 2 * n - 1;
            generate_sorted_input(n, max_val, true);
            return 0;
        }
    }
}
