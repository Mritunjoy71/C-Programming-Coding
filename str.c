#include<stdio.h>
int main()
{
    char love[]={'s','h','e','i','s','\0','s','e','x','y'};
    printf("%s\n",love);
    int length,i;
    length=5;
    for(i=0;i<length;i++)
    {
        if(love[i]>=97 && love[i]<=122)
            love[i]='A'+(love[i]-'a');

    }
    printf("%s\n",love);

    return 0;
}





