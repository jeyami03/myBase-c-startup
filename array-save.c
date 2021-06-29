#include <stdio.h>
void main()
{
    system("clear");
    int num[100];
    int a;

    printf("Enter the how many numbers in array ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("%d th number ", i);
        scanf("%d", &num[i]);
    }

    for (int j = 0; j < a; j++)
    {
        printf(" All number  %d\n", num[j]);
    }
}