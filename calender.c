#include <stdio.h>




int main ()
{
    int i,j,k,m,g,y,q,h;

    int ara[12];
    printf ("enter month(1-12):");
    scanf ("%d",&m);
    printf ("enter year:");
    scanf ("%d",&y);
    printf("SAT SUN MON TUE WED THU FRI");
    if((y%4)!=0||((y%100)==0)&&(y%400)!=0)
    {
        int ara[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    }
    else{
        int ara[12]={31,29,31,30,31,30,31,31,30,31,30,31};

    }
    for (q=1;q<=ara[m-1];q++){


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




    for (j=1;j<=(h+1)*3+h ; j++)
        printf (" ") ;


    for (i=1,k=h;i<=ara[m-1];i++,k++){
        if ((k+1)%7==0)
            printf ("\n");
        if (i<=9){
            printf ("   ");
            printf ("%d",i);
        }
        else {
            printf ("  ");
            printf ("%d",i);
       }
    }
    }
    return 0;
}






















