#include <iostream>
#include <conio.h>

int main(int argc, char** argv) {

setlocale(LC_ALL, "Rus");

puts("Программа вычисляет площадь и периметр прямоугольника");
puts("по заданным длинам сторон a,b");

float a,b; 
float area,perim;

printf("\n Введите стороны прямоугольника a,b: ");
scanf("%f %f", &a, &b);
area = a * b;
perim = 2 * (a + b);


printf("\n Площадь=%8.4f Периметр=%7.4f \n", area, perim);
printf("\n Площадь=%12.4e Периметр=%12.4e \n", area, perim);

getch();

}
