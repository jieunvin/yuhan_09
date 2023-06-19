#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

char screen[20][50];

void GotoXYZero() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo = { 1, TRUE };
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
    COORD pos = { 0, 0 };
    SetConsoleCursorPosition(consoleHandle, pos);
}

void clearScreen() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 49; j++) {
            screen[i][j] = ' ';
        }
        screen[i][49] = '\0';
    }
}

void writeString(const char* string, int y) {
    int length = strlen(string);
    int center = (50 - length) / 2;
    for (int i = 0; i < length; i++) {
        screen[y][i + center] = string[i];
    }
}

void drawScreen() {
    GotoXYZero();
    printf("--------------------------------------------------\n");
    for (int i = 0; i < 20; i++) {
        printf("!%s!\n", screen[i]);
    }
    printf("--------------------------------------------------\n");
    printf("input> ");
}

void game_main_screen() {
    clearScreen();
    writeString("Tei's Secret Cabin", 8);
    writeString("1. [start game]", 13);
    writeString("2. [Help]", 14);
    writeString("3. [Exit]", 15);
}

void game_first_screen() {
    clearScreen();
    writeString("Welcome, brave adventurer!", 3);
    writeString("Explore the Secret Cabin with Tei,", 5);
    writeString("solve various options and riddles,", 7);
    writeString("find treasures, and grow up together", 9);
    writeString("on this thrilling journey", 11);
    writeString("back > 1", 15);
}

void game_help() {
    clearScreen();
    writeString("From now on, you can become a", 3);
    writeString("cat's butler named Tei", 5);

    writeString("choose various options, and go on ", 9);
    writeString("an adventure by growing Tei.", 11);
    writeString("Are you ready? (1. yes / 2. no)", 15);
}

void game_exit() {
    clearScreen();
    writeString("Are You Sure Exit?", 8);
    writeString("(1. Yes / 2. No)", 9);
}

int main() {
    system("cls");
    int click = 1;
    while (click) {
        if (click == 1) {
            game_main_screen();
            drawScreen();
            char input = getchar();
            if (input != '\n') {
                while (getchar() != '\n') {
                    continue;
                }
            }
            click = (input == '1') ? 2 : (input == '2') ? 5 : (input == '3') ? 3 : 1;
        }
        else if (click == 2) {
            game_first_screen();
            drawScreen();
            char input = getchar();
            if (input != '\n') {
                while (getchar() != '\n') {
                    continue;
                }
            }
            click = (input == '1') ? 1 : 1;
        }
        else if (click == 5) {
            game_help();
            drawScreen();
            char input = getchar();
            if (input != '\n') {
                while (getchar() != '\n') {
                    continue;
                }
            }
            click = (input == '1') ? 2 : (input == '2') ? 1 : 5;
        }
        else if (click == 3) {
            game_exit();
            drawScreen();
            char input = getchar();
            if (input != '\n') {
                while (getchar() != '\n') {
                    continue;
                }
            }
            click = (input == '1') ? 0 : (input == '2') ? 1 : 3;
        }
    }
    return 0;
}
