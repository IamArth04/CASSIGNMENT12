#include<stdio.h>
int sum(int);
int main()
{
    int k,a;
    printf("Enter a number: ");
    scanf("%d",&a);
    k=sum(a);
    printf("Sum of first N natural number is %d",k);
}
int sum(int n)
{
    int s;
    if(n==1)
       return 1;
    s=n+sum(n-1);
    return (s);
}
