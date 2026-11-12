#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;


void pause() {
   do {
    cout << "\n" << "press enter";
  } while (cin.get() != '\n');
}

int main() {

    puts("----------------------");
    puts("Примеры ввода и вывода матриц в программе");
    puts("----------------------");
     
    puts("\n Элементы заданы в определении: ");


    int i,j;
    int m[2][5] = {{1,2,3,4,5}, {11,12,13,14,15}};


    for(i = 0; i < 2; i++) {
     for(j = 0; j < 5; j++) printf("%3d", m[i][j]);
     printf("\n");
  }

  pause();
  
  puts("\n ---------------------- \n ");
  puts("Элементы матрицы заданы случайными числами: ");

   unsigned t=time(NULL);
   srand(t);

   double r, Z[2][2];
   
   for(i = 0; i < 2; i++) {
    for(j = 0; j < 2; j++) {
      r = (double)rand() / RAND_MAX;
      Z[i][j] = 20 * r - 5;
    }
   }

   for(i = 0; i < 2; i++) {
    for(j = 0; j < 2; j++) {
      printf(" %6.2f", Z[i][j]);
      printf("\n");
    }
   }
   
   printf("\n");
   
   pause();

  
   puts("\n ---------------------- \n ");
   puts("Ввод элементов с клавиатуры:");
   int k,n;
   int p[2][3];

   for(k = 0; k < 2; k++) {
    printf("\n Элементы %d-й строки: \n", k);
    for(n = 0; n < 3; n++) {
      printf("p[%d][%d]=", k,n);
      scanf("%d", &p[k][n]);
    }
   }

   puts("\n Введеная матрица имееет вид:");
   for(k = 0; k < 2; k++) {
    for(n = 0; n < 3; n++) {
      printf(" %3d", p[k][n]);
      
    }
    printf("\n");
   }
   pause();

  
  puts("\n ---------------------- \n ");
  puts("Сумма элементов марицы m[2][5]:");
  int sum = 0;
  
  
  for(i = 0; i < 2; i++) {
    for(j = 0; j < 5; j++) {
      sum += m[i][j];
    }
  }
  printf("Сумма элементов матрицы = %d \n", sum);
  
  
  pause();
  
  int newArr[3][3] = {
   {-1, 2, 3},
   {4, 5, -6},
   {-7, 8, 9}
};
  
  puts("\n ---------------------- \n ");
  puts("Максимальный элемент матрицы newArr[3][3] и его положение: ");
  int imax=0,jmax=0;
  int pmax= newArr[0][0];
  for(i = 0; i < 3; i++) 
  for(j = 0; j < 3; j++) 
  if(newArr[i][j] > pmax) {
    pmax = newArr[i][j];
    imax = i;
    jmax= j;
  }
  printf("Максимальный элемент = %d \n", pmax);
  printf("Расроложен в %d-й строке, %d-м столбце \n", imax, jmax);

  pause();
  
  
  puts("\n ---------------------- \n ");
    puts("Количество отрицательных элементов матрицы");
    int ke = 0;
    for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
        if(newArr[i][j] < 0) {
          ke++;
        }
      }
    }
  printf("Количество отрицательных элементов = %d \n\n ", ke);



  return 0;
}