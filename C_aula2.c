#include <stdio.h>
#include <math.h>

int main(){
/*
Operadores aritméticos
    Atribuições aritméticas
 */
/*
Operadores matematicos
    Soma: +
    Subtração: -
    Multiplicação: *
    Divisão: /
    Resto da divisão inteira: %
Existe precedência entre operadores*/
int A, B, somar, subtrair, multiplicar, dividir;
printf("Digite o valor de A: ");
scanf("%d", &A);
printf("Digite o valor de B: ");
scanf("%d", &B);
somar = A + B;
subtrair = A - B;
multiplicar = A * B;
dividir = A / B;

printf("A soma de A e B: %d\n", somar);
printf("A subtracao de A e B: %d\n", subtrair);
printf("A multiplicacao de A e B: %d\n", multiplicar);
printf("A divisao de A e B: %d\n", dividir);

/*
Atribuidores aritméticos
    Atribuição de soma: +=
    Atribuição de subtração: -=
    Atribuição de multiplicação: *=
    Atribuição de divisão: /=
    Atribuição de resto da divisão inteira: %=
    Incremento: ++
    Decremento: --
*/
int dado = 10;
printf("Dado antes do incremento: %d.\n", dado);
dado++;
printf("Dado antes do incremento: %d.\n", dado);
dado--;
printf("Dado antes do incremento: %d.\n", dado);
dado+=3;
printf("Dado antes do incremento: %d.\n", dado);
dado-=2;
printf("Dado antes do incremento: %d.\n", dado);
dado*=2;

    return 0;
}