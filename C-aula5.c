#include <stdio.h>


int main(){
    /*
    Comandos break e continue
    Comando break: interrompe a execução de um laço de repetição
    Comando continue: interrompe a execução da iteração atual de um laço de repetição
    */
   /*Exemplo-break*/

   for(int i=0; i<10; i++){
    printf("%d\n", i);
       if(i==5){
           break;
       }
   }
printf("Fim do laço\n");
   /*Exemplo-continue*/   
    for(int i=0; i<10; i++){
         if(i==5){
              continue;
         }
         printf("%d\n", i);
    }
    return 0;
}