 #include<stdio.h>
 int main()
 {
     float rate;
     do{
        printf("enter positive rate");
        scanf("%f,&rate");
     }while(rate<0);
     return 0;

 }
