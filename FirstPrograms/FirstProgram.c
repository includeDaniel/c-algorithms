#include <stdio.h>

int main()
{
    char nome[20];
    int idade;
    printf("type your name: ");
    scanf("%s[^\n]", nome);
    setbuf(stdin, 0);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Nome: %s %d anos", nome, idade);

    return 0;
}