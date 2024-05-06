#include <stdio.h>

int main()
{
    // In a family the age of father is 38, mother is 32, son is 12 and daughter is 9. find their average age?

    float father;
    float mother;
    float son;
    float daughter;
    printf("Write father, mother, son & daughter age respectively:");
    scanf("%f%f%f%f",&father,&mother,&son,&daughter);

    int sum_of_age;
    sum_of_age = father+mother+son+daughter;
    printf("The sum of their is:%d\n",sum_of_age);

    float avg_of_age;
    avg_of_age = (father+mother+son+daughter)/4;
    printf("The average of their age is:%f",avg_of_age);

    return 0;
}
