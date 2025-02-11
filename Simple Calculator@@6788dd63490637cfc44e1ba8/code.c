#include<stdio.h>

int main()
{
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    
    if(op == '+'){
        printf("%d", a + b);
    }else if(op == '-'){
        printf("%d", a - b);
    }else if(op == '*'){
        printf("%d", a * b);
    }else if(op == '/'){
        if (b == 0) {
            printf("Error: Division by zero");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Invalid operator");
    }
    
    return 0;
}



    