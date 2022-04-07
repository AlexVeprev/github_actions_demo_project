unsigned int get_uint_sum(unsigned int start, unsigned int end) {
    unsigned int sum = 0;
    for (unsigned int i = start; i < end; i++) {
        sum += i;
    }
    return sum;
}
