#include <stdio.h>

int main()
{
    char nome[50];

    printf("Digite seu nome completo: ");
    scanf("%[^\n]s", &nome);

    printf("O seu nome é: %s", nome);

    return 0;
}