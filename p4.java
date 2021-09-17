import java.util.Scanner;

class Main {
	public static void main(String[] args) {
    Scanner entrada = new Scanner(System.in);
    System.out.println("Digite os numeros:");

    int perfeito1 = entrada.nextInt(); 
    int perfeito2 = entrada.nextInt(); 

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
      System.out.println("Sao divisores perfeitos\n");
    }

    else
      System.out.println("Nao sao divisores perfeitos\n");

  }
}
