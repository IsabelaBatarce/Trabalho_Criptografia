#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

	int escolha_menu, i=10,x=0,l=0,k=0, identificacao_agente, contagem=0;
	char nome_agente[100],departamento[60],mensagem_sem_criptografia[40];
	char alfabeto[]="abcdefghijklmnopqrstuvwxyz";
	char alfabeto_2[]="vwxyz";

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
		getchar();
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
				

				printf("Digite o numero de identificacao do agente:\n");
				scanf("%d",&mensagens.identificacao_agente);
				contagem = strlen(mensagem_sem_criptografia);

				/*Criptografando a mensagem*/
				while(x<contagem){
					if(((mensagem_sem_criptografia[x]<86) && (mensagem_sem_criptografia[x]>90)) ||(mensagem_sem_criptografia[x]<117)){
						l = mensagem_sem_criptografia[x];
						int y = l+5;
						mensagens.mensagem_criptografada[x] = y;
						//printf("alfabeto+5: %d, L: %d x: %d posicaoy:%d\n", y,l,x,alfabeto[y]);
						x++;
						
					}else{
						while(k<5){
							if(alfabeto_2[k]== mensagem_sem_criptografia[x]){
								mensagens.mensagem_criptografada[x] = alfabeto[k];
								x++;
								l=0;
								break;
							}else{
								k++;								
							}
						}
						if(k==4){
							k=0;
							l++;
						}	
					}
				}
				//	printf("Criptografou? %s\n", mensagens.mensagem_criptografada);
				//printf("%d\n", teste);

									
			}else{
				if(i==2){
					printf("Encontrar padrões\n");
				}else{
					if(i==3){
						printf("****DESCRIPTOGRAFAR MENSAGEM****\nDigite a mensagem criptografada:\n");
						fgets(mensagem_criptografada,40,stdin);
						contagem= strlen(mensagem_criptografada);
						while(){
							if(strcmp(mensagem_criptografada, mensagens.mensagem_criptografada) == 0){
								printf("%s\n",mensagens.nome_agente);
								printf("%s\n",mensagens.departamento);
								printf("%d\n",mensagens.identificacao_agente);
								printf("%s\n",mensagens.mensagem_criptografada);
								break;
							}else{
								k++;
							}						
						}
						
								
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
