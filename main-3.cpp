#include <stdio.h>
#include <cstdlib>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));
    
    puts("Hайти количество строк матpицы, имеющих четную сумму элементов.");
    
    int arr[5][5];
    int Amin,Amax;
    
    
    printf("Введите нижнюю границу диапазона и верхнюю случайных чисел: ");
    scanf("%d %d", &Amin, &Amax);
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int newAmin = Amin - 2;
            int newAmax = Amax + 5;
            arr[i][j] =  newAmin + rand() % (newAmax - newAmin + 1);
        }
    }
    
    printf("Исходная матрица \n");
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf(" %3d", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");


    int count = 0;

    for(int i = 0; i < 5; i++) {
     int sum = 0;

        for(int j = 0; j < 5; j++) {
            sum += arr[i][j];
        }
        printf("\n Сумма = %d \n", sum);
        
        if (sum % 2 == 0) {
           printf("сумма четная");
           count++;
        } else {
           printf("сумма нечетная");
        }
        

    }

    printf("\n Количество строк = %d\n", count);

}



