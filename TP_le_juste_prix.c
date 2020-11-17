#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
	 

	printf("Le jeux - juste Prix\n");

	//declaration de nos variables
	int nombre_mysterieuse = 0, nombre_utilisateur = 0, nombre_tentative = 0, saisie_utilisateur = 0;
	const int VALEUR_MIN = 1, VALEUR_MAX =  100, MAX_TENTATIVES = 10;

	do
	{
		//generation d'un nombre aleatoire
	srand(time(NULL));
	nombre_mysterieuse = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
	nombre_tentative = 0;

	printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d\n", VALEUR_MIN, VALEUR_MAX );

	do
	{

		if (nombre_tentative >= MAX_TENTATIVES)
		{
			printf("Dommage ! Le nombre mystere etait %d n", nombre_mysterieuse);
			break;
		}	

		printf("Saisie Utilisateur: \n");
		scanf("%d\n", &nombre_utilisateur);
		nombre_tentative++;

		//on compare nombre utilisateur et le nombre mystere
		if (nombre_mysterieuse > nombre_utilisateur)
		{
			printf("C'est plus!\n");
		}
		else if(nombre_mysterieuse < nombre_utilisateur)
		{
			printf("C'est moins!\n");
		}

		else 
		{
			printf("Bravo! le nombre etait: %d, vous l'avez trouve en %d tentatives\n", nombre_mysterieuse, nombre_tentative);
		}

	} 
	while (nombre_utilisateur != nombre_mysterieuse);

	printf("Voulez-vous faire une nouvelle partie (1-oui et 2-non > ");
	scanf("%d\n", &saisie_utilisateur);	
}

while(saisie_utilisateur !=2);	

printf("A bientot!");
	

	return 0;
}








 