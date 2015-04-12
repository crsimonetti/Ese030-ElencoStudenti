#include <stdio.h>
#include <stdlib.h>

#define NumeroStudenti 3
#define MAX_STRLEN 30

struct s_studente {
	char nome[MAX_STRLEN+1];
	char cognome[MAX_STRLEN+1];
    int eta;
	char classe[MAX_STRLEN+1];
}studenti[NumeroStudenti];

int main(int argc, char** argv) {
	int i;
	for (i=0;i<NumeroStudenti;i++) {
		
		printf("Inserisci il nome del %d studente: \n", i+1);
	    scanf("%s", studenti[i].nome);
		
        printf("Inserisci il cognome del %d studente: \n",i+1);
		scanf("%s", studenti[i].cognome);
		
        printf("Inserisci l eta' del %d studente: \n",i+1);
		scanf("%d", &studenti[i].eta);
		
        printf("Inserisci la classe del %d studente: \n",i+1);
		scanf("%s", studenti[i].classe);
	}
    
	for (i=0;i<NumeroStudenti;i++) {
		printf("%s; %s; %d; %s\n", studenti[i].nome, studenti[i].cognome, studenti[i].eta, studenti[i].classe);
	}
    system ("PAUSE");
    return (EXIT_SUCCESS);
}

