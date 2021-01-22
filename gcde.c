#include<stdio.h>
int main()
{
    int a,b,t,gcd;
    scanf("%d%d",&a,&b);
    if(a==0)
    {
        gcd=a;
    }
    else if(b==0)
    {
        gcd=b;
    }
    else
    {
        while(b!=0)
        {
            t=a%b;
            a=b;
            b=t;
        }
        gcd=a;
    }

    printf("gcd is %d",gcd);

    return 0;
}
