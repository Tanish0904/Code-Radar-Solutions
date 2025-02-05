#include <stdio.h>
int main() 
{
    int x;
    scanf("%d",&x);
    if(x%5&&x%11){
        printf("Divisible");
    }else{
        printf("Not Divisible");
    }
    return 0;
}