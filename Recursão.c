#include <stdio.h>


int soma (int menor) {
	if(menor ==0)
	    return 0;
    else
        return menor + soma(menor - 1);	
}

int main() {
  int tam_vetor, i, n, maior, menor;
  printf("Qual o tamanho do vetor? ");
  scanf("%d", &tam_vetor);
  int vetor[tam_vetor];
  printf("Entre com os elementos do vetor: ");
  for (i = 0; i < tam_vetor; i++) {
	scanf("%d", &vetor[i]);
  }
  maior = vetor[0];
  menor = vetor[0];
  for (i = 1; i < tam_vetor; i++) {
	if (vetor[i] > maior) {
  	maior = vetor[i];
	}
	if (vetor[i] < menor) {
  	menor = vetor[i];
	}
  }
  printf("Maior valor: %d\n", maior);
  printf("Menor valor: %d\n", menor);
  return 0;
}