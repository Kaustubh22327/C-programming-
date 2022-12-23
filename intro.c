#include <stdio.h>
int main(){
    char name;
    char father;
    char branch;
    char city;
    char state;
    int roll;
    printf("Enter your name :");
    scanf("%c",&name);
    printf("Enter your Father's name :");
    scanf("%c",&father);
    printf("Enter your Branch :");
    scanf("%c",&branch);
    printf("Enter your city :");
    scanf("%c",&city);
    printf("Enter your state :");
    scanf("%c",&state );
    printf("Enter your roll number :");
    scanf("%d",&roll);
    printf("Hello everyone , my name is %c \n",name);
    printf("My father's name is %c \n",father);
    printf("My branch is %c \n",branch);
    printf("my roll number is %d \n",roll);
    printf("i basically come from %c \n", city );
    printf("which is situated in , %c \n", state);
    printf("Thank you");
    return 0 ;
}