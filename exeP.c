#include <stdio.h>

int main(){
    int A[12], B[12];

    for (int i = 0; i < 12; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%d", &A[i]);

        if (A[i] % 2 != 0){
            B[i] = A[i] * 2;
        }else{
            B[i] = A[i];
        }
    }
    printf("Os termos da matriz B são:\n");
    for (int i = 0; i < 12; i++){
        printf("%d ", B[i]);
    }
  return 0;
}