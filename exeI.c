#include <stdio.h>

int main(){
    float A[5], B[5], C[5], D[15];

    for (int i = 0; i < 5; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%f", &A[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Digite o %d termo da matriz B: ", i+1);
        scanf("%f", &B[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Digite o %d termo da matriz C: ", i+1);
        scanf("%f", &C[i]);
    }
    for (int i = 0; i < 5; i++){
        D[i] = A[i];
    }
    for (int i = 0; i < 5; i++){
        D[i + 5] = B[i];
    }   
    for (int i = 0; i < 5; i++){
        D[i + 10] = C[i];            
    }
    printf("Os termos da matriz D são:\n");
    for (int i = 0; i < 15; i++){
        printf("%.1f ", D[i]);
    }
  return 0;
}