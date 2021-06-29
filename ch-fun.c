#include <stdio.h>

void main()
{
    system("clear");
    int a[5] = {12, 54, 34534, 32, 66};
    int b[5];


    int i =0;

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i] * 2;

        // i = 5 + 8;

        // printf("%d", i);
        
        printf("%d This is b arrays element\n", b[i]);
    }

    for(int i=4; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }
}
// #include <stdio.h>
// void main()
// {
//     system("clear");
//     int a[5] = {12, 3, 5, 1, 7};
//     int b[5];

//     for (int i = 0; i < 5; i++)
//     {
//         b[i] = a[i] * 2;
//         printf("%d\n", b[i]);
//     }
// }