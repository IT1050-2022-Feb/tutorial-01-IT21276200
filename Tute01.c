/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int i=1;
  float tot=0,avg,marks;

for(i=1; i<3; i++)
{
  printf("Enter marks %d:",i);
  scanf("%f",&marks);

  tot+=marks;
}
 
avg=tot/2;

printf("The Average=%.2f",avg);
  return 0;
}

