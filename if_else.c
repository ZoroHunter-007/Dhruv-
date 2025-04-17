#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");   
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is greater\n",a);
    }
    else{
        if(b>c)
        {
            printf("%d is greater\n",b);
        }
        else{
            printf("%d is greater\n",c);
        }
        
    }
    
}
    
