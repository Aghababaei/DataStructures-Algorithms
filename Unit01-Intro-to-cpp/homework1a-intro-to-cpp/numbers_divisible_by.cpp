#include <iostream>
#include <string>

int main(int argc, char const* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " start end divisor" << std::endl;
        return 1;
    }

    int start = std::stoi(argv[1]);
    int end = std::stoi(argv[2]);
    int divisor = std::stoi(argv[3]);

    if (start <= end) {
        for (int i = start; i <= end; ++i) {
            if (i % divisor == 0) {
                std::cout << i << std::endl;
            }
        }
    } else {
        for (int i = start; i >= end; --i) {
            if (i % divisor == 0) {
                std::cout << i << std::endl;
            }
        }
    }

    return 0;
}
