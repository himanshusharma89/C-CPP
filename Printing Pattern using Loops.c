// This code is the solution for Hackerrank question-Printing Pattern using Loops

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
scanf("%d", &n);
int len = 2*n-1;
int min1,min2,min;
  for (int i=0; i <len; i++) 
  {
      for (int j=0; j<len; j++) 
      {
        min1 = i<=len-i ? i : len-i-1;
        min2 = j<=len-j ? j : len-j-1;
        min = min1<=min2 ? min1 : min2;
        printf("%d ",n-min);
      }
      printf("\n");
  }
}
