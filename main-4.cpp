#include <stdio.h>
#include <math.h>


int main() {
    double a,b,c;
    char s;
    puts("== Арифметический калькулятор ==");
    puts("Введите данные в формате Число Операция Число ");
    puts("Доступные операции: + - * / ^ ");
    
    scanf("%lf %c %lf", &a, &s, &b);
    switch (s)
    {
    case '+':
        c = a + b;
        break;
     case '-':
        c = a - b;
        break;   
    case '*':
        c =  a * b;
        break;
    case '/':
        c = a / b;
        break;
    case '^': 
        c = pow(a,b);
    break;
    default:
    printf("!!! Выделен неверный знак операции \n");
    return 1;
        break;
    }
    printf("Результат: %6.3lf %c %6.31lf = %6.3lf \n", a, s, b, c);
    return 0;
}