#include <stdio.h>

int main(){
    int A[20], B[20];

    for (int i = 0; i < 20; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("Os elementros de B são:\n");
    for (int i = 19; i >= 0; i--){
        B[i] = A[i];
    
        printf("%d ", B[i]);
    }
  return 0;
}