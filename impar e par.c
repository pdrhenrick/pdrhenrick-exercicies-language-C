/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
    printf("O numero digitado é par.\n");
    
    }else{
    printf("O numero digitado é ímpar.\n");
    }

    return 0;
}

