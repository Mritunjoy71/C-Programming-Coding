#include<stdio.h>
int main()
{
    int n,first,last,dn;
    printf("enter your number");
    scanf("%d",&n);
    last=n%10;
    dn=(int)log10(n);
    first=(int)n/pow(10,dn);
    printf("first digit is %d\n",first);
    printf("last digit is %d",last);


    return 0;
}
