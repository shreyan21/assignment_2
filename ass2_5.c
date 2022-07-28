#include<stdio.h>
// sum of digits of three digit number
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    printf("Sum of digits of %d is : ",a);
    if(a<0)
    a=-a;
    while(a)
    {
        sum+=a%10;
        a/=10;
    }
    printf("%d\n",sum);
    return 0;
}