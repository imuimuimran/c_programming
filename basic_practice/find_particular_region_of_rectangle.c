#include <stdio.h>

int main()
{
    // Find the particular region of rectangle
    int radius;
    printf("Input the radius:");
    scanf("%d",&radius);

    int circle;
    circle = 2 * radius;
    printf("The diameter of circle is:%d",circle);

    int rec_len;
    rec_len = circle + circle;
    printf("\nLength of rectangle is:%d",rec_len);

    int rec_area;
    rec_area = rec_len * circle;
    printf("\nThe area of rectangle is:%d",rec_area);

    int cir_area;
    cir_area = 2 * 3.14159 * radius * radius;
    printf("\nThe area of two circle is:%d",cir_area);

    int dif_rec_area;
    dif_rec_area = rec_area - cir_area;
    printf("\nThe particular region of rectangle is:%d",dif_rec_area);

    return 0;
}
