# IPFCE-assignment-2-introduction

```bash
python autograde.py
```

## Week 2: Development and Derivation of (simple) programs
Submit your solutions via the assignment dropbox on blackboard, Week 2. Please make
sure to submit your solutions **by next Monday.** If an exercise requires you to write C
code, then create a new C file (i.e. do not combine exercises into a single C file).  
Note: the **Challenge** exercises are optional.

## Exercise

1. Write a program to compute the Fibonacci numbers. Your program should take an
   integer n as input from the user, and it then calculates and prints each Fibonacci
   number from the first Fibonacci number to the nth. For example, a typical execution
   where the user inputs n = 7 could be:  
   7  
   0 1 1 2 3 5 8
   
2. Implement a Linear Congruent Random Number Generator computing:
   xi+1 = (a * xi + c) % m  
   . . . where m > 0, 0 < a < m, 0 < c < m. The first value, called the seed, is x0. Your
   program should take four integer inputs from the user for a; m; c; x0. Given these
   input values from the user, your program should compute all values x0; x1; ... ; x(m-1)
   and print them to the console as a table in the form:  
   n0 x0  
   n1 x1  
   ...  
   n(m-1) x(m-1)  
   
   Answer the following question: What pattern do you observe?  

3. Compute the integer root r of of a number n such that r2 <= n < (r + 1)2. Your
   program should take integer n as input from the user and print the integer root r.
   An example execution where the user inputs n = 17 could be:  
   17  
   4  
   
4. What does the following program compute? The result is stored in variable y. Hint:
   Try printing out the variable values for each iteration (you could try to work out
   these values by hand with pen and paper, and then by writing and modifying the
   program by adding printf statements).  
   int y = 0;  
   int i = 0;  
   1  
   int j = 1;  
   int k = 6;  
   while (i < n)  
   {  
      y += j;  
      i += 1;  
      j += k;  
      k += 6;  
   }  
   
5. **Challenge:** What does the following program compute?
   int x = 0;  
   int y = 0;  
   int h = b - a / 2;  
   while (x <= a)  
   {  
      printf("(%d,%d)", x, y);  
      if (h < 0)  
      {  
         h += b;  
      }  
      else  
      {  
         h += b - a;  
         y++;  
      }  
         x++;  
   }  
   
   Improve the output of the program to support your hypothesis.  
   
6. **Challenge:** (PC-7.6.7) I collect marbles (colourful small glass balls) and want to
   buy boxes to store them. The boxes come in two types,  
   **Type 1:** each such box costs c1 øre and can hold exactly n1 marbles  
   **Type 2:** each such box costs c2 øre and can hold exactly n2 marbles  
   I want each box to be filled to its capacity, and also to minimise the total cost of
   buying them. Help me find the best way to distribute my marbles among the boxes.  
   **Input** The input begins with a line containing the integer n (1 <= n <= 2,147,395,600).The
      second line contains c1 and n1, and the third line contains c2 and n2. Here, c1,
      c2, n1, and n2 are all positive integers having values smaller than 46;341.   
   **Output** Print a line containing the minimum cost solution (two nonnegative integers m1 and m2, 
      where mi = number of type i boxes required if one exists.  
      Otherwise print \failed".  
      If a solution exists, you may assume that it is unique.  
   
   **Example**  
      43  
      2  
      1 3  
      2 4  
      31 1  
      40  
      5 9  
      5 12  
      failed  
   **Hint** Consider the unit costs for the two cases.  
