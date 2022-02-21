#include <stdio.h>

int main(void) {
	int idade;
	char letra;
	//char unicaPalavra[50];
    //char duasPalavras[50];
	//printf("Digite a idade: ");
	//scanf("%d", &idade);
	printf("Digite a letra: ");
	scanf("%c", &letra); //apenas esse pode ser utilizado no switch
    /*fflush(stdin);//limpar buffer (apenas para char e string)
	printf("Digite a palavra: ");
	scanf("%s", &unicaPalavra); //não permite colocar espaços
	fflush(stdin);
	fgets(duasPalavras, 50, stdin); //permite colocar espaço
	
	printf("Letra: %c", letra);
	printf("Unica palavra: %s", unicaPalavra);
	printf("Duas palavras: %s", duasPalavras);*/
	

	switch(letra){
		case 'S': printf("digitou S\n"); break;
		case 's': printf("digitou s\n"); break;
		case 'N': printf("digitou N\n"); break;
		case 'F': printf("digitou F\n"); break;
		default: printf("Letra invalida\n");
	}
}
