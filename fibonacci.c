#include<stdio.h>
int main()
{
    int n,p1,p2,next,i;
    scanf("%d",&n);
    if(n==1||n==2)
        printf("1");

    else{
        p1=1;
        p2=2;
        for(i=3;i<=n;i++){
            next=p1+p2;
            printf("%d\t",next);
            p1=p2;
            p2=next;}
    }
    printf("%d",next);
    return 0;

}











