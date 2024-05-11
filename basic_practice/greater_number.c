#include <stdio.h>

int main()
{
    // Is x greater than y, or not?
    int x;
    printf("Input the value of x: ");
    scanf("%d",&x);

    int y;
    printf("Input the value of y: ");
    scanf("%d",&y);

    if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else
    {
        printf("%d is not greater than %d",x,y);
    }
    return 0;
}
