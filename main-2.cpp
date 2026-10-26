#include <stdio.h>
#include <math.h>

int main() {
    puts("Программа вычисляет значение выражения U с использованием 3 различных операторов цикла");



    int N, k = 1;
    double U_for = 0.0, U_while = 0.0, U_do_while = 0.0;

    puts("Введите целое чиcло:");
    scanf("%d", &N);

    
     
    for(int i = 1; i <= N; i++) {

        U_for += sin(N);
    }
     
    while(k <= N) {
        U_while += sin(N);
        k++;
    }

    k = 1;
    do {
        U_do_while += sin(N);
        k++;
 
    } while(k <= N);

    printf("\nРезультат с использования for U = %.6lf", U_for);
 
    printf("\nРезультат с использования while U = %.6lf", U_while);   
    
    printf("\nРезультат с использования do while U = %.6lf\n", U_do_while);
    return 0;

}

