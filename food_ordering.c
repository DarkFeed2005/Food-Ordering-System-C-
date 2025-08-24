#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include<time.h>

void breakFast();
void lunch();
void dinner();
void mainmenu();
void exit();

COORD coord = {0,0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int num;
float price;
float total;
char choice;
int again;

void main()
{
	mainmenu();
}

