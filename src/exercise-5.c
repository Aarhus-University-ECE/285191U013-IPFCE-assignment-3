#include <stdio.h>
#include <assert.h>

typedef struct {
  int q;
  int r;
} mod_result_t;

mod_result_t mod(int m, int n) {
  int q = 0;
  int r = m;
  int b = n;

  while (r >= b)
    b *= 2;

  while (b != n)
    {
      q *= 2;
      b /= 2;
      if (r >= b)
	{
	  q += 1;
	  r -= b;
	}
    }

  return (mod_result_t) { .q = q, .r = r };
}

int main(int argc, char **argv) {

	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	mod_result_t result = mod(m, n);
	printf("q = %d, r = %d\n", result.q, result.r);

    // Example of a test case
	// The `assert()` function takes a condition and aborts the program if the
	// condition is false.
    // You can use this pattern to write your own test cases.
	result = mod(10, 3);
	assert(result.q == 3 && result.r == 1);
    // Your test cases here
    //

	return 0;
}
