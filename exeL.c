#include <stdio.h>

int main(){
    float A[10], B[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%f", &A[i]);

        B[i] = A[i]/2;
    }
    printf("Matriz A:\n");
    for (int i = 0; i < 10; i++){
        printf("%.1f\n", A[i]);
    }
    printf("Matriz B:\n");
    for (int i = 0; i < 10; i++){
        printf("%.1f\n", B[i]);
    }
  return 0;
}