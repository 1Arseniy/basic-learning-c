#include <iostream>
#include <math.h>


int main(int argc, char** argv) {
	
	
	setlocale(LC_ALL, "Rus");
	
	puts("Программа вычисляет 3 сторону c и площадь треугольника");
	puts("по заданным длинам a,b и углу C");
	puts("Выполнил Крутой A.И группа КФ-17 вариант 6");
	
	
	
	int angle = 180;
	float a,b,c,C,radian,p,area; 
	
	printf("\n Введите стороны треугольника и угол в градусах: ");
	scanf("%f %f %f", &a,&b,&C);
	
    radian = C * M_PI/angle;
	c = sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(radian));
	
	
    p = (a + b + c) / 2;
	area = p * (p - c) * tan(radian / 2); 
	
	
    printf("\n Сторона треугольника=%f", c);
    printf("\n Площадь треугольника=%f", area);
    
    
	return 0;
}
