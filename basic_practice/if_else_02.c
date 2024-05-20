#include <stdio.h>

int main()
{
    // Take three integers as input and show who is bigger(both are bigger issue).

     int a;
    printf("Input first integer: ");
    scanf("%d",&a);
    int b;
    printf("Input second integer: ");
    scanf("%d",&b);
    int c;
    printf("Input third integer: ");
    scanf("%d",&c);

    if(b&&c>a)
    {
        printf("B and C both are bigger");
    }
    else if(a&&c>b)
    {
        printf("A and C both are bigger");
    }
    else if(a&&b>c)
    {
        printf("A and B both are bigger");
    }
    else
    {
        printf("They are equal");
    }

    return 0;
}
