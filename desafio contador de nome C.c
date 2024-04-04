#include <stdio.h>
#include <string.h>

void main() {

    char nome[80];
    int i, contador;

    // mensagem identificacao
    printf("\n\nContador de Vogais presente no nome\n\n");

    // capturar nome digitado
    printf("\nInforme seu nome:");
    gets(nome); // captura do conjunto de caracteres informados

    i = 0;
    contador = 0;
    // estrutura de repeticao pra recorrer a string
    do {
        switch (nome[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                contador++;
                break;
            default:
                break;
        }
        i++;
    } while (nome[i]!= '\0');

    // impressao do nome e qtd de vogais
    printf("\nO seu nome %s contem percentual %d", nome, contador);
}