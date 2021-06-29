#include <stdio.h>
void main()
{
    system("clear");
    int a[6] = {10, 20, 30, 40, 50, 10};
    int b;
    printf("Search the number : ");
    scanf("%d", &b);

    for (int i = 0; i < 6; i++)
    {

        if (a[i] == b)
        {
            printf("%d is found\n", b);
            return;
        }   
    }
    printf("%d not found", b);

    // if (c>d)
    // {
    //     printf("\n%d is greater",c);
    //     return;
    // }

    // printf("\n%d is greater",d);
}