/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define SENHA_CORRETA 1234

int main() {
    int senha;

    while(1) {
    printf("Digite a senha de quatro dígitos: ");
    scanf("%d", &senha);

    if(senha == SENHA_CORRETA) {
    printf("Senha Correta\n");
    break;
    } else {
    printf("Senha Incorreta\n");
}
    }

    return 0;
}


