#include <stdio.h>
#include <stdlib.h>

int game_main_screen(){
    char screen[20][50];
    char title[19] = "Tei's Secret Cabin";
    char start[15] = "1.[start game]";
    char help[9] = "2.[Help]";
    char exit[9] = "3.[Exit]";
    
    for(int a = 0; a < 20; a ++){
        for (int b = 0; b < 50; b ++){
            if(a == 0 || a == 19)
                screen[a][b] = '-';
            else if (b == 0 || b == 48)
                screen[a][b] = '!';
            else
                screen[a][b] = ' ';
            if ((a == 3 && b == 3) || (a == 18 && b == 47) ||
                (a == 3 && b == 47) || (a == 18 && b == 3))
                screen[a][b] = '*';
        }
        screen[a][49] = '\n';
    }
    for (int a = 0; a <= 17; a++)
        screen[8][a+1] = title[a];
    for (int a = 0; a <= 13; a++)
        screen[13][a+21] = start[a];
    for (int a = 0; a <= 7; a++)
        screen[14][a+21] = help[a];
    for (int a = 0; a <= 7; a++)
        screen[15][a+21] = exit[a];

    screen[19][49] = '\0';
    printf("%s\n", screen);
    return 0;
}

int game_help() {
    char screen[20][50];
    char first[68] = "It's a game where you take care of Tei decorate the cabin together!";
    char second[42] = "How to take care of Tei: feed, wash, love";
    char third[32] = "Return to Main Home?(1.yes/2.no)";
    
    for(int a = 0; a < 20; a ++){
        for (int b = 0; b < 50; b ++){
            if(a == 0 || a == 19)
                screen[a][b] = '-';
            else if (b == 0 || b == 48)
                screen[a][b] = '!';
            else
                screen[a][b] = ' ';
        }
        screen[a][49] = '\n';
    }
    for (int a = 0; a <= 66; a++)
        screen[8][a+10] = first[a];
    for (int a = 0; a <= 40; a++)
        screen[10][a+10] = second[a];
    for (int a = 0; a <= 30; a++)
        screen[15][a+10] = third[a];

    screen[19][49] = '\0';
    printf("%s\n", screen);
    return 0;
}

int game_exit() {
    char screen[20][50];
    char ex[19] = "Are You Sure Exit?";
	char choose[15] = "(1. Yes/2. No)";
    
    for(int a = 0; a < 20; a ++){
        for (int b = 0; b < 50; b ++){
            if(a == 0 || a == 19)
                screen[a][b] = '-';
            else if (b == 0 || b == 48)
                screen[a][b] = '!';
            else
                screen[a][b] = ' ';
        }
        screen[a][49] = '\n';
    }
    for (int a = 0; a <= 17; a++)
        screen[9][a+15] = ex[a];
    for (int a = 0; a <= 13; a++)
        screen[10][a+17] = choose[a];

    screen[19][49] = '\0';
    printf("%s\n", screen);
    return 0;
}

int main() 
{
    
    int click = 1;
    while (click)
    {

        if (click == 1)
        {
            system("cls");
            game_main_screen();
            printf("0ㅅ0 input! >--");
            scanf("%d", &click);
        }
        else if (click == 2)
        {
            system("cls");
            game_help();
            printf("0ㅅ0 input! >--");
            scanf("%d", &click);
            if (click == 1)
            {
                system("cls");
                click = 1;
            }
            else if (click == 2)
            {
                system("cls");
                click = 2;
            }
        }
        else if (click == 3)
        {
            system("cls");
            game_exit();
            printf("0ㅅ0 input! >--");
            scanf("%d", &click);

            if (click == 1)
            {
                system("cls");
                click = 0;
            }
            else if (click == 2)
            {
                system("cls");
                click = 1;
            }
            else
            {
                system("cls");
                click = 3;
             }

        }
    }
}

