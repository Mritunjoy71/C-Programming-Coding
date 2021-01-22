#include<stdio.h>
int main()
{
    int x,n ,i;
    scanf("%d %d",&x,&n);
    float px=1,sign=1,fx=1,term,sum;
    for(i=1;i<=n;i++){
        px=px*x;
        sign=sign*-1;
        fx=fx*i;
        term=sign*px/fx;
        sum+=term;
        printf("%d^%d=%f\n",x,i,px);
        printf("%d^%d=%f\n",-1,i,sign);
        printf("%d!=%d\n",i,fx);
    }
    printf("%f\n",sum);
    return 0;
}
