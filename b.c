#include<stdio.h>
int main()
{
    int fahr,step;
    step=20;
    for(fahr=0;fahr<=300;fahr=fahr+step)
        printf("%3d%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    return 0;
}
