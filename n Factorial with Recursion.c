
// The factorial of denoted by n!
// integer <= n
//
//n! = n * (n-1) * (n-2 ) ... * 1
//
//5! = 5 * 4 * 3 * 2 * 1 =120
//
// Recursion Way

#include <stdio.h>
#include <strings.h>

int factorial (int n);
int main(void) {

  int n=0;
  int fact =1;
   
  printf("Enter a Number:");
  scanf("%d", &n);

  fact = factorial(n);
 
  printf("fact: %d\n",fact);
  return 0;
}

int factorial (int n)
{
  if (n==1 ) return 1;
  return n * factorial (n - 1);
}
