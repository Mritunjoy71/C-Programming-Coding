#include<stdio.h>
#include<conio.h>
int main(void)
{
    char mess[80];
    int i;

    printf("enter message(less than 80 characters)\n");

    for (i=0;i<80;i++){
        mess[i]=getche();

    }
    printf("\n");
    for (i=0;mess[i]!='\r';i++)
        printf("%c",mess[i]+1);
    return 0;

}











