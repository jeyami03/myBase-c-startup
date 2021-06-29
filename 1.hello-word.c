#include <stdio.h>
int main()
{
   int a;
   int b;

   printf("Enter first number :");
   scanf("%d",&a);
   printf("Enter first number :");
   scanf("%d",&b);
   if(a>b){
      printf("a greater than number of b\n");
   }
   else
   {
      printf("b smaller than number of a\n");
   }

   return 0;
}

// #include <stdio.h>
// void main()
// {
//    system("clear");
//    int a, b;
//    printf("Enter 1st number : ");
//    scanf("%d", &a);
//    printf("Enter 2st number : ");
//    scanf("%d", &b);

//    if (a > b)
//    {
//       printf("A is greater than of B");
//    }
//    else
//    {
//       printf("B is greater than of A");
//    }
// }