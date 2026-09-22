#include <stdio.h>

int main() {
int p = 3, s = 5, f;
char z = 'Y';
if (p > 0 && s >= 2 && z == 'Y')
 f = 2*p*s;
else f = p - s; 
printf("f=%d", f);
return 0;
}
