#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-BR");

    int A[15], B[15];
    int i;

    for (i = 0; i < 15; i++){

        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 15; i++) {
        B[i] = 1;
        for (int j = A[i]; j > 1; j--){
            B[i] *= j;
        }
    } 
    printf("Os termos da matriz A são:\n");
    for (i = 0; i < 15; i++){
        printf("%d ", A[i]);
    }
    printf("\nOs termos da matriz B são:\n");
    for (i = 0; i < 15; i++){
        printf("%d ", B[i]);
    }
    return 0;
}