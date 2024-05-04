#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char operador;
    float num1, num2, resultado;

    do {
        printf("Digite um operador (+, -, *, /): \n");
        scanf("%c", &operador); 
        
       if (operador != ("+", "-" , "*" ,"/")) {
           printf("Operador inválido! Digite novamente \n");
       }
    } while (operador = ( + , - , * , /));

    printf("Digite um número: \n");
    scanf("%f", &num1);

    printf("Digite outro número: \n");
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
                printf("Divisão por zero não é permitida.\n");
                return 1;
            } else {
                resultado = num1 / num2;
            }
            break;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
