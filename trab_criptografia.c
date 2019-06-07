#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

	int escolha_menu, i=10,x=0,l=0,k=0,t=0,m=0,f=0,w,z, identificacao_agente, contagem=0, y, p, cont=0;
	char nome_agente[100],departamento[60],mensagem_sem_criptografia[40],mensagem_criptografada[40], mensagem_descriptografada[40], padrao[40];
	char alfabeto[]="abcdefghijklmnopqrstuvwxyz";
	char alfabeto_2[]="vwxyz";
	char alfabeto_3[]="abcde";
	char alfabetoMaiusculo[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alfabetoMaiusculo_2[]="VWXYZ";
	char  alfabetoMaiusculo_3[]="ABCDE";

	typedef struct criptografar_mensagem{
		char nome_agente[100];
		char departamento[60];
		char mensagem_criptografada[40];
		int identificacao_agente;

	} Criptografar;
	
	Criptografar mensagens[1000];

	while(i =! 0){
		fflush(stdin);
		printf("****MENU CRIPTOGRAFIA****\n1: Criptografar mensagem\n2: Encontrar padroes\n3: Descriptografar mensagem\n4: Visualizar todas as mensagens\n0: Sair!\n");
		scanf("%d",&escolha_menu);
		getchar();
		i= escolha_menu;
		//printf("Valor de i: %d\n", i);
		if(i==0){
			break;
		}else{
			if(i==1){
				while(t<1000){
					//printf("Criptografar Mensagem\n");
					printf("****ADICIONAR MENSAGEM****\n");

					fflush(stdin);
					printf("Digite o nome do agente:\n");
					fgets(mensagens[t].nome_agente,100,stdin);
					
					fflush(stdin);
					printf("Digite o departamento:\n");
					fgets(mensagens[t].departamento,60,stdin);
					
					fflush(stdin);
					printf("Digite a mensagem a ser criptografada:\n");
					fgets(mensagem_sem_criptografia,40,stdin);
					

					printf("Digite o numero de identificacao do agente:\n");
					scanf("%d",&mensagens[t].identificacao_agente);
					contagem = strlen(mensagem_sem_criptografia);
					t++;
					break;
				}
				x=0;
				k=0;
				/*Criptografando a mensagem*/
				while(x<contagem){				
					if((mensagem_sem_criptografia[x]<86) && (mensagem_sem_criptografia[x]>96)&&(mensagem_sem_criptografia[x]<118)){
						printf("entrounoif\n");						
						l = mensagem_sem_criptografia[x];
						y = l;
						if (mensagem_sem_criptografia[x] != 32)
 						{
							 y = l+5;
						}
						mensagens[m].mensagem_criptografada[x] = y;
						//printf("alfabeto+5: %d, L: %d x: %d posicaoy:%d\n", y,l,x,alfabeto[y]);
						x++;
					}else{
						while(k<5){
								printf("Enrou no while K: %d\n",k);
							if(alfabeto_2[k] == mensagem_sem_criptografia[x]){
								if (mensagem_sem_criptografia[x] != 32)
								{
									mensagens[m].mensagem_criptografada[x] = alfabeto[k];
								}
								else
								{
								  mensagens[m].mensagem_criptografada[x] = 32;	
								}
								x++;
								l=0;
								break;
							}else{
								if(alfabetoMaiusculo_2[k] == mensagem_sem_criptografia[x]){
									if (mensagem_sem_criptografia[x] != 32){
										mensagens[m].mensagem_criptografada[x] = alfabetoMaiusculo[k];
									}else{
								  		mensagens[m].mensagem_criptografada[x] = 32;	
									}
									x++;
									l=0;
									break;
								}else{
									k++;	
								}							
							}
						}
						//printf("Saiu do while\n");
						if(k==4){
							break;
						}	
					}
				}

				mensagens[m].mensagem_criptografada[x-1] = '\n';
				m++;
				x=0;

				printf("Criptografou? %s %d\n", mensagens[m-1].mensagem_criptografada,m);
				//printf("%d\n", teste);

									
			}else{
				if(i==2){
					printf("Digite o padrao a ser encontrado:\n");
					fgets(mensagem_sem_criptografia,40,stdin);
					x=0;
					k=0;
					contagem = strlen(mensagem_sem_criptografia);
					printf("Mensagem sem criptografia %s\n",mensagem_sem_criptografia);
					
				/*Criptografando a mensagem*/
						while(x<contagem){	
							//printf("Entrou no while\n");			
							if(((mensagem_sem_criptografia[x]<86) && (mensagem_sem_criptografia[x]>90)) ||(mensagem_sem_criptografia[x]<=117)){
								l = mensagem_sem_criptografia[x];
								y = l;
								if (mensagem_sem_criptografia[x] != 32)
		 						{
									 y = l+5;
								}
								padrao[x] = y;
								//printf("alfabeto+5: %d, L: %d x: %d posicaoy:%d\n", y,l,x,alfabeto[y]);
								x++;
							}else{
								while(k<5){
									//printf("Enrou no while\n");
									if(alfabeto_2[k] == mensagem_sem_criptografia[x]){
										if (mensagem_sem_criptografia[x] != 32)
										{
											padrao[x] = alfabeto[k];
										}
										else
										{
										  padrao[x] = 32;	
										}
										x++;
										l=0;
										break;
									}else{
										if(alfabetoMaiusculo_2[k] == mensagem_sem_criptografia[x]){
											if (mensagem_sem_criptografia[x] != 32){
												padrao[x] = alfabetoMaiusculo[k];
											}else{
										  		padrao[x] = 32;	
											}
											x++;
											l=0;
											break;
										}else{
											k++;	
										}							
									}
								}
								if(k==4){
									k=0;
									l++;
								}	
							}
						}
						/*Fim criptografia*/
						
						padrao[x-1] = '\n';
						y=0;

					for(z=0;z<1000;z++){
						//printf("Entrou no for %s\n O valor de z:%d\n", mensagens[z].mensagem_criptografada,z);
						//printf("%s\n", mensagens[w-1].mensagem_criptografada);
						contagem = strlen(padrao);

						w=0;
						k=0;
						cont=0;
						while(w<contagem && y<contagem){
							if(padrao[w] == mensagens[z].mensagem_criptografada[k]){
								cont++;
								w++;
								k++;
							}else{
								k++;
								
							}						
						}
						if(cont==contagem){
							//printf("entrou no if\n");
							//printf("Mensagem:%s\n",mensagens[z].mensagem_criptografada);
							//printf("padrao:%s\n",padrao);
							//printf("um teste dessa merda\n");
							if(strcmp(padrao,mensagens[z].mensagem_criptografada) == 0){		
								y++;
							}
						}
						
						
					}
					//printf("Saiu do for\n");
					//printf("%s\n",mensagens[0].mensagem_criptografada);
					printf("Padrao:%s\nMensagem:%s\nCont:%d\nY:%d\ncontagem:%d\n",padrao,mensagens[0].mensagem_criptografada,cont,y,contagem);
					
					if(y != 0){
						printf("****Padrao encontrado em %d mensagens!****\n", y);
					}else{
						printf("****Padrao nao encontrado!****\n");
					}
					//printf("X: %d\n cont: %d\n w:%d\n", x,cont,w);
				}else{
					if(i==3){
						fflush(stdin);
						printf("****DESCRIPTOGRAFAR MENSAGEM****\nDigite a mensagem criptografada:\n");
						fgets(mensagem_criptografada,40,stdin);
						contagem= strlen(mensagem_criptografada);
						f=0;
						/*Descriptografando Mensagens*/

						while(f<1000){
							if(strcmp(mensagem_criptografada, mensagens[f].mensagem_criptografada) == 0){
								
								x=0;
								k=0;
								
								while(x<contagem){
									//printf("%d\n", contagem);
									//printf("Entrou no while1\nx:%d\n",x);
									if((mensagem_criptografada[x]>101) || ((mensagem_criptografada[x]>69) && (mensagem_criptografada[x]< 91))){
										//printf("Entrou no If2\n");
										l=mensagem_criptografada[x];
										y=l;
										if(mensagem_criptografada[x] != 32){
											y= l-5;
										//	printf("Y:%d\n",y);
											mensagem_descriptografada[x] = y;
											x++;
										//	printf("X:%d\n",x);
										}else{
											mensagem_criptografada[x] = 32;
										}					
									}if (x==(contagem-1)){
										break;
									}else{
										while(k<5){
											//printf("entrou no while\n");
											if(alfabeto_3[k] == mensagem_criptografada[x]){
												//printf("Entrou no errado\n");
												if(mensagem_criptografada[x] != 32){
													
													mensagem_descriptografada[x] = alfabeto_3[k];
												}else{
													
													mensagem_descriptografada[x] = 32;
												}
												x++;
												k=0;
												break;
											}else{
												if(alfabetoMaiusculo_3[k] == mensagem_criptografada[x]){
													//printf("Entrou no if de maiúscula\n");
													if(mensagem_criptografada[x] != 32){
													
														mensagem_descriptografada[x] = alfabetoMaiusculo_3[k];
													}else{
														
														mensagem_descriptografada[x] = 32;
													}
													x++;
													k=0;
													break;
												}else{
													k++;
												}
											}
										}
										if(k==4){
											k=0;
										}
									}
									if(x == (contagem-1)){
										//printf("Chegou no break\n");
										break;
									}
								}
														
							}
							if(x==(contagem-1)){
								printf("%s",mensagens[f].nome_agente);
								printf("%s",mensagens[f].departamento);
								printf("%d\n",mensagens[f].identificacao_agente);
								printf("%s\n",mensagem_descriptografada);
								break;
							}else{
								f++;
								//printf("F:%d",f);
								if(f==(1000-1)){
									printf("****Mensagem nao encontrada!****\n");
									break;
								}
							
							}
						}					
														
					}else{
						if(i==4){
							if(m>0){
								for(p=0;p<m;p++){
					
									printf("%s",mensagens[p].nome_agente);
									printf("%s",mensagens[p].departamento);
									printf("%d\n",mensagens[p].identificacao_agente);
									printf("%s\n",mensagens[p].mensagem_criptografada);

								}
							}else{
								printf("****Sistema Vazio!****\n");
							}
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
