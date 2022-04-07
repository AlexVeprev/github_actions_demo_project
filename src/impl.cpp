#include <oneapi/tbb.h>

unsigned int get_uint_sum(unsigned int start, unsigned int end) {
    return oneapi::tbb::parallel_reduce(oneapi::tbb::blocked_range<unsigned int>(start, end), 0,
    [](oneapi::tbb::blocked_range<unsigned int> const& r, unsigned int init) -> unsigned int {
        for (unsigned int v = r.begin(); v != r.end(); v++  ) {
            init += v;
        }
        return init;
    },
    [](unsigned int lhs, unsigned int rhs) -> unsigned int {
        return lhs + rhs;
    }
    );
}
