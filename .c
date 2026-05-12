#include <stdio.h>

int reserva(void);
int cancela(void);
int verificar(void);
int listar(void);

int main(int argc, char const *argv[])
{
    int opcao = -1;

    while (opcao != 0) {
        printf("==== Menu ====\n");
        printf("1 - Reserva\n");
        printf("2 - Cancela\n");
        printf("3 - Verificar\n");
        printf("4 - Listar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Saindo.\n");
            break;
        }

        switch (opcao) {
            case 1:
                reserva();
                break;
            case 2:
                cancela();
                break;
            case 3:
                verificar();
                break;
            case 4:
                listar();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("hello world\n");
                break;
        }

        printf("\n");
    }

    return 0;
}

int reserva(void)
{
    printf("Funcao reserva chamada.\n");
    return 0;
}

int cancela(void)
{
    printf("Funcao cancela chamada.\n");
    return 0;
}

int verificar(void)
{
    printf("Funcao verificar chamada.\n");
    return 0;
}

int listar(void)
{
    printf("Funcao listar chamada.\n");
    return 0;
}