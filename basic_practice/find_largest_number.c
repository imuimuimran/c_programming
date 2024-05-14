#include <stdio.h>

int main()
{
    // In a,b,c which one is the largest?
    int a;
    printf("Input the value of a: ");
    scanf("%d",&a);
    int b;
    printf("Input the value of b: ");
    scanf("%d",&b);
    int c;
    printf("Input the value of c: ");
    scanf("%d",&c);


    if(a>b&&a>c)
    {
        printf("%d is larger than %d and %d",a,b,c);
    }
    else if(b>a&&b>c)
    {
        printf("%d is larger than %d and %d",b,a,c);
    }
    else
    {
        printf("%d is larger than %d and %d",c,a,b);
    }

    return 0;
}
