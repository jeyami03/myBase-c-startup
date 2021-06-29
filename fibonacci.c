#include <stdio.h>
void main()
{
    system("clear");
    int i, a;

    printf("Enter the number of elements : ");
    scanf("%d", &a);
    int t1 = 0, t2 = 1;
    int nt = t1 + t2;

    printf("Fibonacci Series : %d %d", t1, t2);

    for (i = 3; i <= a; i++)
    {
        printf(" %d", nt);
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
    }
}