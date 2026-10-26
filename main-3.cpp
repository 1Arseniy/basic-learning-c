#include <stdio.h>
#include <math.h>


int main() {
    puts("Программа для расчета таблицы значений функции Y(x) при разбиение области [a,b] изменения аргумента на N шагов.");
    puts("Выполнил Крутой А.И группа КФ-17 вариант 6");
   
    int N;
    double a,b,h,x,y,xMax,xMin,yMax,yMin;


    printf("\nВведите начало отрезка a, ");
    printf("\nВведите конец отрезка b, "); 
    printf("\nВведите количество шагов N: ");

    scanf("%lf %lf %d", &a, &b, &N);

    h = (b - a) / N;

     printf("\n№\tx\t\tY(x)\n");

    for(int i = 0; i <= N; i++) {
        x = a + i * h;
        y = (pow(x,2.0)/4.0 + x/2.0 - 3.0) * exp(x / 2.0);

        printf("%d\t%.6lf\t%.6lf\n", i, x, y);

        if (i == 0) {
            yMax =y;
            yMin = y;
            xMin = x;
            xMax = x;

        } else {

            
        if (y < yMin) {
             yMin = y;
            xMin = x;
         } 
            
        if (y > yMax) {
            yMax = y;
            xMax = x;
        }
        }

    }
    printf("\nМинимальное значение Y = %lf", yMin);
    printf("\nМаксимальное значение Y = %lf", yMax);

   printf("\nМинимальное значение x = %lf", xMin);
   printf("\nМаксимальное значение x = %lf\n", xMax);
    
    
    
    return 0;

}