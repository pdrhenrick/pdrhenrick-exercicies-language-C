/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nota1, nota2, media;
    
    printf("Digite a primeira nota do aluno:");
    scanf("%i",&nota1);
    
    printf("Digite a segunda nota do aluno:");
    scanf("%i",&nota2);
    
    media = (nota1 + nota2) /2;
    
    printf("media do aluno = %i\n", media);
    
    if (media>=5){
    
    printf("passou tiozao");}
    
    else{
    printf("re pro va do");}
    
    

    return 0;
}

