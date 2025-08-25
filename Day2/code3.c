#include <stdio.h>
//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
int main()
 {
    float length, breadth, area, perimeter;

    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

  
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle: %f\n", area);
    printf("Perimeter of rectangle: %f\n", perimeter);

    return 0;
}