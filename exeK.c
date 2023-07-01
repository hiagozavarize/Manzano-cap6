#include <stdio.h>

int main(){
    int A[10], B[10];
    for (int i = 0; i < 10; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%d", &A[i]);
        while (A[i] < 0){
            printf("Valor inválido, tente outro valor.\n");
            printf("Digite o %d termo da matriz A: ", i+1);
            scanf("%d", &A[i]);
        }
        B[i] = A[i] * -1; 
    }
    for (int i = 0; i < 10; i++){
        printf("%d\n", B[i]);
    }
  return 0;
}