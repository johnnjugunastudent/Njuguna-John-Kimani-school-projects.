#include<stdio.h>
int main(){
int num1;
printf("Enter the value of firstnumber\n");
scanf("%d", &num1);
printf("%d", num1);

int num2;
printf("Enter the value of the second number\n");
scanf("%d", &num2);
printf("%d", num2);

int sum;
sum = num1+ num2;
printf("sum of numbers %d+%d=%d", num1, num2, sum);
return 0;
}