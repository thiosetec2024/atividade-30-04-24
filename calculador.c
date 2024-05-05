#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL , "Portuguese");
    char operador, continuar;
    float num1, num2, resultado;
   
    do {
	printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);
   
    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
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
            	
            	             	 
                printf(" Divisao por zero nao  permitida.");
                
            } else {
                resultado = num1 / num2;
            }
            break;
        default:
            printf("Operador invalido!");
            return 01;
    }
    
    printf("Resultado: %.2f\n", resultado);
    
    printf("Gostaria de continuar calculando S / N : ");
     scanf(" %c" , &continuar);
	 
	} while (continuar =='S' , continuar == 's');
	 
	 printf ("Calculadora Finalizada \n ");
   
    return 0;
}

	   
   


