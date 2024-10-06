#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*char init(board[])
{

}*/

char Board(char board[])
{

    printf("\n\n");
    printf("\t\t\t %c | %c | %c \n",board[0], board[1], board[2]);
    printf("\t\t\t--------------\n");

    printf("\t\t\t %c | %c | %c \n",board[3], board[4], board[5]);
    printf("\t\t\t--------------\n"); 

    printf("\t\t\t %c | %c | %c \n\n", board[6], 
           board[7], board[8]); 
}

char move(char board[],int movement)
{
	switch(movement)
	{
    case 1:
        board[0] = 'X'; 

        break;

    case 2:
		board[1] = 'X'; 

    	break;

    case 3:
    	board[2] = 'X'; 

    	break;

    case 4:
        board[3] = 'X'; 

        break;

    case 5:
		board[4] = 'X'; 

    	break;

    case 6:
        board[5] = 'X'; 

        break;

    case 7:
		board[6] = 'X'; 

    	break;

    case 8:
        board[7] = 'X'; 

        break;

    case 9:
		board[8] = 'X'; 

    	break;
    default:
    	printf("Erreur, Entrer un chiffre entre 1 et 9");
        
	}
}

/*int game(int n)
{

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
			printf("Erreur pas 1 ou 2");
			break;
		}
		
		
	}
}
*/
