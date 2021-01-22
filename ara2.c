#include<stdio.h>
int main()
{
    int temp[31],i,min,max,avg;
    int days;

    printf("how manyh days in the months? ");
    scanf("%d",&days);

    for (i=0;i<days;i++){
        printf("enter nonday temperature for day %d",i+1);
        scanf("%d",&temp[i]);
    }

        avg=0;
        for (i=0;i<days;i++)
            avg=avg+temp[i];
        printf("average temperarure: %d\n",avg/days);

        min=200;
        max=0;

        for(i=0;i<days;i++){
            if(min>temp[i])
                min=temp[i];
            if(max<temp[i])
                max=temp[i];
        }
        printf("min temp %d\n",min);
        printf("max temp %d\n",max);










    return 0;
}













