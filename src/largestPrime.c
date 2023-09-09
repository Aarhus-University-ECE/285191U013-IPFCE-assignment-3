#include <assert.h>
#include <stdio.h>

int largestPrime(int n) {
  int i, j, prime;
  for (i = 2; i <= n; i++) {
    j = 2;
    while (j <= i / j && i % j == 1)
      j++;
    if (j > i / j)
      prime = i;
  }
  return prime;
}

int main() {
  assert(largestPrime(42) == 41);
  // Add your own tests here

  return 0;
}
