int numberofpairs (int n)
{

  int v = 0;
  int a = 0;
  int b = 0;
  int d;

  while (b * b < n)
    b++;

  while (a * a <= n)
  {
    d = a * a + b * b;
    d = n - d;
    if (d == 0)
	  {
      v++;
      b--;		
	  }
    else if (d > 0)
    	a++;
    else
	    b--;			
  }

  return v;
}
