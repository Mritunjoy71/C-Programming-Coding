#include<stdio.h>
int main()
{
    int y,m,q,h;
    printf("enter year:");
    scanf("%d",&y);
    printf("enter month(1-12): ");
    scanf("%d",&m);
    printf("enter day: ");
    scanf("%d",&q);

    if(m==1)
    {
        m=13;
        y=y-1;
    }
    if(m==2)
    {
        m=14;
        y=y-1;
    }
    h=(q+(26*(m+1))/10+y+y/4+6*(y/100)+y/400)%7;

    if(m==13){
        printf("january");
        y=y+1;
    }
    else if(m==14){
        printf("february");
        y=y+1;
    }

    else if(m==3)
        printf("march");
    else if(m==4)
        printf("april");
    else if(m==5)
        printf("may");
    else if(m==6)
        printf("june");
    else if(m==7)
        printf("july");
    else if(m==8)
        printf("august");
    else if(m==9)
        printf("september");
    else if(m==10)
        printf("october");
    else if(m==11)
        printf("november");
    else
        printf("december");

    printf(" %d,%d is ",q,y);
    if(h==0)
        printf("saturday");
    else if(h==1)
        printf("sunday");
    else if(h==2)
        printf("monday");
    else if(h==3)
        printf("tuesday");
    else if(h==4)
        printf("wednesday");
    else if(h==5)
        printf("thursday");
    else if(h==6)
        printf("friday");

    return 0;
}












































