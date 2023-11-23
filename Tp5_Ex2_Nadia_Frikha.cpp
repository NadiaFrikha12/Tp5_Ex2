//EX2: Ecrire un programme qui lit un texte TXT (de moins de 200 caractères) et qui enlève toutes Les apparitions du charactere e en tassant les elements restants. Les modifications se feront dans la meme variable TXT.

#include<stdio.h>
#include<string.h>
int main(){
	char TXT[201];
	int i,j; //compteurs
	
	//lire une chaine
	printf("donner une ligne de text ne depassant pas 200 caracteres \n");
	gets(TXT);
	
	//enlever les apparitions de 'e'
	for( i=0; i<strlen(TXT); i++){
		if (TXT[i]=='e'){
			for (j=i; j<strlen(TXT);j++){
				TXT[j]= TXT[j+1];	
			}
		}
	}	
	
	
	
	// afficher la chaine sans le caractere 'e'
	puts(TXT);
	
	return 0;
}
