#include <stdio.h>
void main()
{
    int a;

    printf("Enter number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd", a);
    }

    // Reminder   a%2==0 
    //            2/2
    //            0==0 is true
    //            3/2
    //            1==0 is false
    //15%5 -> 0
    //15%6 -> 3
    //15%7 -> 1
}