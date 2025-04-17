#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&a,&b);
    printf("Addition is %d\n",add(a,b));
    
}