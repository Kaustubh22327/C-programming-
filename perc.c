//This program is used to calculate percentage of a student with  default value of 5 subjects . please use only if 5 subjects are there ....
#include <stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks in subject 1 out of 100 \n");
    scanf("%d",&sub1);
    printf("Enter the marks in subject 2 out of 100 \n");
    scanf("%d",&sub2);
    printf("Enter the marks in subject 3 out of 100 \n");
    scanf("%d",&sub3);
    printf("Enter the marks in subject 4 out of 100 \n");
    scanf("%d",&sub4);
    printf("Enter the marks in subject 5 out of 100 \n");
    scanf("%d",&sub5);
    int sum=sub1+sub2+sub3+sub4+sub5;
    printf("The sum of all subjects is %d \n",sum);
    int percent=sum/5;
        printf("The overall percentage is , %d \n", percent);
    if(percent<33){
        printf("Sorry , You are Failed , Better luck next time \n");
    }
    else{
        printf("Congratulations , you have passed the examination \n");
    }
    printf("Thank you for using this program ");
    return 0;
}