#include <stdio.h>
#include <math.h>


int main() {
    double a,b,c;
    char s;
    puts("== Арифметический калькулятор ==");
    puts("Введите данные в формате Число Операция Число ");
    puts("Доступные операции: + - * / ^ ");


    
    while(1) {
        scanf("%lf %c %lf", &a, &s, &b);

        if(a == 0 && b == 0) {
            puts("Работа калькулятора завершена");

           break; 
        }


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
        }

        printf("Результат: %6.3lf %c %6.3lf = %6.3lf \n", a, s, b, c);
    }
    return 0;
}