#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int escolha_menu, i=1, identificacao_agente;
	char nome_agente[100],departamento[60],mensagem_sem_criptografia[40];

	typedef struct criptografar_mensagem{
		char nome_agente[100];
		char departamento[60];
		char mensagem_criptografada[40];
		int identificacao_agente;

	} Criptografar;
	
	Criptografar mensagens;

	while(i =! 0){
		printf("****MENU CRIPTOGRAFIA****\n1: Criptografar mensagem\n2: Encontrar padroes\n3: Descriptografar mensagem\n4: Visualizar todas as mensagens\n0: Sair!\n");
		scanf("%d",&escolha_menu);
		i= escolha_menu;
		//printf("Valor de i: %d\n", i);
		if(i==0){
			break;
		}else{
			if(i==1){
				//printf("Criptografar Mensagem\n");
				printf("****ADICIONAR MENSAGEM****\n");

				fflush(stdin);
				printf("Digite o nome do agente:\n");
				fgets(mensagens.nome_agente,100,stdin);
				fflush(stdin);

				printf("Digite o departamento:\n");
				fgets(mensagens.departamento,60,stdin);
				fflush(stdin);

				printf("Digite a mensagem a ser criptografada:\n");
				fgets(mensagem_sem_criptografia,40,stdin);
				fflush(stdin);

				printf("Digite o numero de identificacao do agente:\n");
				scanf("%d",&mensagens.identificacao_agente);
			}else{
				if(i==2){
					printf("Encontrar padrões\n");
				}else{
					if(i==3){
						printf("Descriptografar mensagem\n");		
					}else{
						if(i==4){
							printf("Visualizar as mensagens\n");
						}else{
							printf("****Opção Invalida, tentar novamente****\n");
						}
					}
				}			
			}
		}
		
		
	}

	/*void Criptografar_mensagem()

	*/	
	return 0;
}
