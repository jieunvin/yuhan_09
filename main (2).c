#include <stdio.h>


int print_title_screen()
{
	printf("####################################\n");
	printf("##                                ##\n");
        printf("##            Dino pixl           ##\n");
        printf("##              v.o.l	          ##\n");
	printf("##                                ##\n");
        printf("##                                ##\n");
	printf("##          1. start game         ##\n");
        printf("##          2. How to play        ##\n");
	printf("##          3. EXIT               ##\n");
	printf("####################################\n");
	return 0;
}

int print_how_to_play_screen()

{	printf("################################\n");
	printf("##                            ##\n");
	printf("##                            ##\n");
	printf("##      Press the space bar   ##\n");
	printf("##      and, move             ##\n");
	printf("##                            ##\n");
	printf("################################\n");
       return 0;
}

int main()
{
	int game_state = 1;

	while(game_state)
	{
		int click;
		if (game_state == 1)
		{
			print_title_screen();
			printf("click>");
			scanf("%d",&click);
			
			if(click == 1)
				continue;

			else if(click == 2)
			{	
				game_state = 2;
				continue;
 			}
			else if(click == 3)
				game_state = 0;

			else 
				continue;
		}

		else if (game_state == 2)
		{
			print_how_to_play_screen();
			printf("Return To Menu?");
			scanf("%d",&click);
		
			if (click == 1)
			{
				game_state =1;
				continue;
			}

		else if (click == 2)

			continue;
		}

	}
	return 0;
}
