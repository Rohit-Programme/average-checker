//write a programme to print the average of a three numbers.
#include<stdio.h>
int main(){
   float no1,no2,no3,average;

   printf("enter the no 1:");
   scanf("%f",&no1);

   printf("enter the no2: ");
   scanf("%f",&no2);

   printf("enter the no3 :");
   scanf("%f",&no3);

   average = (no1+no2+no3)/3.0;

   printf("the average is: %f",average);

   }

