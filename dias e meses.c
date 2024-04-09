/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dias;
    
    printf("quantidade de dias\n");
    scanf("%i", &dias);
    
    switch (dias){
    case 28 :
    printf("Mês 02");
    break;
    case 30 :
    printf("Mês 04, 06, 09, 11");
    break;
    case 31 :
    printf("Mês 01, 03, 05, 07, 08, 10, 12");
    break;
    default:
    printf("Mês invalido");
    }
}

