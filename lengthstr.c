#include<stdio.h>
int str_len(char str[])
{
    int i,length=0;

    for(i=0;str[i]!='\0';i++)
        length++;
    return length;
}
int main()
{
    char country[100];
    int length;
    while(1==scanf("%s",country))
    {
        length=str_len(country);
    printf("length : %d\n",length);



    }

    return 0;
}
