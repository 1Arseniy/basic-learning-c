#include <stdio.h>
#include <math.h>


int main() {
  double z,x,y;

  puts("Программа для определения значения функкци");
  puts("Выполнил Крутой А.И группа КФ-17 вариант 6");
  
  printf("\nВведите z при этом если z < 0 = z если z >= 0 то sin(z): ");
  scanf("%lf", &z);
   
  if(z < 0) {
    x = z;
  } else {
    x = sin(z);
  }
    
  y = 2.0/3.0 * pow(sin(x), 2) - 3.0/4.0 * pow(cos(x), 2);

  printf("\nРезультат x=%lf, y=%lf", x, y);
  return 0;
}

