#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0)
            printf("%d %d",i,n/i);
            break;

    }

    return 0;
}