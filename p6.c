//pass fail
#include<stdio.h>
int main (){
int num;
printf("enter the number whatever you gain \n");
scanf("%d",&num);
if (num>=80){
        printf("You Got A+ \n");
        if(num>=70){
            printf("You Got A \n");
        }
        if(num>=60){
            printf("You Got A- \n");
        }
        if(num>=50){
            printf("You Got B \n");
        }
        if(num>=40){
            printf("You Got c \n");
        }
}
else{
    printf("Apni Fail ....ei next");
}


return 0;
}
