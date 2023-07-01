#include <stdio.h>

int main(){
    int A[20], B[20], soma;

    for (int i = 0; i < 20; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 20; i++){
        soma = 0;
        for (int j = 1; j <= A[i]; j++){
            soma += j;
        } 
        B[i] = soma;
    }
    for (int i = 0; i < 20; i++){
        printf("A = %d\n", A[i]);
    }
    for (int i = 0; i < 20; i++){
        printf("B = %d\n", B[i]);
    }
  return 0;
}