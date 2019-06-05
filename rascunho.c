while(x<contagem){
	if(((mensagem_sem_criptografia[x]<86) && (mensagem_sem_criptografia[x]>90)) ||(mensagem_sem_criptografia[x]<117)){
		mensagens.mensagem_criptografada[x] == alfabeto[l+5];
		x++;
		l=0;
	}else{
		while(k<5){
			if(alfabeto_2[k]== mensagem_sem_criptografia[x]){
				mensagens.mensagem_criptografada[x] == alfabeto[k];
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

				while(x<10){
					//printf("entrou no while 1\n");
					if( (alfabeto[l] == mensagem_sem_criptografia[x]) && (mensagem_sem_criptografia[x] =! 86) && (mensagem_sem_criptografia[x] =! 87) && (mensagem_sem_criptografia[x] =! 88) && (mensagem_sem_criptografia[x] =! 89) && (mensagem_sem_criptografia[x] =! 90)){
						printf("entrou no if\n");
						mensagens.mensagem_criptografada[x] == alfabeto[l+5];
						x++;
						l=0;
					}else{
						if(alfabeto[l] == mensagem_sem_criptografia[x]){
							while(k<5){
								printf("entrou no while 2\n");
								if(alfabeto_2[k]== mensagem_sem_criptografia[x]){
									mensagens.mensagem_criptografada[x] == alfabeto[k];
									x++;
									l=0;
									break;
								}else{
									k++;								
								}
							}
							//printf("saiu do while 2\n");
						}else{

						l++;
						}	
					}
				}
				printf("Criptografou?:%s\n", mensagens.mensagem_criptografada)	;
