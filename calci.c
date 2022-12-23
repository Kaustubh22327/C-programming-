#include <stdio.h>
int main(){
    while(1);
    int resp;
    resp=1;
    while(resp==1) {
    float a;
    float b;
    int task;
    printf("Enter the choice number from the below list \n");
    printf("1. ADDITION \n");
    printf("2. SUBTRACTION \n");
    printf("3. MULTIPLICATION \n");
    printf("4. DIVISION \n");
    scanf("%d",&task);
    if(task==1){
        printf("Enter a : \n");
        scanf("%f",&a);
        printf("Enter b : \n ");
        scanf("%f",&b);
        printf("The sum of a and b is %f",a+b);
    }
    else if(task==2){
        printf("Enter a : \n");
        scanf("%f",&a);
        printf("Enter b : \n ");
        scanf("%f",&b);
        printf("The subtraction of a and b is %f",a-b);
        
    }
    else if(task==3){
        printf("Enter a : \n");
        scanf("%f",&a);
        printf("Enter b : \n ");
        scanf("%f",&b);
        printf("The multiplication of a and b is %f",a*b);
    }   
    else if(task==4){    
        printf("Enter a : \n");
        scanf("%f",&a);
        printf("Enter b : \n ");
        scanf("%f",&b);
        printf("The division a and b is %f \n",a/b);
    }
    else{
        printf("Wrong input entered");
    }    
    return 0;
    }
}