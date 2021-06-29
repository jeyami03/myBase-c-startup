#include <stdio.h>
void main()
{
    system("clear");
    int i;
    printf("Enter number : ");
    scanf("%d", &i);

    // for (int i = 0; i < 2021; i+)
    // {

        if (i % 4 == 0)
        {
            printf("Entered no is %d leap year",i);
        }
        else
        {
            printf("\nEntered no is %d not leap year\n\n",i);
            // return 0;
        }
    // }
}