#include <stdio.h>

int main()
{
    //Input a number x. if x is even then add a+b, if not subtract a-b ....
    int x;
    printf("Input the value of x: ");
    scanf("%d",&x);

    int a;
    printf("Input the value of a: ");
    scanf("%d",&a);

    int b;
    printf("Input the value of b: ");
    scanf("%d",&b);

    int sum;
    sum = a+b;
    int sub;
    sub = a-b;

    if(x%2==0)
    {
        printf("The sum of (a+b) is: %d",sum);
    }
    else
    {
        printf("The subtract of (a-b) is: %d",sub);
    }

    return 0;

}
