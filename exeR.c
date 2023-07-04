#include <stdio.h>

int main() {
    int A[6], B[6], C[6], D[6];
    int cCount = 0, dCount = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite o %d termo da matriz A: ", i + 1);
        scanf("%d", &A[i]);

        if (A[i] % 2 != 0) {
            C[cCount] = A[i];
            cCount++;
        }else {
            D[dCount] = A[i];
            dCount++;
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("Digite o %d termo da matriz B: ", i + 1);
        scanf("%d", &B[i]);

        if (B[i] % 2 != 0) {
            C[cCount] = B[i];
            cCount++;
        }else {
            D[dCount] = B[i];
            dCount++;
        }
    }
    printf("Os elementos da matriz C são:\n");
    for (int i = 0; i < cCount; i++) {
        printf("%d ", C[i]);
    }
    printf("\nOs elementos da matriz D são:\n");
    for (int i = 0; i < dCount; i++) {
        printf("%d ", D[i]);
    }
    return 0;
}
