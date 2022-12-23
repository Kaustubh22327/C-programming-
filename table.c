#include <stdio.h>
int main(){
    //THIS PROGRAM IS USED TO PRINT TABLE OF NUMBER ENTERED BY USER
    int n;
    printf("Enter the number to get the table for \n ");
    scanf("%d",&n);
    for(int i=1;i<=10;i=i+1){
        printf("%d \n",n*i);
    }
    return 0;
}
