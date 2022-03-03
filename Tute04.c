/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int maximum(int no1,int no2);
int minimum(int no1,int no2);
int multiply(int no1,int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d\n ", minimum(no1, no2));
   printf("%d\n", maximum(no1, no2));
   printf("%d\n ", multiply(no1, no2));
   return 0;
}
int maximum(int no1,int no2)
{
  int result1;
  if(no1>no2)
    result1=no1;
  else
    result1=no2;
  return result1;
}
int minimum(int no1,int no2)
{
  int result2;
  if(no1<no2)
    result2=no1;
  else
    result2=no2;
  return result2;
}
int multiply(int no1,int no2)
{
  int result3=no1*no2;
  return result3;
}