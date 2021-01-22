#include<stdio.h>
void ra(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("element %d : ",i);
        scanf("%d",&a[i]);}
}

void pa(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("element %d : %d ",i,a[i]);
}
void mergeara(int arr1[],int size1,int arr2[],int size2,int arr3[])
{
    int i,j;
    for(i=0;i<size1;i++)
        arr3[i]=arr1[i];
    for(i=size1,j=0;i<size1+size2;i++,j++)
        arr3[i]=arr2[j];
}
int main()
{
    int n1,n2;

    printf("arr1 elements? ");
    scanf("%d",&n1);
    printf("arr2 elements? ");
    scanf("%d",&n2);
    int arr1[n1],arr2[n2],arr3[n1+n2];
    ra(arr1,n1);
    ra(arr2,n2);
    mergeara(arr1,n1,arr2,n2,arr3);
    pa(arr3,n1+n2);
    return 0;

}






















