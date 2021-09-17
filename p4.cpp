#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int perfeito1,perfeito2, flag1=0, flag2=0;
	cout<<"Digite dois numeros para a checagem\n";
	cin>>perfeito1>>perfeito2; // entrada padrão c++(std já declarado no namespace)
	
	for(int i=1; i<perfeito1; i++){  // comando de repetição para obter os divisores do primeiro número inserido pelo usuário 
		if(perfeito1%i==0){
			flag1+=i;
		}
	}
	
	for(int z=1; z<perfeito2; z++){  // comando de repetição para obter os divisores do segundo número inserido pelo usuário 
		if(perfeito2%z==0){
			flag2+=z;
		}
	}
	
	if(perfeito1==flag1 && perfeito2==flag2){ // checagem para saber se ambos são divisores perfeitos
		cout<<"Sao divisores perfeitos\n";
	}
	
	else if(perfeito1==flag1 && perfeito2!=flag2){ // checagem para saber se o primeiro número é perfeito
		cout<<"Apenas o "<<perfeito1<<" e perfeito"<<"\n";
	}
	
	else if(perfeito1!=flag1 && perfeito2==flag2){ // checagem para saber se o segundo número é perfeito
		cout<<"Apenas o "<<perfeito2<<" e perfeito"<<"\n";
	}
	else  // caso nenhum seja perfeito
		cout<<"Nao sao divisores perfeitos\n";
}
