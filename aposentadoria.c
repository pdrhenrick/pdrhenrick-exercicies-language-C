/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, tempo_de_serviço;
    
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    
    printf("Digite o tempo de serviço do trabalhador: ");
    scanf("%d", &tempo_de_serviço);
    
    if(idade>=65)
    {
    printf("O trabalhador pode se aposentar.\n");}
    
    else if (tempo_de_serviço >= 30)
    {
        
    }
    else{
    printf("O trabalhador não pode se aposentar.\n");
    }
    

    return 0;
}

