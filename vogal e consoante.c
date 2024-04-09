/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    
    printf("Digite uma letra minuscula\n");
    scanf("%c",&letra);
    
    switch(letra){
        case 'a':
        printf("a é uma vogal");
        break;
        case 'e':
        printf("e é uma vogal");
        break;
        case 'i':
        printf("i é uma vogal");
        break;
        case 'o':
        printf("o é uma vogal");
        break;
        case 'u':
        printf("u é uma vogal");
        break;
        
        default:
        printf("é uma consoante");
        break;
    }
}

