#include<stdio.h>
void main(){
    system("clear");
    int base = 12439876;
    int reverse=0;

    for (int i = 0; base!=0; base=base/10)
    {
        reverse = reverse*10+(base%10);        
    }
    
    printf("Reverse number : %d",reverse);
    



}