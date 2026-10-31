#include <stdio.h>

int main() {
    int a[] = {7,0,3,0,10};
    int arrLength = sizeof(a) / sizeof(a[0]);   
     

    for(int i = 0; i < arrLength; i++) {
       int t = a[i];
       int j = i - 1;

       while(j >=0 && a[j] > t) {
          a[j + 1] = a[j];
          j--;
       }

       a[j + 1] = t;

           for(int i = 0; i < arrLength; i++) {
        printf("\nel=%d\n", a[i]);
           }

    }


    return 0;

}