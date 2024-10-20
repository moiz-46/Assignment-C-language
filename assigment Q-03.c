#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("enter temperture in celsius:");
scanf("%f, &celsius");
fahrenheit=(celsius*9.0/5.0)+32;
printf("%.2f celsius is equilvent to %.2f fahrenheit \n",celsius,fahrenheit);
return 0;
}

