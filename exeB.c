#include <stdio.h>

int main(){
    int A[8], B[8], i;
  
    for(i = 0; i < 8; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &A[i]);

        B[i] = A[i] * 3;
    }
    printf("A matriz A é:\n");
    for(i = 0; i < 8; i++){
        printf("%d ",A[i]); 
    }
    printf("\nA matriz B é:\n");
    for(i = 0; i < 8; i++){
        printf("%d ", B[i]);
    }
  return 0;
}