/*Leia 2 valores inteiros e armazene-os nas variáveis A e B. 
Efetue a soma de A e B atribuindo o seu resultado na variável X. 
Imprima X conforme exemplo apresentado abaixo. */

#include <stdio.h>

int main(){
	int a, b, x;
	printf("Usuario, seu lindo! Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Usuario, seu lindo! Digite o segundo numero: ");
	scanf("%d", &b);
	x = a + b; //comando de atribuição = ; operador matematico +
	printf("X = %d\n", x);
	printf("X = %d\n", &x);// impressao do endereco de memoria em decimal
	printf("X = %x\n", &x);// impressao do endereco de memoria em hexadecimal
}
