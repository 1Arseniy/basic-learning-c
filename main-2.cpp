#include <stdio.h>
#include <stdlib.h>


int main() {
    puts("Заполнить массив случайными целыми числами в указанном диапозоне и отсортировать по методу 1 по убыванию");
    puts("Выполнил Крутой А.И вариант 6 группа КФ-17");

    
    int rd, numbers = 13;
    int intmas[numbers];


    printf("Элементы исходного массива\n" );
    
    for (int i = 0; i < numbers; i++) {
      rd = 30 + rand() % 51;
      intmas[i] = rd;
      printf(" %d ", intmas[i]);
    }

    int pass = 0, swapped;

    do {
       pass += 1;
       swapped = 0;
      for (int i = 0; i < numbers - pass; i++) {
        if(intmas[i] < intmas[i + 1]) {
            int t = intmas[i];
            intmas[i] = intmas[i + 1];
            intmas[i + 1] = t;
            swapped = 1;
        }

        printf("\ni = %d перестановка = %d просмотр = %d\n", i, swapped, pass);

        for(int i = 0; i < numbers; i++) {
        printf("елемент=%d\n", intmas[i]);
         }
        
      }

    } while(swapped > 0);

    printf("\n Результат: \n");

     for(int i = 0; i < numbers; i++) {
        printf(" %d", intmas[i]);
     } 

     return 0;

}