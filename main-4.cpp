#include <iostream>
#include <math.h>


int main(int argc, char** argv) {
	
	
	setlocale(LC_ALL, "Rus");
	
	puts("Ïðîãðàììà âû÷èñëÿåò 3 ñòîðîíó c è ïëîùàäü òðåóãîëüíèêà");
	puts("ïî çàäàííûì äëèíàì a,b è óãëó C");
	
	
	
	int angle = 180;
	float a,b,c,C; 
	
	printf("\n Ââåäèòå ñòîðîíû òðåóãîëüíèêà è óãîë â ãðàäóñàõ:");
	scanf("%f %f %f", &a,&b,&C);
	
//	if(a + b <= c || a + c <= b || b + c <= a || Ñ >= 180) {
//		printf("\n Òàêîãî òðåóãîëüíèêà íå ñóùåñòâóåò");
//		
//		return 1;
//	}
//	
	
	float radian = C * M_PI/angle;
	c = sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(radian));
	
	
	float p = (a + b + c) / 2;
	float area = p * (p - c) * tan(radian / 2); 
	
	
    printf("\ Ñòîðîíà òðåóãîëüíèêà=%f", c);
    printf("\ Ïëîùàäü òðåóãîëüíèêà=%f", area);
    
    
	return 0;
}
