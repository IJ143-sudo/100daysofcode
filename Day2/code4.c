#include <stdio.h>
//Write a program to calculate the area and circumference of a circle given its radius.

 int main() {
   float radius, area, circumference;
  float  PI = 3.14;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);



    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("\nResults:\n");
    printf("Area of circle: %.2lf\n", area);
    printf("Circumference of circle: %.2lf\n", circumference);

    return 0;
}