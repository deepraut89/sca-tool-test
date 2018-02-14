#define TEST_FUNC(a, b, num,...) test_func(a, b, num, ##__VA_ARGS__)

void test_func(int a, int b, int num, ...);

struct test_struct {
  int i;
  int j;
};
