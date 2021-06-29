#include<stdio.h>

void main(){
    system("clear");

    int first, second, temp;

    printf("Enter a first number : ",first);
    scanf("%d",&first);
    printf("Enter a second number : ",second);
    scanf("%d",&second);
    printf("before swapping, first Number : %d\t%d\n",first,second);

    temp=first;
    first=second;
    second=temp;

    printf("After swapping, second Number : %d\t%d\n",first ,second);
\


}