#include<stdio.h>
// swap without using third variable
int main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("Values after swap are a=%d  and b=%d\n",a,b);
    return 0;
}