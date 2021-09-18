#include <stdio.h>

int main() {

  printf("Insira os numeros: \n"); 

  int perfeito1; // declaração entrada 1
  scanf("%d",&perfeito1); /* entrada padrão c*/
  int perfeito2;  /* declaração entrada 2*/
  scanf("%d",&perfeito2); 

  int flag1=0; /* declaração variáveis de armazenamento
  int flag2=0;

  for(int i=1; i<perfeito1; i++){ /* loop para contagem de divisores*/
    if(perfeito1%i==0){
			flag1+=i; /* armazenamento de divisores*/
		}
  }

  for(int z=1; z<perfeito2; z++){
		if(perfeito2%z==0){
			flag2+=z;
		}
	}
  if(perfeito1==flag1 && perfeito2==flag2){ /* comparação entre os numeros inseridos na entrada com as variáveis de armazenamento*/
    printf("Sao divisores perfeitos\n");
  }
  else
    printf("Nao sao divisores perfeitos\n");
}
