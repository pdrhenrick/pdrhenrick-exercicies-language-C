/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    printf("digite a nota 1:");
    scanf("%f", &nota1);

    printf("digite a nota 2:");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) /2;
    printf("a media é: %f", media);
    
    if(media >=6){
        printf("\naprovado");
    }

    else{
        printf("\nreprovado");
    }
    return 0;
}

