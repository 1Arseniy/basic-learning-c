#include <stdio.h>
#include <cstdlib>
#include <time.h>


int main() {
    srand((unsigned)time(NULL));

    puts("Найти максимальный из элементов матpицы, pасположенных ниже главной диагонали.");

    int arr[4][4];
    int Amin,Amax;


    printf("Введите нижнюю границу диапазона и верхнюю случайных чисел: ");
    scanf("%d %d", &Amin, &Amax);


    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
          arr[i][j] =  Amin + rand() % (Amax - Amin + 1);
        }
    }
    
    printf("Исходная матрица \n");
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <4; j++) {
            printf(" %3d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    int  max = arr[1][0];
    
    for(int i = 1; i < 4; i++) {
        for(int j= 0; j < i; j++) {
            printf("  arr[%d][%d] = %d \n", i, j, arr[i][j]);
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    printf("\n");

    
     printf("\n Максимальный элемент = %d\n", max);



}