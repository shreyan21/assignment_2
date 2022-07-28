#include<stdio.h>
/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
int main()
{
    int x;
    scanf("%d",&x);
    printf("New number is %d\n",x%10*100+x/10);
    return 0;

}