/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<0)
    {
    x=-x;
    printf("%d\n",-(x*10+y));
    }
    else
    {
        printf("%d\n",x*10+y);
    }
    return 0;
}