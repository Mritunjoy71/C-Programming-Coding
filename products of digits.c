#include<stdio.h>
int main()
{
    int n,sum=1;
    printf("enter number ");
    scanf("%d",&n);

    while(n!=0){
        sum*=n%10;
        n=n/10;
        }
        printf("sum of digits is %d",sum);
        return 0;



}