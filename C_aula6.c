#include <stdio.h>

int main(){
/*  Vetores(Array)
    Vetores são variáveis compostas que armazenam vários valores do mesmo tipo
    Estruturas de dados unidimensionais
    Indice unico controla as posicoes
    Sintaxe de declaraçao:
        tipo nome[tamanho];
        */

/*
Acesso a uma posiçao 
    Não é  possivel acessar um vetor inteiro
    Sintaxe:
        nome[posicao]
Lista de inicialização: preencher um vetor todo de uma vez só
    Sintaxe:
        tipo nome[tamanho] = {valor1, valor2, valor3, ...};
*/

int v[5];
float m;

v[0] = 10;
v[1] = 20;
v[2] = 70;
v[3] = 40;
v[4] = 50;

m = (v[0] + v[1] + v[2] + v[3] + v[4])/5;

printf("Resultado: %f\n", m);



    return 0;
}