#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//VARIAVEIS GLOBAIS
struct compras{
	char nome [100][100];
	float valor[100];
	float qnt[100];
};
struct compras c;
float despesa;
int i;

//FUNCAO INPUT SALARIO
float ler_salario (float salario)
{
	printf ("\n\n\n\n-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n                         -_-_-_-POR FAVOR--DIGITE O MONTANTE DISPONIVEL PARA COMPRAS-_-_-_-                            ");
	printf ("\n-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n                                                      Valor[BRL]:");
	scanf ("%f", &salario);
	return salario;
}


//FUNÇÃO INPUT CARRINHO
void carrinho (int salario)
{
	char opcao = 'n';
	int ch;
	do 
	{
	system ("cls");
    printf ("-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n                                             BEM VINDO AO MERCADO                                                      ");
	printf ("\n-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n\n                          DIGITE OS ITENS QUE VOCE DESEJA COMPRAR EM NOSSA ESTANTE VIRTUAL");
	printf ("\n\n                                               TENHA OTIMAS COMPRAS :]");
	printf ("\n-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n                             INFORME-->NOME, PRECO E QUANTIDADE DO PRODUTO ABAIXO");
	printf ("\n\n\n               NOME:");
	  while (ch = getchar() != '\n' && ch != EOF); //clear
	fgets (c.nome[i], 100, stdin);
    printf ("               PRECO:");
    scanf ("%f", &c.valor[i]);
    printf ("               QUANTIDADE:");
    scanf ("%f", &c.qnt[i]);
    despesa += c.valor[i] * c.qnt[i]; //calculo despesa
    i+=i+1;
      while (ch = getchar() != '\n' && ch != EOF); //clear
    printf ("\n\n               PRESSIONE S PARA ADICIONAR MAIS PRODUTOS OU N PARA FINALIZAR:");
    scanf ("%c", &opcao);
    while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N') 
	{
    	  while (ch = getchar() != '\n' && ch != EOF); //clear
		printf ("\nRESPOSTA INVALIDA! DIGITE NOVAMENTE:");
    	scanf ("%c", &opcao);
	}
	} while (opcao == 'S' || opcao == 's');

}

//FUNCAO CALCULO
float calculo (float sobra, float salario)
{
	sobra= salario - despesa;
	return sobra;
}


//MAIN
int main() {
	float salario=1;
	float sobra;
	int cont;
	printf ("-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n                                             BEM VINDO AO MERCADO                                                      ");
	printf ("\n-----------------------------------------------------------------------------------------------------------------------");
	salario = ler_salario(salario);
	carrinho(salario);
	sobra = calculo(sobra, salario);
	system ("cls");
	printf ("-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n                                                  NOTA FISCAL                                                          ");
	printf ("\n-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  ");
    printf ("\n  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  ");
	printf ("\n  PRODUTO                                           VALOR                                               QUANTIDADE     ");
	printf ("\n-----------------------------------------------------------------------------------------------------------------------");
	printf ("\n\n");
	for (cont=0;cont<i-1;cont++)
	{
	printf ("\n  %s                                                    %.2f                                                 %.2f ", c.nome[cont], c.valor[cont], c.qnt[cont]);	
	}
	printf ("\n\n                                    SALDO DISPONIVEL: %.2f", sobra);
	//printf ("\nsalario:%f", salario);
	//printf ("\ndespesa: %f", despesa);
    

}
