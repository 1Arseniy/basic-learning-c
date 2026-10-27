#include <stdio.h>

main() {
    puts("Найти максимальный из  элементов массива - {9, 5, -2, 0, -7, -1, 0, -3, -8, -4} от элемента с номером p до последнего");
    
    int arr[] = {9, 5, -2, 0, -7, -1, 0, -3, -8, -4};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    int p, max;

    printf("Введите начальный индекс с которого начнется отсчет\n");
    
    if(scanf("%d", &p) != 1) {
      puts("Ошибка ввести нужно целое число");

      return 1;
    };

    if(p < 0 || p >= arrLength) {
       printf("Ошибка ввести нужно число от 0 до %d\n", arrLength - 1);

      return 1;
    }
    
   
    max = arr[p];
    
    for(int i = p + 1; i < arrLength; i++) {
      if(arr[i] > max) {
       max = arr[i];
      }

    }

  printf("Максисмальное значение в массиве max=%d\n", max);


   return 0;
}