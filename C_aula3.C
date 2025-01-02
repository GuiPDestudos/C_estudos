#include <stdio.h>

int main() {
    /*
    Comando if:
    if (condição) {
        bloco de comandos
    }
    */

   int num;

   printf("Digite um numero:");
   scanf("%d", &num);

   if(num < 10){
    printf("Seja bem vindo\n");
   }else{
    printf("Acesso negado\n");
   }
    return 0;
}