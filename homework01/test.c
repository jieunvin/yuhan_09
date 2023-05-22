#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char screen[20][50];

int writeString(const char* string, int y){
    int length = strlen(string);
    int center = (50-length)/2;
    for (int i = 0; i < length; i ++){
        screen[y][i + center] = string[i];
    }
}

int game_main_screen(){
    
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
    writeString("Tei's Secret Cabin", 8);
    writeString("1.[start game]", 13);
    writeString("2.[Help]", 14);
    writeString("3.[Exit]", 15);
    screen[19][49] = '\0';
    printf("%s\ninput>", screen);
    return 0;
}

int game_help() {
    
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
    writeString("It's a game where you take care of", 8);
    writeString(" Tei decorate the cabin together!", 9);
    writeString("How to take care of Tei: feed, wash, love", 10);
    writeString("Return to Main Home?(1.yes/2.no)", 15);
    screen[19][49] = '\0';
    printf("%s\ninput>", screen);
    return 0;
}

int game_exit() {

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
    writeString("Are You Sure Exit?", 9);
    writeString("(1. Yes/2. No)", 10);
    screen[19][49] = '\0';
    printf("%s\ninput>", screen);
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
            scanf("%d", &click);
        }
        else if (click == 2)
        {
            system("cls");
            game_help();
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
            else
            {
                click = 2;
            }
        }
        else if (click == 3)
        {
            system("cls");
            game_exit();
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