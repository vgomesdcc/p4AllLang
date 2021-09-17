#include <stdio.h>

int main() {

  printf("Insira os numeros: \n");

  int perfeito1;
  scanf("%d",&perfeito1);
  int perfeito2; 
  scanf("%d",&perfeito2); 

  int flag1=0;
  int flag2=0;

  for(int i=1; i<perfeito1; i++){
    if(perfeito1%i==0){
			flag1+=i;
		}
  }

  for(int z=1; z<perfeito2; z++){
		if(perfeito2%z==0){
			flag2+=z;
		}
	}
  if(perfeito1==flag1 && perfeito2==flag2){
    printf("Sao divisores perfeitos\n");
  }
  else
    printf("Nao sao divisores perfeitos\n");
}
