#include<stdio.h>
int main()
{
    int n1,n2,n,i;
    scanf("%d%d",&n1,n2);
    for(n=n1;n<=n2;n++){
        for(i=2;i*i<=n;i++)
            if(n%i==0)
            break;
        if(i*i>n)
            printf("%d\n",n);
    }
    return 0;
}








