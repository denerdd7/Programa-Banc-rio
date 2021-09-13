#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

double saldo = 0, vl_deposito = 0 , vl_saque = 0;

char title(){
	printf("*******************************************************************************\n");
    printf("     	                 $$ DehSoft Sistema Bancário $$\n");
    printf("    		    Desenvolvido por: Dener Rodrigues Freire\n");
    printf("    	  	          Matrícula CEFET: 20202022612\n\n");
    printf("*******************************************************************************\n\n");}

double saque(){
    double vl_saque;
    printf("Digite o Valor que Deseja Sacar:");
    scanf("%lf", &vl_saque);

    if(vl_saque>saldo || vl_saque<0){
    	system("color 4F");
        printf("\n\nValor Negativo ou Saldo Insuficiente!!!\n\n");
    }else{
    saldo = saldo - vl_saque;

    system("color 2F");
    printf("\n\nSaque efetuado com sucesso!!!\n\n");}}

double deposito(){
	double vl_deposito;
	printf("Digite o Valor do Depósito:");
	scanf("%lf", &vl_deposito);

	if(vl_deposito<0){
		system("color 4F");
        printf("\n\nErro, Valor Negativo!!!\n\n");
    }else{
	saldo = saldo + vl_deposito;

	system("color 2F");
	printf("\n\nDepósito Efetuado com Sucesso!\n\n");}}

double versaldo(){

	printf("\n\nSeu Saldo Atual é: R$%.2lf\n\n", saldo);

	}

void sair(){
    printf(" \n\nAté Mais, Obrigado!\n\n");
}

void opcaoinvalida(){
	system("color 4F");
    printf("\n\nDigite uma Opção Válida!\n\n");
}

int main() {
	system("color 1F");
	setlocale(LC_ALL, "portuguese");

	char conta1[20];
    char conta2[20] = "20202022612";
    char senha1[20];
    char senha2[20] = "dener";
    int login_efetuado=1;
    int op;

		do{
	title();

	printf("Informe Sua Conta:");
    scanf("%s", &conta1);
    printf("Informe Sua Senha:");
    scanf("%s", &senha1);

    login_efetuado=strcmp(conta2,conta1) || strcmp(senha2,senha1);

    if(strcmp(conta1,conta2)==0 && strcmp(senha1,senha2)==0){
    	system("color 2F");
        printf("\n\nLogin Efetuado com Sucesso!!!\n\n");

        }else
		system("color 4F");
        printf("\n\nNúmero da Conta ou Senha Incorreta, Tente Novamente!!!\n\n");

            system("pause");
    		system("cls");

    		}while(login_efetuado!=0);

    		 do{
    title();
    printf("1 = Saque\n");
    printf("2 = Depósito\n");
    printf("3 = Saldo\n");
    printf("4 = Sair\n\n");
    printf("Digite uma Opção:");
    scanf("%d", &op);

	switch(op){

		case 1 : system("cls");
		saque(); system("pause"); system("cls"); break;

		case 2 : system("cls");
		deposito(); system("pause"); system("cls"); break;

		case 3 : system("cls");
		versaldo(); system("pause"); system("cls"); break;

		case 4 : sair(); break;

		default: opcaoinvalida(); system("pause"); system("cls"); break;

		}

		}while ( op != 4 );


}
