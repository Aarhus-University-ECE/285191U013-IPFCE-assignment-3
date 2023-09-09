int mod(int m, int n) {
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

  return q, r, m, n;
}
