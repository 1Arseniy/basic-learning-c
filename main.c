#include <stdio.h>

int main() {
    int x=1, y;
    do
    {
        y=x*x; x+=4;
    }
    while(x<12);
   printf('%d', y);

   return 0;
}