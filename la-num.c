#include <stdio.h>

int main()
{
    system("clear");
    double a, b, c;
    printf("Enter three mumber : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%.2f is a largest number", a);
    if (b >= a && b >= c)
        printf("%.2f is a largest number", b);
    if (c >= a && c >= b)
        printf("%.2f is a largest number", c);
    return 0;
}