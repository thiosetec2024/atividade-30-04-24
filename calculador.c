#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite um numero números: ");
    scanf("%f", &num1);

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois números: ");
    scanf("%f", &num2);
        
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            
            if (num2 == 0) {
                printf(" Divisão por zero não é permitida.");
                return 1; 
            } else {
                resultado = num1 / num2;
            }
            break;
        default:
            printf("Operador inválido!");
            return 1; 
    }
    
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
      
      
      
      	
	  (n1 = n1 * n2);
	if (n1 == 0)
	  printf("Não é possível multiplicar por 0 !");
	else 
	  printf("A multiplicação dos números fornecidos é igual a: %d", n1);

}
	   
   


