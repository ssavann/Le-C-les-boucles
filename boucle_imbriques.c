#include <stdio.h>
#include <stdlib.h>




int main()
{
	int id_table = 3;
	printf("Table de multiplication de %d\n", id_table);

	for(int ligne = 0; ligne <= 10; ligne++)
	{
		printf("\t %d X %d = %d\n", id_table, ligne, id_table * ligne);
	}

	return 0;
}








 