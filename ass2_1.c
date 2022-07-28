#include<stdio.h>
//Write a program to print unit digit of a given number
int main()
{
    int x;
    scanf("%d",&x);
    printf("Unit digit of %d is %d\n",x,x%10);
    return 0;
}