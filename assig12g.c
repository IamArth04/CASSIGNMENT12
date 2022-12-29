#include<stdio.h>
int hcf(int , int);
int main()
{
    int k,a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    k=hcf(a,b);
    printf("HCF of two number is %d",k);
}
int hcf(int x, int y)
{
    int s;
    if(y!=0)         
       return hcf(y,x%y);              
    return x;
}
