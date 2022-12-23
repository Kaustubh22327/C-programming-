#include <stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("you are an adult \n");
        printf("You can vote in india \n");
        printf("You can apply for driver's lisence \n");
    }
    else if (age>13 && age<18){
        printf("you are a teenager bro \n");
    }
    else{
        printf("You are a kid \n");
    }

    printf("Thank you for using the program");
    return 0;
} 