/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nota;
    
    printf("Notas\n");
    scanf("%i", &nota);
    
    if(nota> 86 &&nota <100){
    printf("Nota A");
    }
    
    else if (nota> 61 &&nota <85){
    printf("Nota B");
    }
    
    else if (nota> 36 &&nota <60){
    printf("Nota C");
    }
    
    else if (nota> 1 &&nota <35){
    printf("Nota D");
    }
    
    
    return 0;
}

