#include<stdio.h>
void main()
{
    system("clear");
    float cel , fah;

    printf("Enter temperature in Celsius : ");
    scanf("%f",&cel);
    

    fah = (cel*9/5)+32;
    printf("\n%.2f Celsius = %.2f Fahrenheit\n\n", cel , fah);
    


}