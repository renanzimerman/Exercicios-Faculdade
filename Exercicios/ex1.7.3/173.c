/*-------------------------------------------------------------------------
Descrição: Esse programa imprime um nome, escolhido pelo usuário, na tela
Autor: Renan Zimerman Leite
Data: 23/04/2020
---------------------------------------------------------------------------*/

#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[50];

    printf("Digite o seu nome completo: ");
    scanf("%[^\n]s", &nome);

    printf("O seu nome é %s", nome);
}