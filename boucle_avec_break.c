#include <stdio.h>
#include <stdlib.h>




int main()
{
	
	const int CODE_SECRET = 1234;
	const int MAX_TENTATIVES = 3;

	int saisie_utilisateur = 0;

	for (int nb_tentatives = 1; nb_tentatives <= MAX_TENTATIVES; nb_tentatives++)
	{
		printf("Entrez le code: \n");
		scanf("%d\n", &saisie_utilisateur);

		if (saisie_utilisateur < 0)
		{
			printf("Le code doit etre superieur a 0 !\n");
			continue; 	//s'il n'a pas trouve le code il continue
		}



		if (saisie_utilisateur == CODE_SECRET)
		{
			printf("Bienvenue !\n");
			break;	//s'il trouve le code, il fait un break ici
		}

		else
		{
			printf("Code Incorrect !\n");
		}
	}


	return 0;
}








 