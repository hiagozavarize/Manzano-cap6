#include <stdio.h>

int main(){
    float A[25], B[25];

    for (int i = 0; i < 25; i++){
        printf("Digite a %d temperatura: ", i+1);
        scanf("%f", &A[i]);

        B[i] = A[i] * 9/5 + 32;
    }
    printf("As temperatura da matriz A foram:\n");
    for (int i = 0; i < 25; i++){
        printf("%1.f ", A[i]);
    }
    printf("\nAs temperatura da matriz B convertidas para fahrenheit foram:\n");
    for (int i = 0; i < 25; i++){
        printf("%1.f ", B[i]);
    }
  return 0;
}