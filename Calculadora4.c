#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 main() {
    setlocale(LC_ALL , "Portuguese");
    char operador;
    float num1, num2, resultado;
    int validar1, validar2; 
    char continuar;

    do {
                printf(" _______________________________________________\n");
            	printf("|               CALCULADORA DO                  |\n");
                printf("|                   THIAGO                      |\n");
                printf("|_______________________________________________|\n");
        printf("\n" );

        
        do {
            printf("Digite um numero: ");
            validar1 = scanf("%f", &num1);

           
            if (validar1 != 1) {
            	printf("  _______________________________________________\n");
            	printf(" |>>>>>>>>>>>>>>>>>>>ATEN��O<<<<<<<<<<<<<<<<<<<<<|\n");
                printf(" |       Favor informar apenas numeros!!!!       |\n");
                printf(" |_______________________________________________|\n");
               
            }
        } while (validar1 != 1);

                printf("  _______________________________________________\n ");
                printf("|                                               |\n ");
                printf("| Informe a opera��o que gostaria de efetuar    |\n ");
                printf("|             + soma , - subtra��o ,            |\n ");
                printf("|        * multiplica��o  , / divis�o           |\n ");
                printf("|_______________________________________________|\n ");
                printf("\n" );
                printf("Opera��o: ");
       
        scanf(" %c", &operador);
    
         
        if (operador!='-'  && operador!='+'  && operador!='*'  && operador!='/') {
            	printf(" _______________________________________________\n");
            	printf("|>>>>>>>>>>>>>>>>>>>ATEN��O<<<<<<<<<<<<<<<<<<<<<|\n");
                printf("|              Opera��o invalida                |\n");
                printf("|_______________________________________________|\n");
                printf("\n" );
        } else {
            
            do {
            	printf("\n");
                printf("Digite outro numero: ");
               
                validar2 = scanf("%f", &num2);
            
                
                if (validar2 != 1) {
                printf(" _______________________________________________\n");
            	printf("|>>>>>>>>>>>>>>>>>>>ATEN��O<<<<<<<<<<<<<<<<<<<<<|\n");
                printf("|       Favor informar apenas numeros!!!!       |\n");
                printf("|_______________________________________________|\n");
                     
                }
            } while (validar2 != 1);

            if (operador == '/' && num2 == 0) {
                printf(" _______________________________________________\n");
            	printf("|>>>>>>>>>>>>>>>>>>>ATEN��O<<<<<<<<<<<<<<<<<<<<<|\n");
                printf("|      N�O � POSSIVEL DIVIS�O POR ZERO!!!!      |\n");
                printf("|_______________________________________________|\n");
            } else {
                switch(operador) {
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
                        resultado = num1 / num2;
                        break;
                }
                printf( "\n" );
                
                printf("O resultado da opera��o �: %.2f\n", resultado);
            }
        }
        printf( "\n" ); 
        printf(" _______________________________________________\n");
        printf("|                                               |\n");
        printf("|     GOSTARIA DE CONTINUAR CALCULANDO!!!!      |\n");
        printf("|_______________________________________________|\n");
        printf( "\n" );
        printf("informe S / N : ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');
        printf( "\n" );
        printf(" _______________________________________________\n");
        printf("|            Obrigado por utilizar              |\n");
        printf("|            Calculadora do THIAGO!             |\n");
        printf("|_______________________________________________|\n");
        printf( "\n" );

    
}

