#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    double r1,r2;
    printf("enter the three numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("root does not exist");
        
    }
    else
    {
        r1=(-b-sqrt(d))/2*a;
        r2=(-b+sqrt(d))/2*a;
        printf("roots of the given no is:%.2lf,%.2lf",r1,r2);
        
    }
    return 0;
    }
