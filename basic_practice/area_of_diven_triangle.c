#include <stdio.h>

int main()
{
    // find the area of 3 given triangles (Formula: A=(base*height) / 2 )
    int base = 3;
    int height;
    printf("Input the height:");
    scanf("%d",&height);

    float area;
    area = (base * height) / 2;
    printf("the area of 3 given triangles is:%f",area);

    return 0;
}
