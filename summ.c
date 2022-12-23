#include <stdio.h>
int main(){
    int n;
    int i;
    printf("enter n upto  which you want to get the sum \n");
    scanf("%d",&n);
    int sum=0;
    while(i<=n){
        sum = sum+i;
        i=i+1;
    }
    printf("the sum of natural numbers upto given numbers is \n  %d", sum);
    return 0;

}