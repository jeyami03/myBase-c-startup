#include<stdio.h>
void main() {
    system("clear");
    int a, i;
    
    printf("Enter a multiplication  table of a number : ");
    scanf("%d",&a);

    for ( i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d\n", i, a, i*a);
    }
}