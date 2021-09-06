int largestPrime(int n){
int i, j, prime;
for (i = 2; i <= n ; i++)
    {
    j = 2;
    while (j <= i/j && i%j == 1)
        j++;
    if (j > i/j) prime = i;
    }
    return prime;
}