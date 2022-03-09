#include<stdio.h>
void main()
{
    int i,num,odd=0,even=0;
    printf("enter the value of num\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(i%2==0)
        even=even+i;
        else
        odd=odd+i;

    }
    printf("sum off even numbers= %d",even);
    printf("sum off odd numbers = %d",odd);
    
}