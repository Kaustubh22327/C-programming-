#include <stdio.h>
int main(){
    int a,b,c;
    printf("Please Enter the numbers to get the avg , if there are two numbers then enter 0 in c \n");
    printf("Enter a \n");
    scanf("%d",&a);
    printf("Enter b \n");
    scanf("%d",&b);
    printf("Enter c \n");
    scanf("%d",&c);
    printf("The average is %f",(a+b+c)/3);
    
    return 0;
} 