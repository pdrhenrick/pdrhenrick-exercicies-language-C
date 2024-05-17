/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade;
    int contador = 0;

    for (int i = 0; i < 5; i++) {
    printf("Digite a idade da pessoa %d: ", i+1);
    scanf("%d", &idade);

   
    if (idade > 18) {
    contador++;
    }
    }
 
    printf("Número de pessoas maiores que 18 anos: %d\n", contador);

    return 0;
}
