#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always +n or -n (success)
 *
 *Description: Function main inputs and outputs
 */

int main(void)
  
{

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if(n>0)
{
printf("is positive\n");
}

else if(n==0)
{
printf("is zero\n");
}

else
{
printf("is negative\n");
}
return (0);
  
}
