#include <stdio.h>
int main() {
    float r;
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    float area = 3.14 * r* r;
    printf("the area of circle of given radius is %f",area);
    return 0;
}