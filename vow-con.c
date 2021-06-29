#include <stdio.h>
void main()
{
    system("clear");

    char c;
    int lowercase, uppercase;

    printf("Enter an alphabet:");
    scanf("%c", &c );

    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase || uppercase)
    {
        printf("%c is vowel.", c);
    }
    else
    {
        printf("%c is consonant.", c);
    }
    // return 0;

    
}