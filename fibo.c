#include<stdio.h> 

void main()
{
    int a=0;
    int b=1;
    int c,n;

    printf("Enter your number:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        c=a+b;
        printf("\n%d",a);
        a=b;
        b=c;
    }

}