#include<stdio.h>
/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
int main()
{
    int rupees;
    scanf("%d",&rupees);
    printf("%d rupees is equal to %0.3f USD\n",rupees,1/76.23*rupees);
    return 0;

}