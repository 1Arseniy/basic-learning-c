#include <stdio.h>


int main() {
    puts("Найти cумму положительных элементов массива, расположенных до максимального элемента.");

     
    int arr[] = {2, -4, -6 , -1 , 7, 9, 2, 6, -1, 3, 5, 8};
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

    printf("Сумма положительных элементов массива до max. sum = %d", sum);

}