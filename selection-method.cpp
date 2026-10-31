#include <stdio.h>


int main() {
    int a[] = {7,3,0,10};
    int arrLength = sizeof(a) / sizeof(a[0]);    
     

    for (int i = 0; i < arrLength - 1; i++) {
        int Amin = a[i];
        int nom = i;

        for(int j = i + 1; j < arrLength; j++) {
            if(a[j] < Amin) {
                Amin = a[j];
                nom = j;
            }

        }
        if (nom != i) {
            int t = a[i];
            a[i] = a[nom];
            a[nom] = t;
        }

         for(int i = 0; i < arrLength; i++) {
        printf("\nel=%d\n", a[i]);
      }
    }

    return 0;
}