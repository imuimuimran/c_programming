#include <stdio.h>

int main()
{
    // Take two integers as input and show who is bigger. If they are equal print as it is.
    int a;
    printf("Input first integer: ");
    scanf("%d",&a);
    int b;
    printf("Input Second integer: ");
    scanf("%d",&b);

    if(a==b)
    {
        printf("They are equal");
    }
    else if(a>b)
    {
        printf("A is bigger");
    }
    else
    {
        printf("B is bigger");
    }
    return 0;
}
