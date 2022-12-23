#include <stdio.h>
int main(){
    int marks;
    printf("enter your marks :");
    scanf("%d",&marks);
    if(marks<33){
        printf("Sorry , you are not passed , incomplete grade \n");
    } 
    else if (marks>=33 && marks<=50){
        printf(" Congratulations ,You are passed with C grade \n");
    }
    else if (marks>50 && marks<80){
        printf("Congratulations ,You are passed with B grade \n");
    }
    else if (marks>=80 && marks<90){
         printf("Congratulations ,You are passed with A grade \n");
    } 
     else if (marks>=80 && marks<90){
         printf("Congratulations ,You are passed with A+ grade \n");
    } 
    else{
        printf("wrong input of marks entered , please try again \n");
    }
    printf("Thank you for using the program , please rate us out of 10 \n");
    int rating;
    printf("Enter rating \n ");
    scanf("%d",rating);
    if(rating<=5){
        printf("Sorry for the incovinence caused , kindly mail us at jktsolutions@gmail.com ");

    }
    else{
        printf("Thank you , Have a great day");
    }
}