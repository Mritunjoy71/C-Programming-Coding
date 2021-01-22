#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max>b){
        if(max>c)
            max=a;
        else
            max=c;
    }
    else{
        max=b;
        if(max>c)
            max=b;
        else
            max=c;
    }
    printf("maximum=%d",max);
    return 0;
}
