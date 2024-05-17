/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, i = 1;

    do {
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 10) {
    printf("Número inválido\n");
}
    } while (numero < 1 || numero > 10);

    while (i <= 10) {
    printf("%d X %d = %d\n", numero, i, numero * i);
    i++;
}

    return 0;
}

