def main():
    '''
Programa que lê dois valores imprime uma
mensagem indicando se eles são perfeito.
    '''

print("Da-se dois valores e informa se eles são divisores perfeitos ou não \n")

# leia o valor de n e n2
n = int(input("Digite o valor de n: "))
n2 = int(input("Digite o valor de n2: "))

soma = 0
  
for divisor in range(1,n):
    if n % divisor == 0:
      soma += divisor # soma = soma + divisor

if n == soma:
  print("O divisor %d é perfeito" %(n))
  
else: 
  print("O divisor %d nao é perfeito\n" %(n))
        
soma = 0
  
for divisor2 in range(1,n2):
  if n2 % divisor2 == 0:
    soma += divisor2 # soma = soma + divisor

if n2 == soma:
  print("O divisor %d é perfeito" %(n2))
else: 
  print("O divisor %d nao é perfeito" %(n2))
  
# . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
main()
