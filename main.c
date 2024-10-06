#include "tic-tac-toe.h"

int n;

int main()
{

	printf("taper 1 pour jouer, 2 pour quitter\n");
	scanf("%d", &n);

	char tab[9];
	int movement;
	int x = 1;

	while(x == 1)
	{

		if(n == 2)
		{
			printf("Fin");
			break;
		}
		else if(n == 1)
		{
			printf("Move:\n");
			scanf("%d", &movement);

			move(tab, movement);

			Board(tab);
		}	
		else
		{
			printf("Erreur pas 1 ou 2\n");
			break;
		}
		
		
	}
	

	
	return 0;
}

