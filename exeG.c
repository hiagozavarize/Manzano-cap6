#include <stdio.h>
#include <string.h>

int main(){
    char A[20][50], B[30][50], C[50][50];

    for (int i = 0; i < 20; i++){
        printf("Digite o %d nome da matriz A: ", i+1);
        scanf("%s", A[i]);
    }
    for (int i = 0; i < 30; i++){
        printf("Digite o %d nome da matriz B: ", i+1);
        scanf("%s", B[i]);
    }
    for (int i = 0; i < 20; i++){
        strcpy(C[i], A[i]);
    }
    for (int i = 0; i < 30; i++){
        strcpy(C[i+20], B[i]);
    }
    printf("Os termos da matriz C são:\n");
    for (int i = 0; i < 50; i++){
        printf("%s\n", C[i]);
    }
  return 0;
}