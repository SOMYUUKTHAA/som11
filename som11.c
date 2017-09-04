#include <stdio.h>
int main()
{
int base,expo,res=1;
printf("Enter a base number: ");
scanf("%d", &base);
printf("Enter an exponent: ");
scanf("%d", &expo);
while (expo!= 0)
{
res*= base;
--expo;
}
printf("Answer = %d", res);
return 0;
}
