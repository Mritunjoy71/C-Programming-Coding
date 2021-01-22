#include<stdio.h>
int main()
{
    int i;
    int total_marks[]={51,34,6,31,87,64,61,89,9,90,89,67,78,69,54,83,73,74,75,76,77,79,57,68,67,66,65,64,84,93,92,99,100};
    int marks_count[101];
    for(i=0;i<100;i++){
        marks_count[i]=0;

    }
    for(i=0;i<40;i++){
        marks_count[total_marks[i]]++;

    }
    for(i=50;i<=100;i++){
        printf("marks:%d count:%d\n",i,marks_count[i]);
    }







    return 0;
}





























