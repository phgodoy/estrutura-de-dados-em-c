//Bibliotecas 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdbool.h>
#include "funcoes-agenda-ponteiro.h"




//Funcao principal

int main(){
	contato  *inicio = cria_ponteiro();
	
	color_graphic();
	
	while(op!=666){
		printf("\n********AGENDA2000******");
		printf("\n1-inserir");
		printf("\n2-imprimir");
		printf("\n3-consultar");
		printf("\n4-editar contato");
		printf("\n5-remover contato");
		printf("\n6-imprimir inverso");
		printf("\n7-sair");
		printf("\n************************");
		printf("\ninforme a opcao\n: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				load();
				inserir(inicio);
				break;
			}
			case 2:{
				load();
				imprimir(inicio);
				break;
			}
			case 3:{
				load();
				consultar(inicio);
				break;
			}
			case 4:{
				load();
				editar_contato(inicio);
				break;
			}
			case 5:{
				load();
				remover_contato(inicio);
				break;
			}
			case 6:{
				load();
				imprimir_inverso(inicio);
				break;
			}
			case 7:{
				exit();
				sair();		
				break;
			}
			default:{
				clear();
				printf("\n********AGENDA2000******");
				printf("\n1-inserir");
				printf("\n2-imprimir");
				printf("\n3-consultar");
				printf("\n4-editar contato");
				printf("\n5-remover contato");
				printf("\n6-sair");
				printf("\n************************");
				op_invalida();
				break;
			}
		}	
	}
}
