#include "leitor.c"

int main() {

    float valor_carne = 0.0;
    float valor_acomp = 0.0;
    float valor_bebida = 0.0;
    float total = 0.0;
   
    

    printf("Escolha um tipo de carne:\n ");
    printf("1	Filé de frango	15,00\n 2	Bisteca suína	15,00\n 3	Carne de panela	17,50 \n 4	Peixe empanado	16,00\n 5	Carne de soja	18,00\n");

    int carne = ler_int();

    switch(carne) {
        case 1:
            printf("Filé de frango (R$ 15,00)\n");
            valor_carne = 15.00; // <--- Guardamos o preço aqui
            break;

        case 2:
            printf("Bisteca suína (R$ 15,00)\n");
            valor_carne = 15.00;
            break;

        case 3:
            printf("Carne de panela (R$ 17,50)\n");
            valor_carne = 17.50;
            break;

        case 4:
            printf("Peixe empanado (R$ 16,00)\n");
            valor_carne = 16.00;
            break;

        case 5:
            printf("Carne de soja (R$ 18,00)\n");
            valor_carne = 18.00;
            break;

        default:
            printf("Número inválido!!!\n");
            valor_carne = 0.0;
    }

    printf("\n");

    printf("Escolha um acompanhamento:\n 1	Arroz e feijão	10,00\n 2	Arroz e fritas	11,00\n 3	Macarrão alho e óleo	12,00\n 4	Macarrão à bolonhesa	14,00\n");
   
    int acompanhamento = ler_int();

    switch(acompanhamento) {
        case 1:
            printf("Arroz e feijão	10,00\n");
            valor_acomp = 10.00;
            break;

        case 2:
            printf("Arroz e fritas	11,00\n");
            valor_acomp = 11.00;
            break;

        case 3:
            printf("AMacarrão alho e óleo	12,00\n");
            valor_acomp = 12.00;
            break;

        case 4:
            printf("Macarrão à bolonhesa	14,00\n");
            valor_acomp = 14.00;
            break;

        default:
            printf("Número invalido!!!");
            valor_acomp = 0.0;
    }

    printf("\n");

    printf("Escolha uma bebida:\n 1	Coca-Cola 200 ml	2,50\n 2	Suco de Laranja 200ml	4,50\n 3	Água Mineral 350ml	1,50\n");
    
       int bebida = ler_int();

    switch(bebida) {
        case 1:
            printf("Coca-Cola 200 ml	2,50\n");
            valor_bebida = 2.50;
            break;
        case 2:
            printf("Suco de Laranja 200ml	4,50\n");
            valor_bebida = 4.50;
            break;
        case 3:
            printf("Água Mineral 350ml	1,50\n");
            valor_bebida = 1.50;
            break;

        default:
        printf("Número invalido!!!\n");
        valor_bebida = 0.0;
    }

    printf("\n");

    printf("Você pediu: \n");

     printf("Carne: "); 
    switch(carne) {
        case 1: 
            printf("Filé de frango");
            break;

        case 2: 
            printf("Bisteca suína"); 
            break;

        case 3: 
            printf("Carne de panela");
            break;

        case 4: 
            printf("Peixe empanado"); 
            break;

        case 5: 
            printf("Carne de soja"); 
            break;

        default: 
            printf("Inválido/Sem carne");
    }

    printf(" --- R$ %.2f\n", valor_carne);

    printf("Acompanhamento: ");
    switch(acompanhamento) {
        case 1: 
            printf("Arroz e feijão"); 
            break;

        case 2: 
            printf("Arroz e fritas"); 
            break;

        case 3: 
            printf("Macarrão alho e óleo"); 
            break;

        case 4: 
            printf("Macarrão à bolonhesa"); 
            break;

        default: 
            printf("Inválido/Sem acomp.");
    }

    printf(" --- R$ %.2f\n", valor_acomp);


   
    printf("Bebida: ");
    switch(bebida) {
        case 1: 
            printf("Coca-Cola 200 ml"); 
            break;

        case 2: 
            printf("Suco de Laranja 200ml"); 
            break;

        case 3: 
            printf("Água Mineral 350ml");
            break;

        default: 
            printf("Inválido/Sem bebida");
    }

    printf(" --- R$ %.2f\n", valor_bebida);

    total = valor_carne + valor_acomp + valor_bebida;

    printf("\n");

    printf("O valor do seu pedido é %.2f:\n", total);


    return 0;
}


