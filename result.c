#include<stdio.h>
int main()
{
    int ft_marks[10]={45,67,98,46,89,98,34,76,48,92};
    int st_marks[10]={45,35,64,87,59,56,91,44,85,56};
    int final_marks[10]={86,27,94,83,67,89,49,82,81,90};
    int i,marks,count;
    double total_marks[10];






    for(i=0;i<10;i++){
        total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }
    for(i=1;i<=10;i++){
        printf("roll no:%d\ttotal_marks %0.01f\n",i,total_marks[i-1]);
    }

    for(marks=50.0;marks<=100.0;marks++){
        count=0;
        for(i=0;i<10;i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
    }
    printf("marks %d count %d\n",marks,count);
    return 0;
}



















