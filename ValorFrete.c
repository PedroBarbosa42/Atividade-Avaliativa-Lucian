#include "leitor.c"


int main() {

    printf("Digite o numero correspondente ao seu estado para saber o valor do frete:\n\n1 - Sul\n2 - Sudeste\n3 - Centro-Oeste\n4 - Nordeste\n5 - Norte\n\n ");

    int regiao = ler_int();

    switch (regiao) {
        case 1:
            printf("O valor do frete para o Sul é de: R$5,00\n");
            break; 

        case 2:
            printf("O valor do frete para o Suldeste é de: R$5,00\n");
            break;

        case 3:
            printf("O valor do frete para o Centro-Oeste é de: R$7,50\n");
            break;

        case 4:
            printf("O valor do frete para o Nordeste é de: R$12,50\n");
            break;

        case 5:
            printf("O valor do frete para o Norte é de: R$15,00\n");
            break;

        default:
            printf("Opcao invalida!\n");

        }

        return 0;
}
