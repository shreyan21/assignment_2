#include<stdio.h>
//Write a program to swap values of two int variables
int main()
{
    int temp,a,b;
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
    return 0;
}