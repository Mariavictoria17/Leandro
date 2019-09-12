#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){ 

  int menu = 1;
  int x;
  	while (menu != 0){
  	printf("Digite um numero de 1 a 9 ou 0 para sair\n");
  	scanf("%d", &menu);
	    
		
	switch(menu){
	
			//faça um programa que le um numero e diga se ele é par ou impar
			case 1:
				printf("Programa para saber Par ou Impar.\n");
				printf("Digite um numero inteiro:\n");
				int numpar;
				scanf("%d", &numpar);
				
				
				if(numpar % 2 == 0){
					printf("O numero %d e par.\n",numpar);
				}else{
				printf("O numero %d e impar.\n",numpar);
				}
				break;
				
				
				//Calcula a potencia baseado na biblioteca <math.h>
			case 2:
				float a, c;
				int b;
				printf("Programa que calcula a potencia \n");
				printf("Primeiro numero\n");
				scanf("%f", &a);
				printf("Segundo numero\n");
				scanf("%d", &b);
				
				
				c = pow(a ,b);			
				printf("A potencia e: %e\n",c);
				break;
				
				
				// ERRO???  Eleva um numero ao outro e entao extrai a raiz
			case 3:
				printf("Programa para saber a raiz\n");
				float raiza,raizc;
				int raizb;
				printf("Primeiro numero\n");
				scanf("%f", &raiza);
				printf("Segundo numero\n");
				scanf("%d", &raizb);
				raizc = pow(raiza,1.0/raizb);
				printf("%e\n",raizc);
				break;
				
				
				//Sabe-se que o numero e bissexto usando a logica abaixo
			case 4:
				int ano;
				printf("Digite um ano para ser verificado.\n");
				scanf("%d", &ano);
				
				
				if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
					printf("O ano e BISSEXTO\n");	
				}else{
					printf("NAO e BISSEXTO\n");
				}
				break;
				
				
				// para saber a media ponderada
			case 5:
				printf("Programa para saber a media ponderada\n");
				float prova1, prova2, prova3, mediap;
				printf("Nota da primeira Prova:\n");
				scanf("%f", &prova1);
				printf("Nota da Segunda Prova:\n");
				scanf("%f", &prova2);
				printf("Nota da Terceira Prova:\n");
				scanf("%f", &prova3);
				mediap = (prova1 * 1 + prova2 * 1 + prova3 * 2) / 4;
				printf("A media ponderada do aluno foi %0.1f.\n", mediap);
				
				
				if(mediap >= 60){
					printf("Aluno Aprovado\n");
				}
				else{
					printf("Aluno Reprovado\n");
				}
				break;
				
				
				//programa que calcula a media informa se algum numero digitado foi invalido
			case 6:
				
				
				float num1, num2;
				printf("Digite a primeira nota:\n");
				scanf("%f", &num1);
				printf("Digite a segunda nota:\n");
				scanf("%f", &num2);
				
				
				if(num1 <= 10 && num1 >= 0 && num2 <= 10 && num2 >= 0){
					float media = (num1 + num2) / 2;
					printf("A media do aluno foi %0.1f", media);
				}
				else{
					printf("Numero invalido encerrando programa.\n");
				}
				break;
				
				
				//Nada aqui
			case 7:
				printf("Vazio\n");
				break;
				//Aqui não a nada
			case 8:
				printf("Vazio\n");
				break;
				//ler nome e matricula e esconde o valor da matricula usando o sistema hexadecimal
			case 9:
				printf("Programa de matricula\n");
				char nome[15];
				int matricula;
				printf("Digite seu nome com ate 14 caracteres\n");
				scanf("%s",&nome);
				printf("digite o numero da sua matricula\n");
				scanf("%d",&matricula);
				
				
				printf("Nome:%s  ", nome);
				printf("Matricula:%x \n",matricula);
				break;
				
				
			default:
				printf ("Valor invalido!\n");
		}
	}
} 
