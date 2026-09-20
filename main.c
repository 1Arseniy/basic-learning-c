#include <stdio.h>

int main() {
    char operator;
    float a,b;
    
    puts("Hello, This is calculator");
   puts("Enter operator +,-,/,*: ");
   
   scanf("%c",&operator);
   puts("Enter first number: ");
   scanf("%f", &a);

   puts("Enter second number: ");
   

   scanf("%f", &b);
          


    switch (operator)
    {
    case '+':
        printf("\nResult=%f\n", a + b);
        break;
    case '-': 
        printf("\nResult=%f\n", a - b);
    break; 
    case '/': 
        printf("\nResult=%f\n", a / b);
    break;
    case '*': 
        printf("\nResult=%f\n", a * b);
    break;
    default:
    puts("Error something went wrong");
        break;
    }

}
