#include <iostream>
#include <string>

#include "impl.h"

int main(int argc, char** argv) {
    unsigned int end = std::stoi(argv[1]);
    std::cout << get_uint_sum(0, end + 1) << std::endl;
    return 0;
}
