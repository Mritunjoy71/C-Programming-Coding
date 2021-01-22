#include<stdio.h>
int main()
{
    int base,exponent,power=1,i;
    printf("enter base ");
    scanf("%d",&base);
    printf("enter exponent ");
    scanf("%d",&exponent);
    for(i=1;i<=exponent;i++){
        power=power*base;
    }
    printf("power=%d",power);



    return 0;
}












