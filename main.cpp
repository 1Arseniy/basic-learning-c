#include <stdio.h>


int main() {
    puts("Найти максимальный из элементов массива от элемента с номером p до последнего");
    
    int arr[] = {-2, -4, -6 , -1 , 7, 9, 2, 6, -1, 3};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    int p, max;

    printf("Введите начальный индекс с которого начнется отсчет\n");
    scanf("%d", &p);
    
   
    max = arr[p];
    
    for(int i = p + 1; i < arrLength; p++) {
      if(arr[p] > max) {
       max = arr[p];
      }

    }

  printf("Максисмальное значение в массиве max=%d", max);

}