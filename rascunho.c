				x=0;
				k=0;
				r=0;
				printf("Mensagem:%d\n",mensagem_sem_criptografia[x]);
				/*Criptografando a mensagem*/
				while(x<contagem){
					l = mensagem_sem_criptografia[x];
					y = l;

					if (mensagem_sem_criptografia[x] != 32){
									printf("Mensagem:%d\n",mensagem_sem_criptografia[x]);	
						if(mensagem_sem_criptografia[x]<=85){
							
							printf("ent rounoif y:%d\n",y);						
							 y = l+5;
						}else{
					
						if((mensagem_sem_criptografia[x]>85)&&(mensagem_sem_criptografia[x]<91)){
								printf("Entrou errado 2 \n");
								k=0;
								while(k<5){
									if(alfabetoMaiusculo_2[k] == mensagem_sem_criptografia[x]){
										if (mensagem_sem_criptografia[x] != 32){
											mensagens[m].mensagem_criptografada[x] = alfabetoMaiusculo[k];
										}else{
									  		mensagens[m].mensagem_criptografada[x] = 32;	
										}
										x++;
										r=1;
										break;
									}else{
										k++;	
									}							
								}	
						
						}else{
							if((mensagem_sem_criptografia[x]>96) && (mensagem_sem_criptografia[x]<118)){
								printf("Entrou errado 1 \n");
								y = l+5;
							}else{						
						
								if(mensagem_sem_criptografia[x]>117){

									while(k<5){
											printf("Entrou no while K: %d\n",k);
										if(alfabeto_2[k] == mensagem_sem_criptografia[x]){
											if (mensagem_sem_criptografia[x] != 32)
											{
												printf("Entrou no if certo\n");
												mensagens[m].mensagem_criptografada[x] = alfabeto[k];
											}
											else
											{
											  mensagens[m].mensagem_criptografada[x] = 32;	
											}
											x++;
											r=1;
											break;
										}else{
											k++;			
										}
									}
							}
						}
						
					}
				}
					if(r==0){
						mensagens[m].mensagem_criptografada[x] = y;
						x++;
						
					}
			}else{
				y = 32;
				mensagens[m].mensagem_criptografada[x] = y;
				x++;
				}
				
				
				
		}
				mensagens[m].mensagem_criptografada[x-1] = '\n';
				m++;
				x=0;

				printf("Criptografou? %s %d\n", mensagens[m-1].mensagem_criptografada,m);
				//printf("%d\n", teste);

									
			}else{


/*

					Para l+5
Caso 1 : mensagem_sem_criptografia[x] > 64 && mensagem_sem_criptografia[x] < 86
Caso 2 : mensagem_sem_criptografia[x]	>96 && mensagem_sem_criptografia[x] < 118

				Para alfabeto[k]

Caso 1 : mensagem_sem_criptografia[x] > 85 &&  < 91
CAso 2 : mensagem_sem_criptografia[x] > 117 && mensagem_sem_criptografia[x]< 123

*/
while(x<contagem){		
	if(mensagem_sem_criptografia[x] != 32){
		if((mensagem_sem_criptografia[x]>85) && (mensagem_sem_criptografia[x]<91)) {
			k=86;
			while(k<91){
				if(mensagem_sem_criptografia[x] == k){
					y=k;
					break;
				}else{
					k++;
				}
			}
		}else{
		/*Fim caso 1*/
			if((mensagem_sem_criptografia[x]>117) && (mensagem_sem_criptografia[x]<123)){
				k=118;
				while(k<123){
					if(mensagem_sem_criptografia[x]==k){
						y=k;
						break;
					}else{
						k++;
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
m++;
printf("Criptografou? %s\n", mensagens[0].mensagem_criptografada);

		
				l=118
				while((k<91) && (l<117)){
					if(mensagem_sem_criptografia[x]==k){
						y=k;
						break;
					}else{
						if(mensagem_sem_criptografia[x]==l){
							y=l;
							break;
						}else{
							k++;
							l++;
						}
					}
				}
		}else{
			if(((mensagem_sem_criptografia[x] > 64) && (mensagem_sem_criptografia[x] < 86)) || ((mensagem_sem_criptografia[x] > 117) && (mensagem_sem_criptografia[x]< 123))){
				l = mensagem_sem_criptografia[x];
				y = l;
				y = l+5;
			}
		}
	}else{
		y = 32;
	}
	mensagens[m].mensagem_criptografada[x] = y;
	x++;
}





mensagens[m].mensagem_criptografada[x-1] = '\n';
m++;
printf("Criptografou? %s\n", mensagens[0].mensagem_criptografada);
				while(x<contagem){				
					if(((mensagem_sem_criptografia[x]<86) && (mensagem_sem_criptografia[x]>90)) ||(mensagem_sem_criptografia[x]<=117)){
						l = mensagem_sem_criptografia[x];
						y = l;
						if (mensagem_sem_criptografia[x] != 32)
 						{
							 y = l+5;
						}
						mensagens[m].mensagem_criptografada[x] = y;
						printf("alfabeto+5: %d, L: %d x: %d posicaoy:%d\n", y,l,x,alfabeto[y]);
						x++;
					}else{
						while(k<5){
							printf("Enrou no while\n");
							if(alfabeto_2[k]== mensagem_sem_criptografia[x]){
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
								k++;								
							}
						}
						if(k==4){
							k=0;
							l++;
						}	
					}
				}

				mensagens[m].mensagem_criptografada[x-1] = '\n';
				m++;
				x=0;

				printf("Criptografou? %s\n", mensagens[0].mensagem_criptografada);
//printf("%d\n", teste);



////



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


////




y=0;		
			printf("R:%d\n",r);
			z=0;
			h=0;
			q=0;
			x=0;
			f=0;
			b=0;
			for(w=o;w<r;w++){
				
			}

			for(w=0;w<r;w++){
				contagem = strlen(mensagens[w].mensagem_criptografada);
				printf("Contagem:%d\n", contagem);
				while(b<(contagem-1)){
					printf("Entrou no if\n");
					j = mensagens[w].mensagem_criptografada[h]; 
					printf("P:%d\N", j);
					if( j =! 32){
						printf("Entrou no if2\n");
						while( j =! 32){
							j = mensagens[t].mensagem_criptografada[x];
							procurar[q].palavras_padrao[f] = mensagens[t].mensagem_criptografada[x];
							x++;
							f++;
						}
						
						f=0;
						printf("Palavra guardada: %s\n", procurar[q].palavras_padrao);
						printf("Padrao: %s\n", padrao);
						if(strcmp(procurar[q].palavras_padrao,padrao)==0){
							y++;
							break;
						}	
						q++;
					}else{
						h++;
					}
					b++;
				}
				
			}
					printf("B:%d\n",b);
					
					//printf("Saiu do for\n");
					//printf("%s\n",mensagens[0].mensagem_criptografada);
					printf("Y:%d\n",y);
					
