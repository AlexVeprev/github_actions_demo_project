#include <iostream>
#include <string>

#include "impl.h"

int main(int argc, char** argv) {
    unsigned int end = std::stoi(argv[1]);
    unsigned int expected_result = std::stoi(argv[2]);

    unsigned int result = get_uint_sum(0, end + 1);

    if (result != expected_result) {
        std::cout << "FAIL: got " << result << ", but expected " << expected_result << std::endl;
        return 1;
    }

    return 0;
}
