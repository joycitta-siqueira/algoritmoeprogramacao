#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
	int opcao;
	int n1, n2, result;
	printf("Selecione sua opcao: \n");
	printf("1. Soma\n2. Produto\n3. Area do Circulo\n4. Baskara\n");
	scanf("%d", &opcao);
	printf("Deposite aqui seu valor inteiro: ");
	scanf( "%d", &n1 );
	printf("Deposite aqui seu valor inteiro: ");
	scanf( "%d", &n2 );
	switch(opcao){
		case 1: 
			result = n1 + n2;
			printf("%d", result);
		break;
		case 2: 
			result = n1 * n2;
			printf("%d", result);
		break;
		case 3: 
			double raio;
			printf("Insira um valor para o raio: ");
			scanf("%lf", &raio);
			printf("O valor da area = %.2lf", pow(raio,2) * PI);
		break;
		case 4: 
			float a, b, c, del, x1, x2;
		    printf("Digite o valor de A: ");
		    scanf("%f", &a);
		    printf("Digite o valor de B: ");
		    scanf("%f", &b);
		    printf("Digite o valor de C: ");
		    scanf("%f", &c);
		    del = (b * b) - (4 * a * c);
		    if (del >= 0 && a != 0) {
		        
		        x1 = (-b + sqrt(del)) / (2*a);
		        x2 = (-b - sqrt(del)) / (2*a);
		        printf("\nX' = %.3f\n", x1);
		        printf("\nX'' = %.3f\n\n", x2);
		        }
		
		    else {printf("\nValor invalido, tente novamente...\n");}
		break;
		default: printf("valor invalido!");
	}	
}

