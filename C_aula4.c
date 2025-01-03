#include <stdio.h>

int main(){
    /*
     COMANDO IF PARTE.2
     Operadores logicos e condiçoes complexas:
       Conjunção: && - E
       Disjunção: || - OU
       Negação: ! - NÃO
    */
   /*Exemplo-&&*/
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 7 && media <= 10){
        printf("Aprovado\n");
    }else if(media >= 4 && media < 7){
        printf("Recuperacao\n");
    }else{
        printf("Reprovado\n");
    }
    /*Exemplo-||*/
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade < 16 || idade > 65){
        printf("Nao eleitor\n");
        }else{
            printf("Eleitor\n");
        }
    /*Exemplo-!*/

    int a = 30, b = 20;

    if(!(a > b)){
        printf("A nao eh maior que B\n");
    }else{
        printf("A eh maior que B\n");
    }

    return 0;
}
