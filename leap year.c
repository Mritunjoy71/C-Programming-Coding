#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n%4!=0)||(n%100==0)&&(n%400!=0))
        printf("not leap year");
    else
        printf("leap year");
    return 0;
}
