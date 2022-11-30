#include<stdio.h>
#include<conio.h>
int main()
{
    long int a,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("It is not a Prime Number");
            break;
        }
    }
    if(i==a)
    {
        printf("It is a Prime Number");
    }
    return 0;
}
