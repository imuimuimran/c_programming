#include <stdio.h>

int main()
{
    // Input an integer where the number can be divide equally by 2 also it will be even both of case
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num == 2)
    {
        printf("Only this even number can't be divide with two even number.");
    }
    else if(num%4==0)
    {
        printf("Yes, it can be divided with two equal even number.");
    }
    else
    {
        printf("Sorry, it can't be divide with two equal even number.");
    }

    return 0;
}
