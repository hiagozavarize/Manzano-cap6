#include <stdio.h>

int main(){
    int num, A[10];

    printf("A tabuada de qual numero vc quer? ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++){
        A[i] = num*i;
        printf("%d\n", A[i]);
    }
  return 0;
}