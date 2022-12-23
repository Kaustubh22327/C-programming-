 #include <stdio.h>
 #include <math.h>
 int main(){
    float a,b,c,s;
    printf("HELLO! WELCOME TO THE PROGRAM TO CALCULATE AREA OF A TRIANGLE \n");
    printf("Enter side a :\n");
    scanf("%f",&a);
    printf("Enter side b :\n");
    scanf("%f",&b);
    printf("Enter side c :\n");
    scanf("%f",&c);
    float s=(a+b+c)/3;
    float area=s(s-a)(s-b)(s-c);
    float areaf;
    areaf = sqrt(area);
    printf("%f",areaf);
 }