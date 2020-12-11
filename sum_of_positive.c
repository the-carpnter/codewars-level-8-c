int positive_sum(const int *values, size_t count) {
  return count ? values[count-1] > -1 ? values[count-1] + positive_sum(values, count-1): positive_sum(values, count-1) : 0;
}
