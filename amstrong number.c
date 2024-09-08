/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
#include<math.h>
void main()
{
int n,copy,digits=0,sum=0;

printf("enter n:");
scanf("%d",&n);
copy=n;
while(copy>0)
{
   sum= sum+pow((copy%10),digits);
    copy=copy/10;
}
if(sum==n)
{
    printf("it is an amstrong number");
}
else
{
    printf("it is not an amstrong number");
}
}