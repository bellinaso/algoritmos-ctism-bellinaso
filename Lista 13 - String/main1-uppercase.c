/*Escreva um programa em C para ler uma frase. A seguir converter todas as letras
minúsculas existentes na frase para maiúsculas. Escrever a frase modificada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    char str1[100];
    printf("Entre com uma string: ");
    gets(str1);

    strupr(str1); // Uper case
    printf("A string resultante e: %s", str1);

}