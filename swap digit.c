#include<stdio.h>
#include<math.h>
int main()

{
    int n,last,first,digits,swapped;
    printf("enter number ");
    scanf("%d",&n);
    last=n%10;
    digits=(int)log10(n);
    first=(int)n/pow(10,digits);
    swapped=last*pow(10,digits);
    swapped=swapped+n%(int)pow(10,digits)-last;
    swapped=swapped+first;

    printf("%d",swapped);
        return 0;



}
