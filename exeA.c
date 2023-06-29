#include <stdio.h>

int main(){
    char nomes[10][50];
  
    for(int i = 0; i < 10; i++){
        printf("Digite o %d nome: ", i+1);
        scanf("%s", nomes[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("O %d nome é: %s\n",i+1, nomes[i]);
    }
  return 0;
}