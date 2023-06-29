#include <stdio.h>
#include <math.h>

int main(){

    int A[15], B[15], i;

    for (i = 0; i < 15; i++){
        printf("Digite o %d da matriz A: ", i+1);
        scanf("%d",&A[i]);

        B[i] = pow(A[i], 2);
    }
    printf("Os elementos da matriz A são:\n");
    for (i = 0; i < 15; i++){
        printf("%d ", A[i]);
    }
    printf("\nOs elementos da matriz B são:\n");
    for (i = 0; i < 15; i++){
        printf("%d ", B[i]);
    }

  return 0;
}