#include <stdio.h>
#include <string.h>

int main() {

    int carne;

    printf("Escolha um tipo de carne:\n ");
    printf("1	Filé de frango	15,00\n 2	Bisteca suína	15,00\n 3	Carne de panela	17,50 \n 4	Peixe empanado	16,00\n 5	Carne de soja	18,00\n");

    scanf("%d", &carne);
    switch(carne) {
        case 1:
        printf("Filé de frango	15,00\n");
        break;

        case 2:
        printf("Bisteca suína	15,00\n");
        break;

        case 3:
        printf("Carne de panela	17,50\n");
        break;

        case 4:
        printf("Peixe empanado	16,00\n");
        break;

        case 5:
        printf("Carne de soja	18,00\n");
        break;


    default:
    
    printf("Número invalido!!!");
    }


    int acompanhamento;
    printf("\n");
    printf("Escolha um acompanhamento:\n 1	Arroz e feijão	10,00\n 2	Arroz e fritas	11,00\n 3	Macarrão alho e óleo	12,00\n 4	Macarrão à bolonhesa	14,00\n");
    scanf("%d", &acompanhamento);

    switch(acompanhamento) {
        case 1:
            printf("Arroz e feijão	10,00\n");
            break;

        case 2:
            printf("Arroz e fritas	11,00\n");
            break;

        case 3:
            printf("AMacarrão alho e óleo	12,00\n");
            break;

        case 4:
            printf("Macarrão à bolonhesa	14,00\n");
            break;

        default:
            printf("Número invalido!!!");
    }

    int bebida;
    printf("\n");
    printf("Escolha uma bebida:\n 1	Coca-Cola 200 ml	2,50\n 2	Suco de Laranja 200ml	4,50\n 3	Água Mineral 350ml	1,50\n");
    scanf("%d", &bebida);

    switch(bebida) {

        case 1:
            printf("Coca-Cola 200 ml	2,50\n");
            break;
        case 2:
            printf("Suco de Laranja 200ml	4,50\n");
            break;
        case 3:
            printf("Água Mineral 350ml	1,50\n");
            break;

        default:
        printf("Número invalido!!!\n");
    }

    return 0;
}


