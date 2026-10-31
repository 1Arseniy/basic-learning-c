#include <stdio.h>


int main() {
    int A[] = {7,0,3,0,10};
    int arrLength = sizeof(A) / sizeof(A[0]);   
    int B[arrLength];
    

    B[0] = A[0];

    for(int i = 1; i < arrLength; i++) {
        int j = 0;
    
        while(j < i && B[j]  < A[i]) {
            j++;
        }

        if (j == i) {
            B[i] = A[i];
        } else {
          for(int k = i - 1; k >= j; k--) {
            B[k + 1] = B[k];
          }
          B[j]  = A[i];
        }

        for (int k = 0; k <= i; k++) {
            printf("%d ", B[k]);
        }

    }

}