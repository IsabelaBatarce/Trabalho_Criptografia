#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

	int escolha_menu, i=10,x=0,l=0,k=0,t=0,m=0,f=0,w,z,r=0,h=0,q,b,j=0,identificacao_agente, contagem=0, y, p, cont=0;
	char nome_agente[102],departamento[60],mensagem_sem_criptografia[42],mensagem_criptografada[42], mensagem_descriptografada[42], padrao[42], teste[42],vetor[2000];
	char alfabeto[]="abcdefghijklmnopqrstuvwxyz";
	char alfabeto_2[]="vwxyz";
	char alfabeto_3[]="abcde";
	char alfabetoMaiusculo[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alfabetoMaiusculo_2[]="VWXYZ";
	char  alfabetoMaiusculo_3[]="ABCDE";

	typedef struct criptografar_mensagem{
		char nome_agente[102];
		char departamento[60];
		char mensagem_criptografada[42];
		int identificacao_agente;

	} Criptografar;
	typedef struct padrao{
		char palavras_padrao[102];
	} Padrao;
	Criptografar mensagens[1002];
	Padrao procurar[1002];
	while(i =! 0){
		fflush(stdin);
		printf("****MENU DE CRIPTOGRAFIA****\n1: Criptografar mensagem\n2: Encontrar padroes\n3: Descriptografar mensagem\n4: Visualizar todas as mensagens\n0: Sair!\n");
		scanf("%d",&escolha_menu);
		getchar();
		i= escolha_menu;
		//printf("Valor de i: %d\n", i);
		if(i==0){
			break;
		}else{
			if(i==1){
				while(t<1002){
					//printf("Criptografar Mensagem\n");
					printf("****ADICIONAR MENSAGEM****\n");

					fflush(stdin);
					printf("Digite o nome do agente:\n");
					fgets(mensagens[t].nome_agente,102,stdin);
					
					fflush(stdin);
					printf("Digite o departamento:\n");
					fgets(mensagens[t].departamento,60,stdin);
					
					fflush(stdin);
					printf("Digite a mensagem a ser criptografada:\n");
					fgets(mensagem_sem_criptografia,42,stdin);
					

					printf("Digite o numero de identificacao do agente:\n");
					scanf("%d",&mensagens[t].identificacao_agente);
					contagem = strlen(mensagem_sem_criptografia);
					t++;
					r++;
					break;
				}
		

				//printf("Mensagem:%d\n",mensagem_sem_criptografia[x]);
				/*Criptografando a mensagem*/
			x=0;
			while(x<contagem){		
				if(mensagem_sem_criptografia[x] != 32){
					if((mensagem_sem_criptografia[x]>85) && (mensagem_sem_criptografia[x]<91)) {
						//printf("Entrou certo\n");
						k=86;
						l=65;
						while(k<91){
							if(mensagem_sem_criptografia[x] == k){
								y=l;
								//printf("Y: %d == K: %d\n",y,k);
								break;
							}else{
								k++;
								l++;
							}
						}
					}else{
					/*Fim caso 1*/
						if((mensagem_sem_criptografia[x]>117) && (mensagem_sem_criptografia[x]<123)){
							k=118;
							l=97;
							while(k<123){
								if(mensagem_sem_criptografia[x]==k){
									y=l;
									break;
								}else{
									k++;
									l++;
								}
							}
						}else{
					/*Fim caso 2*/
							if((mensagem_sem_criptografia[x]>64) && (mensagem_sem_criptografia[x]<86)){
								l = mensagem_sem_criptografia[x];
								y = l;
								y = l+5;
								/*Fim caso 3*/
							}else{
								if((mensagem_sem_criptografia[x]>96) && (mensagem_sem_criptografia[x]<118)){
									l = mensagem_sem_criptografia[x];
									y = l;
									y = l+5;
								}
							}
						/*Fim caso 4*/
						}
					}
				}else{
					y = 32;
				}	
				mensagens[m].mensagem_criptografada[x] = y;
				x++;	
			}

			mensagens[m].mensagem_criptografada[x-1] = '\n';
			//printf("Criptografou? %s\n", mensagens[m].mensagem_criptografada);
			m++;
												
			}else{
				if(i==2){
					printf("Digite o padrao a ser encontrado:\n");
					fgets(mensagem_sem_criptografia,42,stdin);
					x=0;
					contagem = strlen(mensagem_sem_criptografia);
					printf("Mensagem sem criptografia %s\n",mensagem_sem_criptografia);
					
				/*Criptografando a mensagem*/
				while(x<contagem){		
				if(mensagem_sem_criptografia[x] != 32){
					if((mensagem_sem_criptografia[x]>85) && (mensagem_sem_criptografia[x]<91)) {
						//printf("Entrou certo\n");
						k=86;
						l=65;
						while(k<91){
							if(mensagem_sem_criptografia[x] == k){
								y=l;
								//printf("Y: %d == K: %d\n",y,k);
								break;
							}else{
								k++;
								l++;
							}
						}
					}else{
					/*Fim caso 1*/
						if((mensagem_sem_criptografia[x]>117) && (mensagem_sem_criptografia[x]<123)){
							k=118;
							l=97;
							while(k<123){
								if(mensagem_sem_criptografia[x]==k){
									y=l;
									break;
								}else{
									k++;
									l++;
								}
							}
						}else{
					/*Fim caso 2*/
							if((mensagem_sem_criptografia[x]>64) && (mensagem_sem_criptografia[x]<86)){
								l = mensagem_sem_criptografia[x];
								y = l;
								y = l+5;
								/*Fim caso 3*/
							}else{
								if((mensagem_sem_criptografia[x]>96) && (mensagem_sem_criptografia[x]<118)){
									l = mensagem_sem_criptografia[x];
									y = l;
									y = l+5;
								}
							}
						/*Fim caso 4*/
						}
					}
				}else{
					y = 32;
				}	
				padrao[x] = y;
				x++;	
			}	
						/*Fim criptografia*/
						
			padrao[x-1]= '\n';
			padrao[strlen(padrao) -1] = '\0';
			b=0;
			j=0;
			while(j<r)
			{		
			//	printf("Mensagem:%s",mensagens[j].mensagem_criptografada);
			//	printf("Padrao:%s",padrao);
											
				if (strstr(mensagens[j].mensagem_criptografada,padrao) != 0 )
				{
					printf("entrou B:%d\n");
					
					printf("Mensagem:%s\n",mensagens[j].mensagem_criptografada);
					printf("Padrao:%s\n",padrao);
					b++;
				}	
				j++;			
				printf("J:%d\n",j);
			}
			
			if(b != 0){
				printf("****Padrao encontrado em %d mensagens!****\n", b);
			}else{
				printf("****Padrao nao encontrado!****\n");
			}
					//printf("X: %d\n cont: %d\n w:%d\n", x,cont,w);
				}else{
					if(i==3){
						fflush(stdin);
						printf("****DESCRIPTOGRAFAR MENSAGEM****\nDigite a mensagem criptografada:\n");
						fgets(mensagem_criptografada,42,stdin);
						contagem= strlen(mensagem_criptografada);
						f=0;
						x=0;
						
						/*Descriptografando Mensagens*/
						
while(f<r){
	if(strcmp(mensagem_criptografada, mensagens[f].mensagem_criptografada) == 0){						
		x=0;		
		while(x<(contagem-1)){
			if(mensagem_criptografada[x] != 32){
			//printf("%d\n", contagem);
			//printf("Entrou no while1\nx:%d\n",x);
				if((mensagem_criptografada[x]<70)&&(mensagem_criptografada[x]>64)){
						l=86;
						k=65;
						while(k<80){
							if(mensagem_criptografada[x]==k){
								y=l;
								break;
							}else{
								k++;
								l++;
							}
						}
				}else{
					if((mensagem_criptografada[x]>96)&&(mensagem_criptografada[x]<102)){
						
						l=118;
						k=97;
						while(k<102){
							if(mensagem_criptografada[x]==k){
								y=l;
								break;
							}else{
								k++;
								l++;
							}
						}
	
					}else{
						if((mensagem_criptografada[x]>69) && (mensagem_criptografada[x]< 91)){
							l=mensagem_criptografada[x];
							y=l;
							y= l-5;
						}else{
							if(mensagem_criptografada[x]>101){
								l=mensagem_criptografada[x];
								y=l;
								y= l-5;
							}
						}		
					}
				}
			}else{
				y=32;
			}
		//	printf("Y:%d\n",y);
		//	printf("X:%d\n",x);
			mensagem_descriptografada[x] = y;
			x++;
		}
		
	}
	//	printf("x:%d\n",x);
	//	printf("contagem:%d\n",contagem);
		if(x==(contagem-1)){
			printf("%s",mensagens[f].nome_agente);
			printf("%s",mensagens[f].departamento);
			printf("%s\n",mensagem_descriptografada);
			printf("%d\n",mensagens[f].identificacao_agente);
			break;
		}else{
				f++;
		}
	//	printf("F:%d",f);
	//	printf("r:%d\n",r);
		if(f==r){
			printf("****Mensagem nao encontrada!****\n");
			break;
		}
}																				
					}else{
						if(i==4){
							if(m>0){
								printf("****VISUALIZAR TODAS AS MENSAGENS****\n");
								for(p=0;p<r;p++){
									printf("%s",mensagens[p].nome_agente);
									printf("%s",mensagens[p].departamento);
									printf("%s",mensagens[p].mensagem_criptografada);
									printf("%d\n",mensagens[p].identificacao_agente);

								}
							}else{
								printf("****Sistema Vazio!****\n");
							}
						}else{
							printf("****Opcao Invalida, tentar novamente****\n");
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
