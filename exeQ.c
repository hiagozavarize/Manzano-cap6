#include <stdio.h>

int main(){
    float A[15], B[15];

    for (int i = 0; i < 15; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%f", &A[i]);

        if ((int)A[i] % 2 == 0){
            B[i] = A[i]/2;
        }else{
            B[i] = A[i] * 1.5;
        }
    }
    printf("Os termos da matriz B são:\n");
    for (int i = 0; i < 15; i++){
        printf("%.1f ", B[i]);
    }
  return 0;
}