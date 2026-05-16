#include <stdio.h>

int reserva(void);
int cancela(void);
int verificar(void);
int listar(void);
 typedef struct
    {
        int numero;
        char disponivel [20] ;
    } sala;
    sala salas[10];

int main(int argc, char const *argv[])
{
    int opcao;

    while (opcao != 0) {
        printf("==== Menu ====\n");
        printf("1 - Reserva\n");
        printf("2 - Cancela\n");
        printf("3 - Listar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                reserva();
                break;
            case 2:
                cancela();
                break;
            case 3:
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
    int f;
    printf("Funcao reserva chamada.\n");
    for (int i = 1; i <= 10; i++)
    {
        if (strcmp(salas[i].disponivel,"nao") == 0)
        {
            printf("Sala %d ja esta alugada.\n", salas[i].numero);
            continue;
        }else{ 
            salas[i].numero = i;
            strcpy(salas[i].disponivel,"pode");
            printf("Sala %d: %s\n", salas[i].numero, salas[i].disponivel);
        }
    }
    printf("Qual sala gostaria de alugar?\n");
    scanf("%d", &f);
    if (f>10)
    {
    printf("Opcao invalida.\n");
    }
    else{
        if (strcmp(salas[f].disponivel,"nao") == 0)
        {
            printf("Sala %d ja esta alugada.\n", salas[f].numero);
            return 0;
        }
    printf("Sala %d alugada com sucesso.\n", salas[f].numero);
    strcpy(salas[f].disponivel,"nao");
    }
    return 0;
}

int cancela(void)
{
    printf("Funcao cancela chamada.\n");
    return 0;
}

int listar(void)
{
    printf("Funcao listar chamada.\n");
    for (int i = 1; i <= 10; i++)
    {
        if (salas[i].numero==0)//caso apenas liste o numero de salas sem passar por reserva, se nao "buga", é so questao visual no caso de so ir em listar sem ir em reserva antes.
        {
        salas[i].numero = i;
        strcpy(salas[i].disponivel,"pode");
        }
        
        printf("Sala %d: %s\n", salas[i].numero, salas[i].disponivel);
    }
    return 0;
}