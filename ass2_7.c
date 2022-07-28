#include<stdio.h>
// position of first one in lsb
int main()

{   
    int x;
    scanf("%d",&x);
    int k=1;
while(x!=1)
{
  
if(x%2==1)
{
printf("Position of first one in lsb is %d",k);
break;
}
k++;
x=x/2;


}
if(x==1)
printf("Position of first one in lsb is %d\n",k);
return 0;
}