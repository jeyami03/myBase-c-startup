#include <stdio.h>
void main()
{
    system("clear");
    char a;
    printf("Enter a number or Alphabet : \n");
    scanf("%c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("%c is an Alphabet \n", a);
    }
    else
    {
        printf("%c is an not Alphabet \n", a);
    }
}