#include <stdio.h>

int main()
{
    // find the area of triangle (Formula: A=1/2*base*height)
    int base;
    int height;
    printf("Input the base and height:");
    scanf("%d%d",&base,&height);

    float area;
    area = .5 * base * height;
    printf("the area of triangle is:%f",area);

    return 0;
}
