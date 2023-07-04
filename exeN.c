#include <stdio.h>

int main(){

  float A[20], tempMaior, tempMenor, mediaTemp, somaTemp = 0;

  for (int i = 0; i < 20; i++){
    printf("Digite o %d termo das matriz A em graus Celsius: ", i+1);
    scanf("%f", &A[i]);

    if (i == 0){
      tempMaior = A[i];
      tempMenor = A[i];

    }else if (tempMenor > A[i]){
      tempMenor = A[i];

    }else if (tempMaior < A[i]){
      tempMaior = A[i];
    }
    somaTemp += A[i];
    mediaTemp = somaTemp/20;
  }
  printf("A menor temperatura foi: %.1f\n", tempMenor);
  printf("A maior temperatura foi: %.1f\n", tempMaior);
  printf("A media das temperaturas lidas foi: %.1f", mediaTemp);
  
  return 0;
}