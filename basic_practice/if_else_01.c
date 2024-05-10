#include <stdio.h>

int main()
{
    // is x even or odd number?
    int x;
    printf("Input a number: ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d is an even number",x);
    }
    else
    {
        printf("%d is an odd number",x);
    }

    return 0;
}
