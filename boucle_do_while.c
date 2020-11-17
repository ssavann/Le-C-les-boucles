#include <stdio.h>
#include <stdlib.h>




int main()
{

	int saisie_utilisateur = 0;

	do
	{
		printf("Entrez un nombre entre 1 et 10 \n");
		scanf("%d", &saisie_utilisateur);
	}
	while(saisie_utilisateur < 1 || saisie_utilisateur > 10);
	

	return 0;
}








 