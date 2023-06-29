#include <stdio.h>

int main(){

    float A[20], B[20], C[20];
    int i;

    for(i = 0; i < 20; i++){
        printf("Digite o %d termo da matriz A: ", i+1);
        scanf("%f", &A[i]);
    }
    for(i = 0; i < 20; i++){
        printf("Digite o %d termo da matriz B: ", i+1);
        scanf("%f", &B[i]);
    }
    for(i = 0; i < 20; i++){
        C[i] = A[i] - B[i];
    }
    printf("A matriz C é:\n");
    for(i = 0; i < 20; i++){
        printf("%.1f ", C[i]); 
    }

    return 0;
}