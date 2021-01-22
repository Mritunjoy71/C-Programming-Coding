#include<stdio.h>
#define max 30
//function read array
void readarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("enter %d element",i+1);
        scanf("%d",&a[i]);
}
//f printaraay
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]);

}
//reverse function
void reversearray(int a[],int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[(n-1)-i];
        a[(n-1)-i]=temp;
    }
}
int main()
{
    int a[max];
    int n,item,pos;
    printf("how many elements?");
    scanf("%d",&n);
    printf("enter element of array");
    readarray(a,n);
    return 0;
}


























