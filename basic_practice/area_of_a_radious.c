#include <stdio.h>

int main()
{
    // Find the area of a radius

    int radius;
    printf("Enter the radius:");
    scanf("%d",&radius);

    float area;
    area = 3.14159*radius*radius;
    printf("The area of the radius is: %f",area);

    return 0;
}
