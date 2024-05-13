#include <stdio.h>

int main()
{
    // is x greater or smaller than y? or are they same?
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
    else if(x<y)
    {
        printf("%d is not greater than %d",x,y);
    }
    else
    {
        printf("%d and %d are equal",x,y);
    }

    return 0;
}
