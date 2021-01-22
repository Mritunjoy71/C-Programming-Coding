#include<stdio.h>
int main()
{
    char str1[]="bangla",str2[]="desh",str3[12];
    int i,j,l1=6,l2=4;
    for(i=0,j=0;i<l1;i++,j++)
    str3[i]=str1[j];
    for(i=0;i<l2;i++,j++)
        str3[j]=str2[i];
    str3[j]='\0';
    printf("%s\n",str3);
    return 0;

}










