#include <stdio.h>


int main() {
    puts("Найти cумму положительных элементов массива - {9, 2, -6, 5, 0, -3, -7, -1, -4, -8, -2, -5} , расположенных до максимального элемента.");

     
    int arr[] = {9, 2, -6, 5, 0, -3, -7, -1, -4, -8, -2, -5};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    
    int max, sum = 0;

    
     
    max = arr[0];
    for(int i = 1; i < arrLength; i++) {
       if(arr[i] > max) {
        max = arr[i];
       }
    }
    
    for(int i = 0; i < arrLength; i++) {
        if(arr[i] > 0) {
           if(arr[i] != max) {
            sum += arr[i];
           } else {
            break;
           } 
           
        }
    }

    printf("Сумма положительных элементов массива до max. sum = %d\n", sum);

    return 0;

}