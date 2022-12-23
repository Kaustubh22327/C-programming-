#include <stdio.h>
int main(){
    int roll , m1 , m2 , m3 , m4  ;
    char c;
    printf("Enter your name : \n");
    scanf("%c",&c);
    printf("Enter you roll number : \n");
    scanf("%d",&roll);
    printf("Enter marks in first subject \n");
    scanf("%d",&m1);
    printf("Enter marks in second subject \n");
    scanf("%d",&m2);
    printf("Enter marks in third subject \n");
    scanf("%d",&m3);
    printf("Enter marks in fourth subject \n");
    scanf("%d",&m4);
    int sum;
    sum=m1+m2+m3+m4;
    printf("Student name is %c \n",c);
    printf("Student roll is %d \n",roll);
    printf("The total  marks of  all subjects is %d",sum);
    
 
}