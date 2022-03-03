/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int no1,no2;
  float avg;
  
  printf("Enter first number:");
  scanf("%d",&no1);
  printf("Enter second number:");
  scanf("%d",&no2);

  avg=(no1+no2)/2.0;

  printf("Average is: %.2f\n",avg);
  
  
  return 0;
}

