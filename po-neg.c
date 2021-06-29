#include <stdio.h>
void main()
{
    system("clear");
    double num;
    printf("Enter a number : ");
    scanf("%lf", &num);

    if (0 > num)
    {
        printf("%.2f Entered number is negative\n");
    }
    else if (0 < num)
    {
        printf("%.2f Entered number is positive\n");
    }
    else{
        printf("%.2f Entered number is zero\n");
    }
}