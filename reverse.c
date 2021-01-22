#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    do{
        d=n%10;
    printf("%d",d);
    n=n/10;
        }while(n!=0);
    return 0;

}
