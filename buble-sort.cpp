#include <stdio.h>

int main() {
    int a[] = {7,3,0,10};
    int arrLength = sizeof(a) / sizeof(a[0]);    
    int swapped, pass = 0;

   do {
     pass += 1;
     swapped = 0;
     for(int i = 0; i < arrLength - pass; i++) {
        if(a[i] > a[i + 1]) {
            int t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
            swapped = 1;
        }
    }
     
    for(int i = 0; i < arrLength; i++) {
        printf("\nel=%d\n", a[i]);
      }
   } while(swapped > 0);
  
}
    
