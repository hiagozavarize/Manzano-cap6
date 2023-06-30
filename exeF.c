#include <stdio.h>

int main(){
    int A[15], B[15], C[30];

  for(int i = 0; i < 15; i++){
    printf("Digite o %d termo da matriz A: ", i+1);
    scanf("%d", &A[i]);
  }
  for(int i = 0; i < 15; i++){
    printf("Digite o %d termo da matriz B: ", i+1);
    scanf("%d", &B[i]);
  }
  for(int i = 0; i < 15; i++){
    C[i] = A[i]; 
  }
  for (int j = 0; j < 15; j++){
    for(int i = 15; i < 30; i++){
        C[i] = B[j]; 
    }
  }
  printf("Os termos da matriz C são:\n"); 
  for(int i = 0; i < 30; i++){
    printf("%d ", C[i]);
  }

  return 0;
}