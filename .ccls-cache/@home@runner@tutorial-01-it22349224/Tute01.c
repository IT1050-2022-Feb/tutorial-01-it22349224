/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a,b,sum=0;
  float avg;
  printf("enter2num");
  scanf("%d%d",&a,&b);
  sum=a+b;
  avg=sum/2;
  printf("avg %f",avg);
  
  
  return 0;
}

