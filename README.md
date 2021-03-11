# IPFCE-Week-3-Development and analysis of correct programs

```bash
python autograde.py
```

Submit your solutions via the assignment dropbox on blackboard, Week 3. Please make
sure to submit your solutions by next Monday. If an exercise requires you to write C
code, then create a new C file (i.e. do not combine exercises into a single C file).  

Note: the **Challenge** exercises are optional.


## Excercise

1. What is the output of the following program?    
```c
   int i, j;
   for (i = 1; i <= n; i++)  
   {  
      for (j = 1; j <= i; j++)  
      printf("*");  
      printf("\n");  
   } 
 ```
   
2. Write a program that produces the following output printing one * at a time using 
   loops discussed in the lecture.
   ```
            *  
           ***  
          *****  
         *******  
        *********  
       ***********  
            *  
   ``` 
   
3. (PC-6.6.1) Recall the definition of the Fibonacci numbers  
   <img src="https://render.githubusercontent.com/render/math?math=f_1 = 1">  
   <img src="https://render.githubusercontent.com/render/math?math=f_2 = 2">  
   ![image](https://user-images.githubusercontent.com/67692726/110827690-9f0bfb80-8296-11eb-948a-ca8e00f7f10f.png)

   Given two numbers a and b, calculate how many Fibonacci numbers are in the range <img src="https://render.githubusercontent.com/render/math?math=[a,b]">.
   
   **Input** The input contains several ranges. Each range consists of two non-negative
   integer numbers a and b, specified on a separate input line. Input is terminated
   by a = b = 0; otherwise, <img src="https://render.githubusercontent.com/render/math?math=a <= b <= 2^{31}-1">. The numbers a and b are given with
   no superfluous leading zeros.  
   **Output** For each test case output on a single line the number of Fibonacci numbers <img src="https://render.githubusercontent.com/render/math?math=f_i"> with
   <img src="https://render.githubusercontent.com/render/math?math=a<f_i<=b">.  
   **Example**  
      10 100  
      5  
      1300 8000  
      4  
      0 0  
   
4. Write a program that computes the sum on the left hand side using two nested loops.
  
   ![image](https://user-images.githubusercontent.com/67692726/110826304-3bcd9980-8295-11eb-8600-bedde01527d3.png)  
   
   Provide test cases and test the program using the expression on the right hand side
   of the equation. Make sure all statements of your program are tested. Hint: review
   the lecture slides *Testability of a program*.

5. The following program computes integer numbers q and r such that q = m/n and
   r = m % n. What are the intermediate values of q and r? Test the program so that
   all statements are executed at least once in one of the test cases.  
   ```c
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
   
   ```
   
6. The following program should compute all prime numbers smaller or equal to n.
   ```c
   int i, j;
   for (i = 2; i <= n; i++)
   {
      j = 2;
      while (j <= i/j && i%j == 1)
         j++;
      if (j > i/j) printf("%d ", i);
   }
   
   ```
   Correct the program and conrm that it has the desired behavior.
   



8. **Challenge:** The number of decomposition into two squares. The following program
   computes the number v of pairs (a; b) such that ![image](https://user-images.githubusercontent.com/67692726/110827186-1e4cff80-8296-11eb-8d8d-07c4548529d9.png)
   for some n. As an example 1 can be decomposed as ![image](https://user-images.githubusercontent.com/67692726/110827302-3886dd80-8296-11eb-8b53-9e97525b7f40.png)
   , so two pairs (0; 1) and (1; 0), i.e. v equals 2.
  ```c 
  int v = 0;
   int a = 0;
   int b = 0;
   int d;
   while (b*b < n)
      b++;
   while (m <= n)
   {
      d = a * a + b * b;
      d = n - d;
      if (d = 0)
      {
         v++; b++;
      }
      else if (d > 0)
         a++;
      else
         b++;
   }
   ```
   
   Improve the output of the program to support your hypothesis.  
