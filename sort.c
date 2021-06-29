#include <stdio.h>
int main()
{
    system("clear");
    int a[20], i, j, size, tep;
    printf("Enter the number of elements : ");
    scanf("%d", &size);
    printf("\nEnter the Elements : \n");
    for (i = 0; i < size; i++)
    {
        scanf("\n%d", &a[i]);
    }
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                tep = a[i];
                a[i] = a[j];
                a[j] = tep;
            }
        }
    }
    printf("\nOrder of an elements");

    for (i = 0; i < size; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}

// just try
// #include <stdio.h>
// int main()
// {
//     system("clear");
//     int a[20], f, c, ne,dum;
//     printf("Enter the number of the elements : ");
//     scanf("%d" ,&ne);

//     printf("Enter the elements\n");
//     for (f = 0; f < ne; f++)
//     {
//         scanf("%d\n", &a[f]);
//     }
//     for (f = 0; f < ne - 1; f++)
//     {
//         for (c = f + 1; c < ne; c++)
//         {
//             if (a[f]>a[c])
//             {
//                 dum = a[f];
//                 a[f] = a[c];
//                 a[c] = dum;
//             }

//         }
//     }
//     for ( f = 0; f < ne; f++)
//     {
//         printf("\n%d",a[f]);
//     }
//     return 0;

// }