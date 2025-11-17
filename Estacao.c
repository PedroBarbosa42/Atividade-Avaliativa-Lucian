#include <stdio.h>
#include <string.h>

int main() {

    int estacao;

    printf("--- Descubra a Estacão do Ano ---\n");
    printf("Digite o número do mês\n 1 = Jan\n 2 = Fev\n 3 = Mar\n 4 = Abr\n 5 = Mai\n 6 = Jun\n 7 = Jul\n 8 = Ago\n 9 = Set\n 10 = Out\n 11 = Nov\n 12 = Dez\n");

    scanf("%d", &estacao);

    switch(estacao) {
        case 1:
        case 2:
        case 12:
            printf("A estação deste mês é: Verão\n");
            break;

        case 3:
        case 4:
        case 5:
            printf("A estação deste mês é: Outono\n");
            break;

        case 6:
        case 7: 
        case 8:
            printf("A estação deste mês é: Inverno\n");
            break;

        case 9:
        case 10:
        case 11:
            printf("A estação deste mês é: Primavera\n");
            break;

        default:
            printf("Número invalido!!!");
        
        }

        return 0;

}


